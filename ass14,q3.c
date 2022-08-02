//3. Write a program to calculate the sum of all even numbers and sum of all odd
//numbers, which are stored in an array of size 10. Take array values from the user.

#include<stdio.h>
int main()
{
int arr[10];
int se=0,so=0;
printf("enter the number in the array");
for(int i=0;i<=9;i++)
{
 scanf("%d",&arr[i]);
 if(arr[i]%2==0)
 {
  se=se+arr[i];
 }
 so=so+arr[i];
}
printf("sum of eve number is %d\n",se);
printf("sum of odd number %d\n",so);


return 0;
}
