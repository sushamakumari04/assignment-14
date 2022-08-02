//2. Write a program to calculate the average of numbers stored in an array of size 10.
//Take array values from the user.

#include<stdio.h>
int main()
{
int arr[10];
int sum=0;
float avg;
printf("enter the element in the array\n");
for(int i=0;i<=9;i++)
{
 scanf("%d",&arr[i]);
 sum=sum+arr[i];
}
avg=sum/10.0;// integer divides by integer gives  integer.
printf("the average of the given number are %f",avg);

return 0;
}
