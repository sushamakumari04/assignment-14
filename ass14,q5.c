//5. Write a program to find the smallest number stored in an array of size 10. Take array
//values from the user.

#include<stdio.h>
int main()
{
int arr[10],smallest;
printf("enter the value in the array");
for(int i=0;i<=9;i++)
{
 scanf("%d",&arr[i]);

}
for(int j=0;j<=9;j++)
{
 smallest = arr[j];
  for(int k=1;k<=9;k++)
  {
    if(smallest>arr[k])
        smallest=arr[k];
  }
  printf("the smallest number is %d",smallest);
  break;
}


return 0;
}
