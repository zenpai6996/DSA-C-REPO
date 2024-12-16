#include<stdio.h>
#include<stdlib.h>

struct stack {
    int size;
    int top;
    int *arr;

};

int isFull(struct stack *ptr){
    if(ptr -> top == ptr -> size -1 ){
        return 1;
    }else{
        return 0;
    }

}

int isEmpty(struct stack *ptr){
    if(ptr -> top == -1){
        return 1;
    }else{
        return 0;
    }
}
void push(struct stack* ptr , int value){
    if(isFull(ptr)){
        printf("Stack overflow\n");
    }else{
        ptr -> top++;
        ptr -> arr[ptr -> top]= value;
    }
}

int  pop(struct stack* ptr){
    if(isEmpty(ptr)){
        printf("stack underflow ! cannot pop from the stack\n");
        return -1;
    }else{
        int value = ptr -> arr[ptr -> top];
        ptr -> top--;
        return value;
    }
    
}


int main (){

    struct stack *sp = (struct stack*)malloc(sizeof(struct stack));
    sp-> size=10;
    sp->top =-1;
    sp -> arr =(int *)malloc(sp->size*sizeof(int));
    printf("Stack has been created successfully\n");

    printf("Before pushing full: %d\n",isFull(sp));
    printf("Before pushing Empty :%d\n",isEmpty(sp));
    push(sp,12);
    push(sp,23);
    push(sp,34);
    push(sp,45);
    push(sp,56);
    push(sp,67);
    push(sp,78);
    push(sp,89);
    push(sp,90);
    push(sp,99);//pushed upto size 10 values 
    push(sp,100);//stack overflow since size of the stack is 10
    printf("After pushing full: %d\n",isFull(sp));
    printf("After pushing Empty: %d\n",isEmpty(sp));
    
    printf("popped %d from stack\n",pop(sp));





    return 0;
}