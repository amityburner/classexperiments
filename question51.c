
#include<stdio.h>
 
int main()
{
int a[50],i,n,large;
printf("How many elements:");
scanf("%d",&n);
printf("Enter the Array: ");
 
for(i=0;i<n;++i)
scanf("%d",&a[i]);
large=small=a[0];
for(i=1;i<n;++i)
{
if(a[i]>large)
large=a[i];
}
printf("The largest element is %d",large);

 
return 0;
}