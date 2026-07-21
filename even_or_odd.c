//WAP to find the input number is weather even ,odd,negative or positive.

#include<stdio.h>
int main()
{
long long int num;

printf("enter the number:\n");
scanf("%lld",&num);
if(num<0)
 printf("the number is negative\n");
else
{
if((num%2==0)&&(num!=0))
printf("the number is even\n");
else
 if(num%2!=0)
   printf("the number is odd\n");
else
   printf("the number is zero\n");
}
return 0;
}
