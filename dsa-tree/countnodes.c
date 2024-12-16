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

// Function to find the largest element in the BST
int findLargest(struct Node* root) {
    if (root == NULL) {
        printf("Tree is empty.\n");
        return -1; // Return an invalid value if tree is empty
    }
    // Keep traversing right until the rightmost node is reached
    while (root->right != NULL) {
        root = root->right;
    }
    return root->data;
}

// Function to find the smallest element in the BST
int findSmallest(struct Node* root) {
    if (root == NULL) {
        printf("Tree is empty.\n");
        return -1; // Return an invalid value if tree is empty
    }
    // Keep traversing left until the leftmost node is reached
    while (root->left != NULL) {
        root = root->left;
    }
    return root->data;
}

// Function to calculate the height of the BST
int height(struct Node* root) {
    if (root == NULL) {
        return -1; // Height of an empty tree is -1
    }
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    
    return (leftHeight > rightHeight ? leftHeight : rightHeight) + 1;
}

// Function to count the number of leaf nodes (nodes with no children)
int countLeafNodes(struct Node* root) {
    if (root == NULL) {
        return 0; // No leaf nodes in an empty tree
    }
    if (root->left == NULL && root->right == NULL) {
        return 1; // A leaf node is a node with no left or right child
    }
    return countLeafNodes(root->left) + countLeafNodes(root->right);
}

int main() {
    struct Node* root = NULL;
    int choice, element;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert an element to the BST\n");
        printf("2. Display the largest element\n");
        printf("3. Display the smallest element\n");
        printf("4. Calculate the height of the BST\n");
        printf("5. Count the number of leaf nodes\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the element to insert: ");
                scanf("%d", &element);
                root = insert(root, element);
                break;

            case 2:
                {
                    int largest = findLargest(root);
                    if (largest != -1) {
                        printf("The largest element is: %d\n", largest);
                    }
                }
                break;

            case 3:
                {
                    int smallest = findSmallest(root);
                    if (smallest != -1) {
                        printf("The smallest element is: %d\n", smallest);
                    }
                }
                break;

            case 4:
                {
                    int treeHeight = height(root);
                    printf("The height of the BST is: %d\n", treeHeight);
                }
                break;

            case 5:
                {
                    int leafCount = countLeafNodes(root);
                    printf("The number of leaf nodes is: %d\n", leafCount);
                }
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
