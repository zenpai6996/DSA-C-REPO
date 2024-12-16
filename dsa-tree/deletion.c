#include <stdio.h>
#include <stdlib.h>

// Definition of a Binary Search Tree node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to insert a node into the Binary Search Tree
struct Node* insert(struct Node* root, int data) {
    if (root == NULL) {
        return createNode(data);
    }
    // If data is smaller than the root, insert into the left subtree
    if (data < root->data) {
        root->left = insert(root->left, data);
    }
    // If data is larger than the root, insert into the right subtree
    else {
        root->right = insert(root->right, data);
    }
    return root;
}

// Function to find the node with the minimum value (in-order successor)
struct Node* findMin(struct Node* root) {
    while (root->left != NULL) {
        root = root->left;
    }
    return root;
}

// Function to delete a node from the Binary Search Tree
struct Node* delete(struct Node* root, int data) {
    if (root == NULL) {
        printf("Element not found in the tree.\n");
        return root;
    }

    // If the data is smaller than the root's data, then it lies in the left subtree
    if (data < root->data) {
        root->left = delete(root->left, data);
    }
    // If the data is greater than the root's data, then it lies in the right subtree
    else if (data > root->data) {
        root->right = delete(root->right, data);
    }
    // If data is the same as the root's data, this is the node to be deleted
    else {
        // Node with only one child or no child
        if (root->left == NULL) {
            struct Node* temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            struct Node* temp = root->left;
            free(root);
            return temp;
        }

        // Node with two children: get the in-order successor (smallest in the right subtree)
        struct Node* temp = findMin(root->right);

        // Copy the in-order successor's content to this node
        root->data = temp->data;

        // Delete the in-order successor
        root->right = delete(root->right, temp->data);
    }
    return root;
}



int main() {
    struct Node* root = NULL;
    int choice, element;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert an element to the BST\n");

        printf("5. Delete an element\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the element to insert: ");
                scanf("%d", &element);
                root = insert(root, element);
                break;

    

            case 5:
                printf("Enter element to delete: ");
                scanf("%d", &element);
                root = delete(root, element);
                break;

            case 6:
                printf("Exiting...\n");
                exit(0);

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
