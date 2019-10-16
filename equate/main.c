#include <stdio.h>
#include <conio.h>
//hello shubham
//hello tanu
//to equate array
void main()
{
 int a[5],b[5],i,flag=0;
 /*equating the values of a and b */
 printf("enter the values of a\n");
 for(i=0;i<5;i++)
 {
scanf("%d",&a[i]);
 }
 printf("enter the values of b\n");
 for(i=0;i<5;i++)
     scanf("%d",&b[i]);
 
 for(i=0;i<5;i++)
 {
   if(a[i]!=b[i])
    {
    flag=1;
    break;
    }
 }
 if(flag==1)
 {
  printf("array are not equal");
 }
 else
 {
  printf("array are equal");
 }
 getch();
}
