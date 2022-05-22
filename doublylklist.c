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
        
    }
}
