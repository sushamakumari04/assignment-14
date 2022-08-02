//4. Write a program to find the greatest number stored in an array of size 10. Take array
//values from the user.

#include<stdio.h>
int main()
{
int arr[10],greatest;
printf("enter the value in the array");
for(int i=0;i<=9;i++)
{
 scanf("%d",&arr[i]);

}
for(int j=0;j<=9;j++)
{
 greatest = arr[j];
  for(int k=1;k<=9;k++)
  {
    if(greatest<arr[k])
        greatest=arr[k];
  }
  printf("the greatest number is %d",greatest);
  break;
}


return 0;
}
