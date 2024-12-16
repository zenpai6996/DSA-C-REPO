#include<stdio.h>
#include<stdlib.h>
 
struct circularqueue
{
    int size;
    int f;
    int r;
    int* arr;
};
 
 
int isEmpty(struct circularqueue *q){
    if(q->r==q->f){
        return 1;
    }
    return 0;
}
 
int isFull(struct circularqueue *q){
    if((q->r+1)%q->size==q->f){
        printf("queue overflow");
    }
    return 0;
}
 
void enqueue(struct circularqueue *q, int val){
    if(isFull(q)){
        printf("This Queue is full\n");
    }
    else{
        q->r = (q->r+1)%q->size;
        q->arr[q->r]=val;
        printf("Enqued element: %d\n", val);
    }
}
 
int dequeue(struct circularqueue *q){
    int a = -1;
    if(isEmpty(q)){
        printf("This Queue is empty\n");
    }
    else{
        q->f==(q->f+1)%q->size;
        a = q->arr[q->f]; 
    }
    return a;
}
void displayqueue(struct circularqueue *q ){
    if(isEmpty(q)){
        printf("queue is empty");
        return;
    }
    printf("queue elements :\n");
       for (int i = q->f; ; i = (i + 1) % q->size) {
        printf("%d\n", q->arr[i]);
        if (i == q->r) { 
            break;
        }
    }
    printf("\n");
}
 
int main(){
    struct circularqueue q;
    q.size = 100;
    q.f = q.r = 0;
    q.arr = (int*) malloc(q.size*sizeof(int));
    
    // Enqueue few elements
    enqueue(&q, 12);
    enqueue(&q, 15);
    enqueue(&q, 1); 
     
    enqueue(&q, 45);
    enqueue(&q, 55);
    enqueue(&q, 65);

    displayqueue(&q);
 
    if(isEmpty(&q)){
        printf("Queue is empty\n");
    }
    if(isFull(&q)){
        printf("Queue is full\n");
    }
 
    return 0;
}