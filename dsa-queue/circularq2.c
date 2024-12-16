#include <stdio.h>
#include <stdlib.h>




struct circularqueue {
    int *arr; 
    int f; 
    int r; 
    int size;
};


int isEmpty(struct circularqueue *q) {
    return (q->f == -1);
}


int isFull(struct circularqueue *q) {
    return ((q->r + 1) %q-> size == q->f);
}


void enqueue(struct circularqueue *q, int value) {
    if (isFull(q)) {
        printf("Queue is full\n");
        return;
    }

    if (isEmpty(q)) {  
        q->f = q->r = 0;
    } else {
        q->r = (q->r + 1) % q->size;
    }

    q->arr[q->r] = value;  
    printf("Enqueued element: %d\n", value);
}


int dequeue(struct circularqueue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return -1;
    }

    int value = q->arr[q->f]; 

    if (q->f == q->r) {  
        q->f = q->r = -1;
    } else {
        q->f = (q->f + 1) % q->size;
    }

    return value;
}


void displayqueue(struct circularqueue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue elements:\n");

    
    for (int i = q->f; ; i = (i + 1) % q->size) {
        printf("%d\n", q->arr[i]);
        if (i == q->r) { 
            break;
        }
    }
    printf("\n");
}


int main() {
    struct circularqueue q;
    q.r = -1;  
    q.f = -1;  
    q.size= 100;

    
    enqueue(&q, 15);
    enqueue(&q, 1);
    enqueue(&q, 45);
    enqueue(&q, 55);
    enqueue(&q, 65);

    
    displayqueue(&q);

    
    printf("Dequeued element: %d\n", dequeue(&q));
    printf("Dequeued element: %d\n", dequeue(&q));

    
    displayqueue(&q);

    
    enqueue(&q, 75);
    enqueue(&q, 85);

    
    displayqueue(&q);

    return 0;
}
