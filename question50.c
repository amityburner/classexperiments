#include <stdio.h>

void main() 
{
    int a=0;
    int i=0;
    int size=0;
    printf("enter the number of elements to add: ");
    scanf("%d",&size);
    int arr[size]={0};
    int sum=0;
    int average=0;
    int max=0;
    int min=0;
    
    for(i = 0; i < size; i++)
    {
          printf("enter element: ");     
          scanf("%d",&arr[i]);
          printf("\n");
    }
    arr[size]
    while (a<=size)
    {
        printf("element is: ")
        printf("%d",arr[a]);
        printf("\n");
        a+=1;
    }
    a=0;
    while (a<=size)
    {
        sum=sum+arr[a];
        a+=1;
    }
    printf("\n");
    printf("the sum of all elements is %d",sum);
    average=sum/size;
    printf("\n the average is %d",average);

    a=0;
    while (a<=size)
    {
        product=product*arr[a];
        a+=1;

    }
    printf("\n");
    printf("the product is %d",product);
}   