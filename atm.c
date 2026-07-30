#include<stdio.h>
#include<unistd.h>
unsigned int num1,c=0,num2,balance=0,balance1=100000,balance2=200000,balance3=300000,pass,insert,amt,depo,yorn,start;
int atm();
int main()
{
	//	unsigned int num1,num2,balance=0,balance1=100000,balance2=200000,pass,insert,amt,depo,yorn,start;
insertcard:   printf("\n\n/////////////////////////////\n1.press start(0) (card inserting)\n///////////////////////////\n");
	      scanf("%d",&start);
	      sleep(1.5);
	      if(start==0)
	      {
		      printf(">>>>>>>select language<<<<<<<\n");
		      printf(" 1.english\n 2.hindi\n 3.malayalam\n");
		      scanf("%d",&num1);
		      if(num1>=1 | num1<=3)
		      {      
try:
                              printf("\n\n******enter your personal pin******\n");
			      scanf("%d",&pass);
			      sleep(1);
			      if(pass==1111)   
			      {       printf("...........hai muhammed nisham!............\n");
				      balance=balance1;
				      atm();
			      }
			      else if(pass==2222)

			      {       printf("..............hai muhanned ali!............\n");
				      balance =balance2;
				      atm();
			      }  
			      else if(pass==3333)

			      {       printf(".................hai salahu!...............\n");
				      balance=balance3;
				      atm();
			      }                                 

			      else 
			      {
				      printf("\n///////////incorrect password////////////\n");
                                      if(c++<1)
                                      goto try;
				      goto invalid;}
		      }        

	      }
	      else
	      { 
invalid:
		      sleep(2);
		      printf("\n//////insert card  again//////\n\n");
	      }
	      sleep(2.5); 
	      goto insertcard;
	      return 0;
}









int atm() {
	printf("\n\n>>>>>>>select the option<<<<<<\n");
	printf(" 1.Balance enquiry\n 2.withdrawal\n 3.deposit\n"); 
	scanf("%d",&num2);
	if(num2==1)
	{ 
		printf("\n\n>>>>>>>>>>>balance<<<<<<<<<<<<\n");
balanceprint:                                 sleep(1);
					      printf("\n //your account balance//\n Rs%d\n ",balance);
					      sleep(2);
					      printf("\n\n\n>>>>>>>>>>>transaction completed<<<<<<<<<\n\n");
					      sleep(0.5);
	}
	else if(num2==2) 
	{ 
		printf("\n\n>>>>>>>>withdrawal<<<<<<<\n");
		printf("\n //enter the amount// \n");
		scanf("%d",&amt);
		if(amt>balance)
		{
			printf("\n////insufficient bank balance////\n");
			goto end;
		}
		printf("\n//please wait transation being proccessed//\n\n");
		sleep(3);
		printf("\n\n//please collect the cash//\n");
		balance=balance-amt;
		sleep(3);
		printf("\n\n\n>>>>>>>>>>>transaction completed<<<<<<<<<\n\n");
		sleep(1);
		printf("\n\n//do you want to check your balance?//\n1.yes/press(1)\n2.no/press(2)\n\n");
		scanf("%d",&yorn);
		if(yorn==1)
		{
			goto balanceprint;
		}
		else
		{
			printf("\n\n>>>>>>>>>>>>>>>>>>>>>thank you<<<<<<<<<<<<<<<<<<<<<\n\n");
		}

	}
	else if(num2==3)
	{       printf("\n\n>>>>>>>>>>>>>deposit<<<<<<<<<<<<<\n");
		printf("\n//enter the amount//\n");
		scanf("%d",&depo); 
		sleep(1);                                                                              
		printf("\n\n>>>>>>>please insert the cash<<<<<<<<\n"); 
		sleep(2);
		printf("\n\npress enter(0) after inserting\n");
		scanf("%d",&insert);
		sleep(1);
		if(insert==0)
		{printf("\n\n>>>>please wait trancation being processed<<<<\n\n"); 
			sleep(3.5);
			balance=balance+depo;
			printf("\n\n>>>>>>>>>>trancation completed<<<<<<<<<\n");
			sleep(1);
			printf("\n\n//do you want to check your balance?//\n1.yes/press(1)\n2.no/press(2)\n");
			scanf("%d",&yorn); 
		}
		if(yorn==1)
		{
			goto balanceprint;
		}
		else
		{       
			printf("\n\n>>>>>>>>>>>>>>>>>>>>>thank you<<<<<<<<<<<<<<<<<<<<<\n\n");
		}
end:     } 
}
