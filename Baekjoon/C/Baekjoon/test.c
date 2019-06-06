#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef char element;

typedef struct StackNode{
   element item;
   struct StackNode *link;
} StackNode;

typedef struct{
   StackNode *top;
} LinkedStackType;

void init(LinkedStackType *s){
   s->top = NULL;
}

bool is_empty(LinkedStackType *s){
   if (s->top == NULL){
        return true;
    } else {
        return false;
    }
}

void push(LinkedStackType *s, element item){
   StackNode * tmp = (StackNode*)malloc(sizeof(StackNode));
   if (tmp == NULL){ 
      printf("malloc error");
        return;
   }
   else{
      tmp -> item = item;
      tmp -> link = s-> top;
      s -> top = tmp;
   }
}

void pop(LinkedStackType *s){
   if (is_empty(s)){ 
      exit(1);
   }
   else{
      StackNode * tmp = s->top;
      s->top = s->top->link;
      free(tmp);
   }
}

void clear(LinkedStackType *s){
    while (!is_empty(s)){
        pop(s);
    }
}

int main(void){
    int T;
    char tmp;
    LinkedStackType *s = (LinkedStackType *)malloc(sizeof(LinkedStackType));
    init(s);
    scanf("%d", &T);
    getchar();
    
    while(T--){
        clear(s);
        
        while( (tmp = getchar()) != '\n' ){
            if ( tmp == '(' ){
                push(s,tmp); 
            } else if ( tmp == ')' ) {
                if (!is_empty(s)){
                    pop(s);
                } else {
                    printf("NO\n");
                    break;
                }
            }
        }
        if (is_empty(s)){
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}

