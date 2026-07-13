#include<stdio.h>
int main()
{
int a=500;
int *ptr ; //declaration of the pointer ptr(initially  the value of address stored in the pointer is garbage) 
ptr = &a;  //the address of the a is stored in the ptr pointer
// *ptr = the data in the variable which address is stored inthe pointer ptr changed.
printf("the data in a = %d\n",a); // value in a printed
printf("the address of data a=%p\n",(void*)&a); // addres of a printed
printf("the value of ptr=%p\n",(void*)ptr);// value in ptr printed (same as that of address of a

*ptr = 600; // the value of the variable changed into 600.who's address is stored in the pointer ptr 
printf("the new value in a= %d\n",a); // the new value is printed
return 0;
}
