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

// Preorder Traversal (Root -> Left -> Right)
void preorder(struct Node* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

// Inorder Traversal (Left -> Root -> Right)
void inorder(struct Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

// Postorder Traversal (Left -> Right -> Root)
void postorder(struct Node* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

// Function to search for an element in the Binary Search Tree
struct Node* search(struct Node* root, int key) {
    // Base case: root is null or key is present at the root
    if (root == NULL || root->data == key)
        return root;

    // Key is greater than root's data, search in right subtree
    if (key > root->data)
        return search(root->right, key);

    // Key is smaller than root's data, search in left subtree
    return search(root->left, key);
}

int main() {
    struct Node* root = NULL;
    int choice, element;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert an element\n");
        printf("2. Preorder Traversal\n");
        printf("3. Inorder Traversal\n");
        printf("4. Postorder Traversal\n");
        printf("5. Search an element\n");
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
                printf("Preorder Traversal: ");
                preorder(root);
                printf("\n");
                break;

            case 3:
                printf("Inorder Traversal: ");
                inorder(root);
                printf("\n");
                break;

            case 4:
                printf("Postorder Traversal: ");
                postorder(root);
                printf("\n");
                break;

            case 5:
                printf("Enter element to search: ");
                scanf("%d", &element);
                struct Node* result = search(root, element);
                if (result != NULL) {
                    printf("Element %d found in the tree.\n", element);
                } else {
                    printf("Element %d not found in the tree.\n", element);
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
