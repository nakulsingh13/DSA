#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

typedef struct lklistfinal
{
    int info;
    struct lklistfinal *next;
} node;

int main(){
    int ch,data;
    node *head=NULL,*temp,*ptr;

    while (1)
    {
        printf("\n****MENU****\n");
        printf("1.insert at beg\n2.traversing\n3.insert at end\n4.searching\n5.insert after element\n6.Exit\n");
        printf("Enter the choice\n");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1:
            printf("Enter the data\n");
            scanf("%d",&data);
            temp=(node*)malloc(sizeof(node));
            temp->info=data;
            if(head!=NULL){
                temp->next=head;
            }
            else{
                temp->next=NULL;
            }

            head=temp;
            printf("Node inserted Successfully");
            break;
        case 2:
            printf("traversing\n");
            temp = head;
            while (temp!=NULL)
            {
                printf("%d ",temp->info);
                temp=temp->next;
            }
            break;
        case 3:
            temp=head;
            printf("Insert the element\n");
            scanf("%d",&data);
            ptr=(node*)malloc(sizeof(node));
            ptr->info=data;
            while (temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=ptr;
            ptr->next=NULL;
            break;
                
        case 6: exit(0);
            break;
            
        default:
            printf("Wrong Choice\n");  
            break;
        }
    }
    
}
