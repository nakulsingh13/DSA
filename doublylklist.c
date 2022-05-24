#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

typedef struct dlklist
{
    struct dlklist *prev;
    int info;
    struct dlklist *next;
}node;

// void createEmptylist(node **head, node **tail);
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
            case 1: printf("Enter element:\n");
                    scanf("%d",&element);
                    insertAtBeginning( &head, &tail, element);
                    break;
            case 2: printf("Enter element:\n");
                    scanf("%d",&element);
                    insertAtEnd( &head, &tail, element);
                    break;
            // case 3: printf("Enter element\n");
            //         scanf("%d",&element);
            //         printf("Enter element after which to insert :\n");
            //         scanf("%d",&after);
            //         insertAfterElement(head, &tail, element, after);
            //         break;
            // case 4: printf("Enter element\n");
            //         scanf("%d",&element);
            //         printf("Enter element before which to insert :\n");
            //         scanf("%d",&before);
            //         insertBeforeElement(&head, element, before);
            //         break;
            case 5: if(head == NULL)
                      printf("\nList is empty");
                    else
                      traverseInOrder(head);

                    printf("\nPress any key to continue");
                    break;
            case 6: if(head == NULL)
                       printf("\nList is empty");
                    else
                       traverseInReverseOrder(tail);

                    printf("\nPress any key to continue");
                    break;
            // case 7: deleteFromBeginning(&head, &tail);
            //         break;
            // case 8: deleteFromEnd(&head, &tail);
            //         break;
            // case 9: printf("\nEnter element after which to delete");
            //         scanf("%d",&after);
            //         deleteAfterElement(head, &tail, after);
            //         break;
            // case 10: printf("\nEnter element before which to delete");
            //          scanf("%d",&before);
            //          deleteBeforeElement(&head, before);
            //          break;
            // case 11: deleteList(&head, &tail);
            //          exit(1);

        }

    }
}


// void createEmptyList(node **head, node **tail){
//     *head = *tail = NULL;
// }

void traverseInOrder(node *head){
    while(head != NULL)
    {
        printf("%d ",head->info);
        head = head->next;
    }
}

void traverseInReverseOrder(node *tail){
    while (tail != NULL)
    {
        printf("%d ",tail->info);
        tail=tail->prev;

    }
    
}

node *search(node *head, int item){
    while (head != NULL)
    {
        if(head->info == item)
          return head;
        head = head->next;   
    }
    return NULL;
}

void insertAtBeginning(node **head, node **tail, int item){
    node *ptr;
    ptr=(node *)malloc(sizeof(node));
    ptr->info=item;
    if(*head==NULL){
        ptr->next=ptr->prev=NULL;
        *head=*tail=ptr;
    }
    else{
        ptr->prev=NULL;
        ptr->next=*head;
        (*head)->prev=ptr;
        *head=ptr;
    }
}

void insertAtEnd(node **head, node **tail, int item){
    node *ptr;
    ptr=(node *)malloc(sizeof(node));
    ptr->info=item;
    if(*head==NULL)
    {
        ptr->next=ptr->prev=NULL;
        *head=*tail=ptr;

    }
    else{
        ptr->next=NULL;
        ptr->prev=*tail;
        (*tail)->next=ptr;
        *tail=ptr;
    }
}   