#include <stdio.h>
#include <stdlib.h>

// Structure for a doubly linked list node
struct node {
    int num;
    struct node *preptr;
    struct node *nextptr;
} *stnode, *ennode;

// Function prototypes
void DlListcreation(int n);
void displayDlList();

int main() {
    int n;
    stnode = NULL;
    ennode = NULL;
    printf("\n\n Doubly Linked List: Create and display a doubly linked list:\n");
    printf("-------------------------------------------------------------------\n");

    printf(" Input the number of nodes : ");
    scanf("%d", &n);

    DlListcreation(n); // Create a doubly linked list
    printf("the list in reverse order is :\n");
    DLLreverse();   // Display the created doubly linked list
    return 0;
}

// Function to create a doubly linked list
void DlListcreation(int n) {
    int i, num;
    struct node *fnNode;

    if (n >= 1) {
        stnode = (struct node *)malloc(sizeof(struct node)); // Allocate memory for the first node

        if (stnode != NULL) {
            printf(" Input data for node 1 : ");
            scanf("%d", &num);

            stnode->num = num;
            stnode->preptr = NULL;
            stnode->nextptr = NULL;
            ennode = stnode; // Assign stnode as the last node

            // Create nodes and link them to form the doubly linked list
            for (i = 2; i <= n; i++) {
                fnNode = (struct node *)malloc(sizeof(struct node));
                if (fnNode != NULL) {
                    printf(" Input data for node %d : ", i);
                    scanf("%d", &num);
                    fnNode->num = num;
                    fnNode->preptr = ennode;
                    fnNode->nextptr = NULL;

                    ennode->nextptr = fnNode;
                    ennode = fnNode;
                } else {
                    printf(" Memory can not be allocated.");
                    break;
                }
            }
        } else {
            printf(" Memory can not be allocated.");
        }
    }
}

// Function to display the doubly linked list
void DLLreverse() {
    struct node *tmp;
    int n = 0;
    if (ennode == NULL) {
        printf(" No data found in the List yet.");
    } else {
        tmp = ennode;
        printf("\n\n Data in reverse order on the list are :\n");

        // Traverse and display each node's data in the list
        while (tmp != NULL) {
            printf("data in the node %d : %d \n",n+1,tmp->num);
            n++;
            tmp = tmp->preptr; // Move to the next node
        }
    }
}