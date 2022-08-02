//7. Write a program to find second largest in an array.Take array values from the user.
#include<stdio.h>
int main()
{
int arr[10],i;
int lastIndex=9,temp,flag=0;
printf("enter the element in the array");
for(int k=0;i<=9;i++)
{
 scanf("%d",&arr[i]);
}
for(int j=9;j>=0;j--)
{
 for(i=0;i<=lastIndex;i++)
 {
  if(arr[i]>arr[i+1]){
    temp=arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=temp;}
 }
 flag++;
 if(flag==2){
  printf("the second largest number is %d",arr[lastIndex]);
  break;}
 lastIndex=lastIndex-1;
 }

return 0;
}
