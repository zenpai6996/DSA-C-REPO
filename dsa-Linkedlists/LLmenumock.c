#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *createLL(int n ){
    struct Node *head = NULL;
    struct Node *temp = NULL;
    struct Node *p = NULL;
    int data ;
    for (int i=0;i <n;i++){
        temp = (struct Node *)malloc(sizeof(struct Node ));
        printf("Enter the elements %d:\n",i+1);
        scanf("%d",&data);
        temp -> data =data;
        temp -> next = NULL;
        if (head == NULL){
            head = temp ;
        }else{
            p -> next = temp;

        }
        p=temp;

    }
    return head ;
}

void LLtraversal(struct Node *head){
    struct Node * temp = head ;
    while(temp != NULL){
        printf("%d\n",temp->data);
        temp = temp -> next;

        }
        printf("NULL\n");

}
int countNodes(struct Node *head ){
    int count =0;
    struct Node *temp = head;
    while (temp != NULL ){
        count ++;
        temp = temp -> next ;


    }
    return count;
}
struct Node * insert (struct Node *head ,int data,int index ){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node ));
    struct Node *p= head;
    int i =0;
    while (i != index -1){
    p = p-> next;
    i++;
    }
    ptr -> data = data ;
    ptr -> next = p -> next ;
    p -> next = ptr ;
    return head;

}
struct Node *delete(struct Node *head ,int index){
    struct Node *p = head ;
    struct Node *q = head->next ;
    for (int i= 0;i<index ;i++){
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head ;
}
struct Node *search(struct Node *head , int key){
    struct Node * ptr = head;
    while (ptr != NULL){
        if(ptr -> data == key ){
            return ptr ;
        }
        ptr = ptr -> next ;
    }
    return NULL;
}

struct Node *sort(struct Node *head) {
    if (head == NULL) {
        return head;
    }

    struct Node *i, *j;
    int temp;

    for (i = head; i->next != NULL; i = i->next) {
        for (j = i->next; j != NULL; j = j->next) {
            if (i->data > j->data) {
                temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }
    return head;
}
struct Node *reverse(struct Node *head) {
    struct Node *prev = NULL;
    struct Node *current = head;
    struct Node *next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}
 
int main (){
    int data,n,choice,index,key ;
    struct Node * head = NULL;

    while(1){
        printf("\nMENU\n");
        printf("1.create Linked List .\n");
        printf("2.Traverse linked List .\n");
        printf("3.Count Nodes in a Linked List .\n");
        printf("4.Insert an element at an index .\n");
        printf("5.delete an element :\n");
        printf("6.Search for an element :\n");
        printf("7.sort the linked list :\n");
        printf("8.reverse list .\n");
        printf("EXIT\n");

        scanf("%d",&choice);

    

    switch (choice )
    {
    case 1: 
        printf("Enter the number of elements :\n");
        scanf("%d",&n);
        head = createLL(n);

        break;

    case 2:
    printf("Linked List elements :\n");
    LLtraversal(head);
    break;

    case 3:
    printf("Number of Nodes:%d",countNodes(head ));
    break;

    case 4:
    printf("Enter the element you want to insert: \n");
    scanf("%d",&data);
    printf("enter the index :\n");
    scanf("%d",&index );
    head = insert(head ,data, index);
    break;

    case 5:
    printf("Enter the node of the LL u want to delete:\n");
    scanf("%d",&index);
    head = delete(head ,index);
    break;

    case 6:
    printf("enter the element to search for :\n");
    scanf("%d",&key);
    struct Node *foundNode =search(head , key);
    if(foundNode){
        printf("the element has been found in the LL\n");

    }else {
        printf("the element has not been found in the LL.\n");
    }
    
    break;
    case 7:
    head = sort(head);
    printf("List sorted in ascending order .\n");
    LLtraversal(head);
    break;

    case 8: 
    head = reverse(head );
    printf("the reversed linked list is :\n");
    LLtraversal(head);
    break;
    

    case 9:
    exit(0);

    
    default:
        printf("Invalid choice ");
        
    }

    }
    return 0;
}