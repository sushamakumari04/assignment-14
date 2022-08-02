//10. Write a program in C to copy the elements of one array into another array.Take array
//values from the user.
#include<stdio.h>
int main()
{
int n,lastIndex;
printf("enter the number of value you want to store in the array");
scanf("%d",&n);
int A[n],B[n];
printf("enter the value in the array");
for(int i=0;i<=n;i++)
{
 scanf("%d",&A[i]);
}
for(int j=0;j<=n;j++)
{
B[j]=A[j];
}
printf("the value of A array is ");
for(int k=0;k<=n;k++)
{
 printf("%d ",A[k]);
}
printf("\n");
printf("the value of array B is ");
for(int m=0;m<=n;m++)
{
 printf("%d ",B[m]);
}
return 0;
}
