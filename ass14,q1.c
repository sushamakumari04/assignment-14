//1. Write a program to calculate the sum of numbers stored in an array of size 10. Take
//array values from the user.

#include<stdio.h>
int main()
{
int arr[10];
int sum=0;
printf("enter the element in the array\n");
for(int i=0;i<=9;i++)
{
 scanf("%d",&arr[i]);
 sum=sum+arr[i];
}
printf("%d",sum);




}
