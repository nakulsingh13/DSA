#include<stdio.h>


int main(){
    int a[50][50],b[50][50],c[50][50],i,j,n;

    printf("Enter the size of matrix");
    scanf("%d",&n);


    printf("Enter the first matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter the second matrix\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }
    
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    
    printf("Result\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}