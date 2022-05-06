#include<stdio.h>
#include<stdlib.h>

typedef struct queuetype{

int front,rear;
int arr[100];

}queue;

void main(){
    queue Q;
    Q.front=Q.rear=-1;
    int ch,data;

    void insert_in_Q(queue *, int);
    int delete_in_Q(queue *);
    int isfull(queue);
    int isempty(queue);
    void traverse(queue);

    printf("\n****MENU****\n");
    printf("1.Insert \n2.Delete \n3.traverse\n4.Exit\n");
    printf("Enter the choice\n");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:
        printf("Enter data\n");
        scanf("%d",&data);
        insert_in_Q(&Q,data);         
        break;
    case 2:
        delete_in_Q(&Q);
        break;    
    case 3:
        isfull(Q);
        break;
    case 4:
        isempty(Q);
        break;
    case 5:
        traverse(Q);
        break;
    case 6:
        exit(1);
        break;            
    default:
        printf("Wrong choice\n");
        break;
    }
}

void insert_in_Q(queue *Q, int d){
    int i;
    if(Q->front==-1)
    {
        Q->front = 0;
        Q->rear = 0;
    }
    else if(Q->front!=0&&Q->rear==100-1)
    {
        for(i=Q->front;i<=Q->rear;i++)
        {
            Q->arr[i-Q->front]=Q->arr[i];
            Q->rear=Q->rear-Q->front;
            Q->front=0;
            Q->rear=Q->rear+1;
        }
    }
    else{
        Q->rear++;
    }
    Q->arr[Q->rear]=d;
}