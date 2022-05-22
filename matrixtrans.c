#include<stdio.h>

int main(){
    int a[50][50],b[50][50],i,j,r,c;

    printf("Enter row size and column size of matrix\n");
    scanf("%d %d",&r,&c);

    printf("Enter the matrix\n");
    for (i=0;i<r;i++)
    {
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("Show matrix\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            b[j][i]=a[i][j];
        }
    }

    printf("Transpose of matrix\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    

}