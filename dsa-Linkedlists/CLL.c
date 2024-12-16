#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
    struct Node *prev;
};

void linkedListTraversal(struct Node *head) {
   
    struct Node *ptr = head;
    do {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}
struct Node *createLinkedList(int n) {
    struct Node *head = NULL;
    struct Node *temp = NULL;
    struct Node *p = NULL;
    int data;

    for (int i = 0; i < n; i++) {      
        temp = (struct Node *)malloc(sizeof(struct Node));      
        printf("Enter element %d: ", i + 1);
        scanf("%d", &data);       
        temp->data = data;
        temp->next = NULL;      
        if (head == NULL) {
            head = temp;
            temp->next = head;
        } else {            
            p->next = temp;
            temp->next = head;
        }       
              p = temp;
    }
    return head;
}

struct Node *insertAtFirst(struct Node *head, int data) {
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    ptr->data = data;
   
    while (p->next != head) {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    return ptr;
}


struct Node *insertAtIndex(struct Node *head, int data, int index) {
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;

    while (i != index - 1) {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

struct Node *insertAtEnd(struct Node *head, int data) {
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    ptr->data = data;
  
    while (p->next != head) {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    return head;
}
struct Node *deleteAtFirst(struct Node *head) {
    struct Node *temp = head;
    struct Node *p = head;

    while (p->next != head) {
        p = p->next;
    }

    head = head->next;
    p->next = head;

    free(temp);
    return head;
}



struct Node *deleteAtEnd(struct Node *head) {
    struct Node *p = head;
    struct Node *q = head->next;

    while (q->next != head) {
        p = p->next;
        q = q->next;
    }

    p->next = head;
    free(q);

    return head;
}


struct Node *deleteAtIndex(struct Node *head, int index) {
    struct Node *p = head;
    struct Node *q = head->next;

    for (int i = 0; i < index - 1; i++) {
        p = p->next;
        q = q->next;
    }

    p->next = q->next;
    free(q);
    return head;
}


int main() {
    struct Node *head = NULL;
    int choice, data, index, n, key;
    
     printf("Enter the number of elements in the linked list: ");
                scanf("%d", &n);
                head = createLinkedList(n);
                
                 printf("Linked list elements:\n");
                linkedListTraversal(head);
                
                return 0;
                }
