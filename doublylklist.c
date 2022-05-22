#include<stdio.h>
#include<stdlib.h>

typedef struct dlklist
{
    struct dlklist *prev;
    int info;
    struct dlklist *next;
}node;

void createEmptylist(node **head, node **tail);
void traverseInOrder(node *head);
void traverseInReverseOrder(node *tail);
node *search(node *head, int item);
void insertAtBeginning(node **head, node **tail, int item);
void insertAtEnd(node **head, node **tail, int item);
void insertAfterElement(node *head, node **tail, int item, int after);
void insertBeforeElement(node **head, int item, int before);
void deleteFromBeginning(node **head, node **tail);
void deleteFromEnd(node **head, node **tail);
void deleteBeforeElement(node **head, int before);
void deleteAfterElement(node *head, node **tail, int after);
void deleteList(node **head, node **tail);

void main(){
    int choice,element,before,after;
    node *head,*tail;
    createEmptylist(&head, &tail);

    while(1){
        printf("****MENU****\n");
        printf("1. Insert At Beginning\n");
        printf("2. Insert At End\n");
        printf("3. Insert After Element\n");
        printf("4. Insert Before Element\n");
        printf("5. Traverse in order\n");
        printf("6. Traverse in reverse order\n");
        printf("7. Delete from beginning\n");
        printf("8. Delete from End\n");
        printf("9. Delete After Element\n");
        printf("10. Delete Before Element\n");
        printf("11. Exit\n");
        printf("Enter your choice\n");
        scanf("%d",&choice);

        switch(choice){
            case 1: printf("Enter element:");
                    scanf("%d",&element);
                    insertAtBeginning( &head, &tail, element);
                    break;
            case 2: printf("Enter element:");
                    scanf("%d",&element);
                    insertAtEnd( &head, &tail, element);        
        }

    }
}
