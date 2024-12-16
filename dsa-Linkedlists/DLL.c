#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
    struct Node *prev;
};

void linkedListTraversal(struct Node *head) {
    struct Node *ptr = head;
    while (ptr != NULL) {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
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
        temp->prev = NULL;

        if (head == NULL) {
            head = temp;
        } else {
            p->next = temp;
            temp->prev = p;
        }
        p = temp;
    }

    return head;
}


struct Node *insertAtFirst(struct Node *head, int data) {
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    ptr->prev = NULL;
    head->prev = ptr;
    return ptr;
}

struct Node* insertAtIndex(struct Node* head, int data, int index) {
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node* p = head;
    int i = 0;

    while (i != index - 1) {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    ptr->prev = p;

    if (p->next != NULL) {
        p->next->prev = ptr;
   }
    p->next = ptr;
    return head;
}

struct Node *insertAtEnd(struct Node *head, int data) {
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = NULL;

    struct Node *p = head;
    while (p->next != NULL) {
        p = p->next;
    }
    p->next = ptr;
    ptr->prev = p;
    return head;
}



struct Node *deleteAtFirst(struct Node *head) {
    struct Node *ptr = head;
    head = head->next;
    head->prev = NULL;
    free(ptr);
    return head;
}

struct Node* deleteAtEnd(struct Node* head) {
    struct Node* p = head;
    struct Node* q = head->next;

    while (q->next != NULL) {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);

    return head;
}

struct Node *deleteAtIndex(struct Node *head, int index) {
    struct Node *p = head;
    for (int i = 0; i < index; i++) {
        p = p->next;
    }
    p->prev->next = p->next;
    if (p->next != NULL) {
        p->next->prev = p->prev;
    }
    free(p);
    return head;
}

int main() {
    struct Node *head = NULL;
    int n;
    
    printf("Enter the number of elements in the linked list: ");
                scanf("%d", &n);
                head = createLinkedList(n);
                
                
                printf("Linked list elements:\n");
                linkedListTraversal(head);
                
                return 0;
                }