//6. Write a program to sort elements of an array of size 10. Take array values from the
//user.
#include<stdio.h>
int main()
{
int arr[10];
int lastIndex=9,temp;
printf("enter the element in the array");
for(int i=0;i<=9;i++)
{
 scanf("%d",&arr[i]);
}
for(int j=9;j>=0;j--)
{
 for(int i=0;i<=lastIndex;i++)
 {
  if(arr[i]>arr[i+1])
  {
    temp=arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=temp;
  }
 }
 lastIndex=lastIndex--;
}
for(int k=0;k<=9;k++)
{
 printf("%d  ",arr[k]);
}
return 0;
}
