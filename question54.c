#include <stdio.h>

int main()
{
    int m,n;                 
    printf("Enter the number of rows and column: \n");
    scanf("%d %d",&m,&n);   
    int arr[10][10];       
    printf("\nEnter the elements of the matrix: \n");

        for(int i=0;i<m;i++)    
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nThe elements in the matrix are: \n");
    for(int i=0;i<m;i++)     
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
        int brr[10][10];       
    printf("\nEnter the elements of the matrix: \n");
        for(int i=0;i<m;i++)    //second matrix
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&brr[i][j]);
        }
    }
    printf("\nThe elements in the matrix are: \n");
    for(int i=0;i<m;i++)     //Print the matrix
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
    printf("\nThe sum of corresponding elements in the matrix are: \n");
    for(int i=0;i<m;i++)     //Print the matrix
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",brr[i][j] + arr[i][j]);
        }
        printf("\n");
    }
    return 0;

}
