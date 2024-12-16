#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node * next;
};

struct Node *front=NULL ;//global variables
struct Node *rear=NULL;

void LLtraversal(struct Node *ptr){
printf("printing the elements of the queue:\n");
while (ptr!=NULL)
{
    printf("Element :%d\n",ptr->data);
    ptr=ptr->next;
}

}

void enqueue(int val){
    struct Node * n = (struct Node *)malloc(sizeof(struct Node));
    if(n==NULL){//condition for isfull
        printf("queue is empty \n");
    }else{
        n->data=val;
        n->next=NULL;
        if(front==NULL){
            front = rear = n;
        }else{
            rear->next=n;
            rear=n;
        }
    }

}
int dequeue(){
    int val =-1;
    struct Node *ptr = front;
    if(front==NULL){//condition for isempty
        printf("queue is empty\n");
    }else{
        front=front->next;
        val=ptr->data;
        free(ptr);
    }
    return val;

}



int main (){

enqueue(12);
enqueue(22);
enqueue(32);
enqueue(42);
enqueue(52);

LLtraversal(front);
printf("dequeuing element %d\n",dequeue());
LLtraversal(front);


    return 0;
}