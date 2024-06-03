#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
void main()
{
    //  clrscr();
     char nm[25],nm1[25];
     char ch;
     long int dt,m ,d,m1,y,mm,ss,hh;
     float uc,r,fp;
     //clrscr();
     textcolor(4);
     gotoxy(34,2);
     delay(1000);
     cprintf("D");
     delay(1000);
     cprintf("e");
     delay(1000);
     cprintf("a");
     delay(1000);
     cprintf("r");
     delay(1000);
     gotoxy(39,2);
     cprintf("Customer");
     textcolor(15);
     gotoxy(1,3);
     cprintf("\n================================================================================");
     delay(1000);
     gotoxy(15,5);
     textcolor(4+BLINK);
     gotoxy(35,3);
     cprintf("\n BILL RATE");
     textcolor(15);
     int n=1;
     while(n<=4)
     {
     delay(800);
     printf("\n\n\t\t %d",n);
     n++;
     }
     textcolor(15);
     gotoxy(25,5);
     delay(800);
     cprintf("\n 1 to 100  = 1.50 Per Unit  ");
     gotoxy(25,7);
     delay(800);
     textcolor(14);
     cprintf("\n 101 to 300 = 2.00 per unit for excess of 100 units");
     gotoxy(25,9);
     delay(800);
     textcolor(13);
     cprintf("\n 301 to 500 = 2.50 per unit for  excess of 300 units");
     gotoxy(25,11);
     delay(800);
     textcolor(12);
     cprintf("\n 501 to above 3.25 per unit for  excess of 500 unitd");


     gotoxy(25,13);
     textcolor(10);
     cprintf("\n Enter Date: ");
     scanf("%02ld/%02ld/%04ld",&d,&m1,&y);
      gotoxy(25,14);
     textcolor(10);
     cprintf("\n Enter Meter Number : ");
     scanf("%ld",&m);
     gotoxy(25,15);
     textcolor(11);
     cprintf("\n Enter no. of unit consumed : ");
     cscanf("%f",&uc);
     gotoxy(25,16);
     textcolor(10);
     cprintf("\n Enter Customer Name : ");
     cscanf("%s",&nm);
     gotoxy(25,17);
     textcolor(9);
     cprintf("\n Enter Customer Address : ");
     cscanf("%s",&nm1);

     clrscr();
     if(uc==0)
     {

	  printf("\n Total unit bill consumed");
	  printf("\n Not pay this bill");
     }
     else if(uc>=1&&uc<=100)
     {
	  textcolor(4);
	  gotoxy(35,1);
	  cprintf("JAY MA SHERDE");
	  textcolor(15);
	  gotoxy(1,2);
	  cprintf("\n\n================================================================================");
	   textcolor(4+BLINK);
	   gotoxy(30,4);
	  cprintf("Please Pay This Bill");
	   fp=uc*1.5;
	   gotoxy(20,5);
	   textcolor(14);
	   delay(800);
	   cprintf("\n Date %02ld/%02ld/%02ld ",d,m1,y,ss,mm,hh);
	   gotoxy(20,7);
	   delay(800);
	   cprintf("\n Your Meter Number %ld ",m);
	   textcolor(15);
	   gotoxy(20,9);
	   delay(800);
	  cprintf("\n Total unit bill consumed  %f  ",uc);
	  gotoxy(20,11);
	  delay(800);
	  textcolor(13);
	  cprintf("\n You have to pay Rs %f  ",fp);
	  gotoxy(20,13);
	  delay(800);
	  textcolor(12);
	  cprintf("\n Customer Name %s  ",nm);
	  gotoxy(20,15);
	  delay(800);
	  textcolor(11);
	  cprintf("\n Customer Address %s ",nm1);
	  textcolor(4);
	  gotoxy(1,19);
	  cprintf("\n================================================================================");

	 textcolor(4+BLINK);
	  gotoxy(60,17);
	  cprintf("\n Thank you............");
	  textcolor(5+BLINK);
	  gotoxy(10,6);
	  textcolor(6+BLINK);
	  cprintf("*");
	  gotoxy(10,8);
	  textcolor(7+BLINK);
	  cprintf("*");
	  textcolor(8+BLINK);
	  gotoxy(10,10);
	  cprintf("*");
	  textcolor(6);
	  textcolor(9+BLINK);
	  gotoxy(10,12);
	  cprintf("*");
	  textcolor(10+ BLINK);
	  gotoxy(10,14);
	  cprintf("*");
	  textcolor(11+BLINK);
	  gotoxy(10,16);
	  cprintf("*");
	  textcolor(5+BLINK);
	  gotoxy(65,6);
	  textcolor(6);
	  cprintf("*");
	  gotoxy(65,8);
	  textcolor(7+BLINK);
	  cprintf("*");
	  textcolor(8);
	  gotoxy(65,10);
	  cprintf("*");
	  textcolor(6);
	  textcolor(9+BLINK);
	  gotoxy(65,12);
	  cprintf("*");
	  textcolor(10 );
	  gotoxy(65,14);
	  cprintf("*");
	  textcolor(11+BLINK);
	  gotoxy(65,16);
	  cprintf("*");
	  getch();

	  }
	  else if(uc>=101&&uc<=300)
	  {
	  textcolor(4);
	  gotoxy(35,1);
	  cprintf("JAY MA SHARDE");
	  textcolor(15);
	  gotoxy(1,2);
	  cprintf("\n\n =============================================================================");
	  textcolor(4+BLINK);
	  gotoxy(30,4);
	  cprintf("  Please Pay This Bill");
	  fp=(uc-100)*2+150;
	    gotoxy(20,5);
	   textcolor(14);
	   delay(800);
	   cprintf("\n Date %02ld/%02ld/%02ld",d,m1,y);
	   gotoxy(20,7);
	   delay(800);
	   textcolor(8);
	   cprintf("\n Your Meter Number %ld ",m);
	   textcolor(15);
	   gotoxy(20,9);
	   delay(800);
	  cprintf("\n Total unit bill consumed  %f  ",uc);
	  gotoxy(20,11);
	  delay(800);
	  textcolor(13);
	  cprintf("\n You have to pay Rs %f  ",fp);
	  gotoxy(20,13);
	  delay(800);
	  textcolor(12);
	  cprintf("\n Customer Name %s  ",nm);
	  gotoxy(20,15);
	  delay(800);
	  textcolor(11);
	  cprintf("\n Customer Address %s ",nm1);
	  textcolor(4);
	  gotoxy(1,18);
	  cprintf("\n================================================================================");
	  getch();
	  }
	 else if(uc>=301&&uc<=500)
	{
	textcolor(4);
	gotoxy(35,1);
	cprintf("JAY MA SHARDE");
	textcolor(15);
	gotoxy(1,2);
	cprintf("\n\n ==============================================================================");
	    textcolor(4+BLINK);
	   gotoxy(27,4);
	  cprintf("  Please Pay This Bill");
	 fp=(uc-300)*2.5+550;
	   gotoxy(20,5);
	   textcolor(14);
	   delay(800);
	   cprintf("\n Date %02ld/%02ld/%02ld",d,m1,y);
	   gotoxy(20,7);
	   delay(800);
	   cprintf("\n Your Meter Number %ld ",m);
	   textcolor(15);
	   gotoxy(20,9);
	   delay(800);
	  cprintf("\n Total unit bill consumed  %f  ",uc);
	  gotoxy(20,11);
	  delay(800);
	  textcolor(13);
	  cprintf("\n You have to pay Rs %f  ",fp);
	  gotoxy(20,13);
	  delay(800);
	  textcolor(12);
	  cprintf("\n Customer Name %s  ",nm);
	  gotoxy(20,15);
	  delay(800);
	  textcolor(11);
	  cprintf("\n Customer Address %s ",nm1);
	  textcolor(4);
	  gotoxy(1,18);
	  cprintf("\n================================================================================");
	  getch();
     }
     else if(uc>500)
     {


	 textcolor(4);
	 gotoxy(35,1);
	 cprintf("JAY MA SHARDE");
	  textcolor(15);
	  gotoxy(1,2);
	  cprintf("\n\n================================================================================");
	   textcolor(4+BLINK);
	   gotoxy(30,4);
	  cprintf("Please Pay This Bill");
	 fp=(uc-500)*3.25+1050;
	   gotoxy(20,5);
	   textcolor(14);
	   delay(800);
	   cprintf("\n Date %02ld/%02ld/%02ld",d,m1,y);
	   gotoxy(20,7);
	   delay(800);
	   cprintf("\n Your Meter Number %ld ",m);
	   textcolor(15);
	   gotoxy(20,9);
	   delay(800);
	  cprintf("\n Total unit bill consumed  %f  ",uc);
	  gotoxy(20,11);
	  delay(800);
	  textcolor(13);
	  cprintf("\n You have to pay Rs %f  ",fp);
	  gotoxy(20,13);
	  delay(800);
	  textcolor(12);
	  cprintf("\n Customer Name %s  ",nm);
	  gotoxy(20,15);
	  delay(800);
	  textcolor(11);
	  cprintf("\n Customer Address %s ",nm1);
	  textcolor(4);
	  gotoxy(1,18);
	  cprintf("\n===============================================================================");
	  getch();
     }
     else
     {
	 printf("\n Total unit consumed %f",uc);
	 printf("\n Reading is INVALID");
     }
     textcolor(4+BLINK);
	  gotoxy(60,17);
	  cprintf("\n Thank you............");
	  textcolor(5+BLINK);
	  gotoxy(10,6);
	  textcolor(6+BLINK);
	  cprintf("*");
	  gotoxy(10,8);
	  textcolor(7+BLINK);
	  cprintf("*");
	  textcolor(8+BLINK);
	  gotoxy(10,10);
	  cprintf("*");
	  textcolor(6);
	  textcolor(9+BLINK);
	  gotoxy(10,12);
	  cprintf("*");
	  textcolor(10+ BLINK);
	  gotoxy(10,14);
	  cprintf("*");
	  textcolor(11+BLINK);
	  gotoxy(10,16);
	  cprintf("*");
	  textcolor(5+BLINK);
	  gotoxy(65,6);
	  textcolor(6);
	  cprintf("*");
	  gotoxy(65,8);
	  textcolor(7+BLINK);
	  cprintf("*");
	  textcolor(8);
	  gotoxy(65,10);
	  cprintf("*");
	  textcolor(6);
	  textcolor(9+BLINK);
	  gotoxy(65,12);
	  cprintf("*");
	  textcolor(10 );
	  gotoxy(65,14);
	  cprintf("*");
	  textcolor(11+BLINK);
	  gotoxy(65,16);
	  cprintf("*");
	  gotoxy(5,17);
	  textcolor(15);
	  cprintf("\n Creater By Nirbhay Kumar");

     getch();

}
