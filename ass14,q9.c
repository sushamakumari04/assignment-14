//9. Write a program in C to read n number of values in an array and display it in reverse
//order. Take array values from the user.

#include<stdio.h>
int main()
{
int n,lastIndex;
printf("enter the number of value you want to store in the array");
scanf("%d",&n);
lastIndex=n;
int A[n],B[n];
printf("enter the value in the array");
for(int i=0;i<=n;i++)
{
 scanf("%d",&A[i]);
}
for(int i=0;i<=n;i++){
  for(int j=lastIndex;j>=0;j--)
  {
   B[j]=A[i];
  }
  lastIndex=lastIndex-1;
}
for(int k=0;k<=n;k++)
{
 printf("%d ",A[k]);
}
printf("\n");
printf("the value of array stored in reverse order is ");
for(int m=0;m<=n;m++)
{
 printf("%d ",B[m]);
}
return 0;
}
