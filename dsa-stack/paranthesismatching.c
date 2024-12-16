#include<stdio.h>
#include<stdlib.h>

struct stack {
    int size;
    int top;
    char *arr;
};

int isfull(struct stack *ptr ){
    if(ptr -> top == ptr -> size -1){
        return 1;
    }
    return 0;
}

int isempty(struct stack *ptr ){
    if(ptr -> top == -1){
        return 1;
    }
    return 0;
}
void push (struct stack *ptr,char value ){
    if(isfull(ptr )){
        printf("stack overflow ");
    }
    ptr -> top++;
    ptr -> arr[ptr -> top]=value;
}

char pop(struct stack *ptr ){
    if(isempty(ptr)){
        printf("stack underflow ");
        return -1;
    }
    char value = ptr -> arr[ptr -> top];
    ptr -> top--;
    return value ;
}

int parenthesismatch(char *exp){
    struct stack *sp;
    sp-> size = 100;
    sp-> top = -1 ;
    sp -> arr=(char *)malloc(sp->size*sizeof(char ));

    for(int i =0;exp[i]!='\0';i++){

        if(exp[i]=='('){
            push(sp,'(');


        }
        else if (exp[i]==')'){
            if(isempty(sp)){
              return 0;  
            }
            pop(sp);

        }
    }
    if(isempty(sp)){
        return 1;
    }
    return 0;
}

int main (){
  
    char *exp =" 8*(9+()9*19))";


    
    if(parenthesismatch(exp)){
        printf("the parenthesis is matching ");

    }
    else{
        printf("the parenthesis is not matching ");
    }

   return 0; 
}