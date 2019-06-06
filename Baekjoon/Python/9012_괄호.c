// 백준 9012 괄호 판단 스택 풀기
#include <stdio.h>
#include <stdlib.h>

typedef char element;
typedef struct StackNode{
	element item;
	struct StackNode *link;
} StackNode;
typedef struct LinkedStackType{
	StackNode *top;
} LinkedStackType;

int is_empty(LinkedStackType *s){
	if(s->top == NULL)
		return 1;
	else
		return 0;
}

void push(LinkedStackType *s, element item){
	StackNode *temp = (StackNode *)malloc(sizeof(StackNode));
	temp->item = item;
	temp->link = s->top;
	s->top = temp;
}

element pop(LinkedStackType *s){
	if(is_empty(s))
		return 0;
	else
	{
		StackNode *temp = s->top;
		element item = s->top->item;
		s->top = s->top->link;
		free(temp);
		return item;
	}
}

char* is_vps(char p[], int n){
	LinkedStackType *pstack = (LinkedStackType *)malloc(sizeof(LinkedStackType));
	pstack->top = NULL;

	for(int i=0; p[i]; i++){	
		if(p[i] == '(')
			push(pstack, p[i]);
		else
			if(!pop(pstack))
				return "NO";	
	}

	if(is_empty(pstack))
		return "YES";
	else
		return "NO";
}

int main(void){
	int T;
	scanf("%d", &T);
	for(int i=0; i<T; i++){
		char p[60];
		scanf("%s", p);
		printf("%s\n", is_vps(p, T));
	}

	return 0;
}