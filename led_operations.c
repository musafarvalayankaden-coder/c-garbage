#include<stdio.h>
int main()
{

/////////////////////////////////////////////////////////////////
//8 leds are arranged 
//WAP to set one led among them .if the led already on ignore it.
printf("WAP to set one led among them .if the led already on ignore it.\n");
char number,pos;   
printf("enter the 1 byte int num:\n");
scanf("%hhd",&number);                 //the number initial stage of the led      
printf("enter the position:\n");
scanf("%hhd",&pos);                    //the bit need to be change

number = number|1<<pos;

printf("the number=%hhd\n",number);
 
///////////////////////////////////////////////////////////////

//WAP to off one leg among the leds. if it is already off, then ignore it.

printf("WAP to off one leg among the leds. if it is already off, then ignore it.\n");
char number1,pos1;   
printf("enter the 1 byte int num:\n");
scanf("%hhd",&number1);                 //the number initial stage of the led      
printf("enter the position:\n");
scanf("%hhd",&pos1);                    //the bit need to be change

number1=number1&~(1<<pos1);

printf("the number=%hhd\n",number1);
 
////////////////////////////////////////////////////////////////

//WAP to toggle one led

printf("WAP to toggle one led\n");

char number2,pos2;   
printf("enter the 1 byte int num:\n");
scanf("%hhd",&number2);                 //the number initial stage of the led      
printf("enter the position:\n");
scanf("%hhd",&pos2);                    //the bit need to be change

number2=number2^(1<<pos2);

printf("the number=%hhd\n",number2);
 
/////////////////////////////////////////////////////////////////

return 0;
}
