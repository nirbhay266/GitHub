#include<iostream>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
class Rao
{
private:
int i;
double a,b,c,d,A,P,V;
char in[5];
public:
void line1();
void line2();
void circlearea();
void circleperim();
void rectanglearea();
void rectangleperim();
void trianglearea();
void triangleperim();
void squarearea();
void squareperim();
void cubearea();
void cubevolume();
void cuboidarea();
void cuboidvolume();
void spherearea();
void spherevolume();
void SC();
void AO();
};
void Rao :: line1()
{
clrscr();
for(i=1; i<=80; i++)
{
cout<<char(31);
delay(10);
}
}
void Rao :: line2()
{
cout<<"\n";
for(i=1; i<=80; i++)
{
cout<<char(30);
delay(10);
}
cout<<"\n\n"<<char(16)<<char(16)<<char(16)<<"INPUT : ";
}
void Rao :: circlearea()
{
line1();
cout<<" \t"<<char(16)<<char(16)<<char(16)<<"|| YOUR CHOICE : 
<1>FIND AREA OF CIRCLE ||"<<char(17)<<char(17)<<char(17);
line2();
cout<<"\n\n\t\t\t ENTER RADIUS(cm/m) : ";
cin>>a ;
cin.getline(in,5);
A=3.14*a*a;
cout<<"\n\n"<<char(16)<<char(16)<<char(16)<<"OUTPUT : ";
cout<<"\n\n\t\t\t AREA OF CIRCLE = "<<A<< in<<"^2";
}
void Rao :: circleperim()
{
line1();
cout<<" \t"<<char(16)<<char(16)<<char(16)<<"|| YOUR CHOICE : 
<2>FIND PERIMETER OF CIRCLE ||"<<char(17)<<char(17)<<char(17);
line2();
cout<<"\n\n\t\t\t ENTER RADIUS(cm/m) : ";
cin>>a;
cin.getline(in,5);
P=2*3.14*a;
cout<<"\n\n"<<char(16)<<char(16)<<char(16)<<"OUTPUT : ";
cout<<"\n\n\t\t\t AREA OF CIRCLE = "<<P<< in;
}
void Rao :: rectanglearea()
{
line1();
cout<<" \t"<<char(16)<<char(16)<<char(16)<<"|| YOUR CHOICE : 
<3>AREA OF RECTANGLE ||"<<char(17)<<char(17)<<char(17);
line2();
cout<<"\n\n\t\t\t ENTER LENGTH(cm/m) : ";
cin>>a ;
cin.getline(in,5);
cout<<"\n\t\t\t ENTER WIDTH(cm/m) : ";
cin>>b;
cin.getline(in,5);
A=a*b;
cout<<"\n\n"<<char(16)<<char(16)<<char(16)<<"OUTPUT : ";
cout<<"\n\n\t\t\t AREA OF RECTANGLE = "<<A<< in<<"^2";
}
void Rao :: rectangleperim()
{
line1();
cout<<" \t"<<char(16)<<char(16)<<char(16)<<"|| YOUR CHOICE : 
<4>FIND PERIMETER OF RECTANGLE ||"<<char(17)<<char(17)<<char(17);
line2();
cout<<"\n\n\t\t\t ENTER LENGTH(cm/m) : ";
cin>>a ;
cin.getline(in,5);
cout<<"\n\t\t\t ENTER WIDTH(cm/m) : ";
cin>>b;
cin.getline(in,5);
P=2*(a+b);
cout<<"\n\n"<<char(16)<<char(16)<<char(16)<<"OUTPUT : ";
cout<<"\n\n\t\t\t PERIMETER OF RECTANGLE = "<<P<< in;
}
void Rao :: trianglearea()
{
line1();
cout<<" \t"<<char(16)<<char(16)<<char(16)<<"|| YOUR CHOICE : 
<5>FIND AREA OF TRIANGLE ||"<<char(17)<<char(17)<<char(17);
line2();
cout<<"\n\n\t\t\t ENTER BASE(cm/m) : ";
cin>>a ;
cin.getline(in,5);
cout<<"\n\t\t\t ENTER HEIGHT(cm/m) : ";
cin>>b;
cin.getline(in,5);
A=0.5*a*b;
cout<<"\n\n"<<char(16)<<char(16)<<char(16)<<"OUTPUT : ";
cout<<"\n\n\t\t\t AREA OF TRIANGLE = "<<A<<in<<"^2";
}
void Rao :: triangleperim()
{
line1();
cout<<" \t"<<char(16)<<char(16)<<char(16)<<"|| YOUR CHOICE : 
<6>FIND PERIMETER OF TRIANGLE ||"<<char(17)<<char(17)<<char(17);
line2();
cout<<"\n\n\t\t\t ENTER FIRST SIDE(cm/m) : ";
cin>>a ;
cin.getline(in,5);
cout<<"\n\t\t\t ENTER SECOND SIDE(cm/m) : ";
cin>>b;
cin.getline(in,5);
cout<<"6\n\t\t\t ENTER THIRD SIDE(cm/m) : ";
cin>>c;
cin.getline(in,5);
P=a+b+c;
cout<<"\n\n"<<char(16)<<char(16)<<char(16)<<"OUTPUT : ";
cout<<"\n\n\t\t\t PERIMETER OF TRIANGLE = "<<P<<in;
}
void Rao :: squarearea()
{
line1();
cout<<" \t"<<char(16)<<char(16)<<char(16)<<"|| YOUR CHOICE : 
<7>FIND AREA OF SQUARE ||"<<char(17)<<char(17)<<char(17);
line2();
cout<<"\n\n\t\t\t ENTER SIDE(cm/m) : ";
cin>>a ;
cin.getline(in,5);
A=a*a;
cout<<"\n\n"<<char(16)<<char(16)<<char(16)<<"OUTPUT : ";
cout<<"\n\n\t\t\t AREA OF SQUARE = "<<A<<in<<"^2";
}
void Rao :: squareperim()
{
line1();
cout<<" \t"<<char(16)<<char(16)<<char(16)<<"|| YOUR CHOICE : 
<8>FIND PERIMETER OF SQUARE ||"<<char(17)<<char(17)<<char(17);
line2();
cout<<"\n\n\t\t\t ENTER SIDE(cm/m) : ";
cin>>a ;
cin.getline(in,5);
P=4*a;
cout<<"\n\n"<<char(16)<<char(16)<<char(16)<<"OUTPUT : ";
cout<<"\n\n\t\t\t PERIMETER OF SQUARE = "<<P<<in;
}
void Rao :: cubearea()
{
line1();
cout<<" \t"<<char(16)<<char(16)<<char(16)<<"|| YOUR CHOICE : 
<9>FIND AREA OF CUBE ||"<<char(17)<<char(17)<<char(17);
line2();
cout<<"\n\n\t\t\t ENTER SIDE(cm/m) : ";
cin>>a ;
cin.getline(in,5);
A=6*a*a;
cout<<"\n\n"<<char(16)<<char(16)<<char(16)<<"OUTPUT : ";
cout<<"\n\n\t\t\t AREA OF CUBE = "<<A<<in<<"^2";
}
void Rao :: cubevolume()
{
line1();
cout<<" \t"<<char(16)<<char(16)<<char(16)<<"|| YOUR CHOICE : 
<10>FIND VOLUME OF CUBE ||"<<char(17)<<char(17)<<char(17);
line2();
cout<<"\n\n\t\t\t ENTER SIDE(cm/m) : ";
cin>>a ;
cin.getline(in,5);
V=a*a*a;
cout<<"\n\n"<<char(16)<<char(16)<<char(16)<<"OUTPUT : ";
cout<<"\n\n\t\t\t VOLUME OF CUBE = "<<V<<in<<"^3";
}
void Rao :: cuboidarea()
{
line1();
cout<<" \t"<<char(16)<<char(16)<<char(16)<<"|| YOUR CHOICE : 
<11>FIND AREA OF CUBOID ||"<<char(17)<<char(17)<<char(17);
line2();
cout<<"\n\t\t\t ENTER LENGTH(cm/m) : ";
cin>>a ;
cin.getline(in,5);
cout<<"\n\t\t\t ENTER WIDTH(cm/m) : ";
cin>>b ;
cin.getline(in,5);
cout<<"\n\t\t\t ENTER HEIGHT(cm/m) : ";
cin>>c ;
cin.getline(in,5);
A=2*((a*b)+(b*c)+(a*c));
cout<<"\n\n"<<char(16)<<char(16)<<char(16)<<"OUTPUT : ";
cout<<"\n\n\t\t\t AREA OF CUBOID = "<<A<<in<<"^2";
}
void Rao :: cuboidvolume()
{
line1();
cout<<" \t"<<char(16)<<char(16)<<char(16)<<"|| YOUR CHOICE : 
<12>FIND VOLUME OF CUBOID ||"<<char(17)<<char(17)<<char(17);
line2();
cout<<"\n\t\t\t ENTER LENGTH(cm/m) : ";
cin>>a ;
cin.getline(in,5);
cout<<"\n\t\t\t ENTER WIDTH(cm/m) : ";
cin>>b ;
cin.getline(in,5);
cout<<"\n\t\t\t ENTER HEIGHT(cm/m) : ";
cin>>c ;
cin.getline(in,5);
V=a*b*c;
cout<<"\n\n"<<char(16)<<char(16)<<char(16)<<"OUTPUT : ";
cout<<"\n\n\t\t\t AREA OF CUBOID = "<<V<<in<<"^3";
}
void Rao :: spherearea()
{
line1();
cout<<" \t"<<char(16)<<char(16)<<char(16)<<"|| YOUR CHOICE : 
<13>FIND AREA OF SPHERE ||"<<char(17)<<char(17)<<char(17);
line2();
cout<<"\n\n\t\t\t ENTER RADIUS(cm/m) : ";
cin>>a ;
cin.getline(in,5);
A=4*3.14*a*a;
cout<<"\n\n"<<char(16)<<char(16)<<char(16)<<"OUTPUT : ";
cout<<"\n\n\t\t\t AREA OF SPHERE = "<<A<< in<<"^2";
}
void Rao :: spherevolume()
{
line1();
cout<<" \t"<<char(16)<<char(16)<<char(16)<<"|| YOUR CHOICE : 
<14>FIND VOLUME OF SPHERE ||"<<char(17)<<char(17)<<char(17);
line2();
cout<<"\n\n\t\t\t ENTER RADIUS(cm/m) : ";
cin>>a ;
cin.getline(in,5);
A=(4/3)*3.14*(a*a*a);
cout<<"\n\n"<<char(16)<<char(16)<<char(16)<<"OUTPUT : ";
cout<<"\n\n\t\t\t VOLUME OF SPHERE = "<<A<< in<<"^2";
}
void Rao :: AO()
{
line1();
cout<<" \t"<<char(16)<<char(16)<<char(16)<<"|| YOUR CHOICE : 
<16>FIND ARITHMETIC OPERATION OF TWO NO. 
||"<<char(17)<<char(17)<<char(17);
line2();
cout<<"\n\n\t\t\t ENTER FIRST NO. : ";
cin>>a ;
cin.getline(in,5);
cout<<"\n\n\t\t\t ENTER SECOND NO. : ";
cin>>b ;
cin.getline(in,5);
cout<<"\n"<<char(16)<<char(16)<<char(16)<<"OUTPUT : ";
cout<<"\n\t\t\t ADDITION = "<<a+b;
cout<<"\n\t\t\t SUBSTRACTION = "<<a-b;
cout<<"\n\t\t\t MULTIPLICATION = "<<a*b;
cout<<"\n\t\t\t DIVISION = "<<a/b;
cout<<"\n\t\t\t MODULUS = "<<int(a)%int(b);
}
void Rao :: SC()
{
line1();
cout<<" \t"<<char(16)<<char(16)<<char(16)<<"|| YOUR CHOICE : 
<15>FIND SQUARE AND CUBE OF A NO> ||"<<char(17)<<char(17)<<char(17);
line2();
cout<<"\n\n\t\t\t ENTER A NUMBER : ";
cin>>a ;
cin.getline(in,5);
A=a*a;
V=a*a*a;
cout<<"\n\n"<<char(16)<<char(16)<<char(16)<<"OUTPUT : ";
cout<<"\n\n\t\t\t SQUARE OF "<<a<<" = "<<A;
cout<<"\n\n\t\t\t CUBE OF "<<a<<" = "<<V;
}
void main()
{
class Rao R;
char id[1],ch[1];
long int p;
R.line1();
cout<<"\t\t\t"<<char(16)<<char(16)<<"|| SINGLE CHOICE PROGRAM 
||"<<char(17)<<char(17);
cout<<"\n";
delay(50);
for(int i=1; i<=80; i++)
{
cout<<char(30);
delay(20);
}
cout<<"\n\n\t\t\t ID : ";
cin.getline(id,25);
cout<<"\n\t\t\t PASSWORD : ";
cin>>p;
clrscr();
if(p==845418)
{
Raosahab:
clrscr();
int i;
char cond;
for(i=0; i<=79; i++)
{
cout<<char(31);
delay(20);
}
delay(30);
cout<<"\t\t\t "<<char(16)<<char(16)<<char(16)<<"|| SINGLE CHOICE 
PROGRAM ||"<<char(17)<<char(17)<<char(17)<<"\n";
for(i=0; i<=79; i++)
{
cout<<char(30);
delay(20);
}
cout<<"\t <1>FIND AREA OF CIRCLE";
delay(20);
cout<<"\t <2>FIND PERIMETER OF CIRCLE";
delay(22);
cout<<"\n\n\t <3>FIND AREA OF RECTANGLE";
delay(24);
cout<<"\t <4>FIND PERIMETER OF RECTANGLE";
delay(26);
cout<<"\n\n\t <5>FIND AREA OF TRIANGLE";
delay(28);
cout<<"\t <6>FIND PERIMETER OF TRIANGLE";
delay(30);
cout<<"\n\n\t <7>FIND AREA OF SQUARE";
delay(31);
cout<<"\t <8>FIND PERIMETER OF SQUARE ";
delay(32);
cout<<"\n\n\t <9>FIND AREA OF CUBE";
delay(33);
cout<<"\t <10>FIND VOLUME OF CUBE ";
delay(34);
cout<<"\n\n\t <11>FIND AREA OF CUBOID";
delay(35);
cout<<"\t <12>FIND VOLUME OF CUBOID ";
delay(36);
cout<<"\n\n\t <13>FIND AREA OF SPHERE";
delay(37);
cout<<"\t <14>FIND VOLUME OF SPHERE ";
delay(38);
cout<<"\n\n<15>FIND SQUARE AND CUBE OF A NO.";
delay(39);
cout<<"\t <16>FIND ARITHMETIC OPERATION OF TWO NO";
delay(40);
cout<<"\n\t\t ENTER YOUR CHOICE NO. : ";
MaaSahib:
cin.getline(ch,2);
if(ch=="1")
{
R.circlearea();
}
else if(ch=="2")
{
R.circleperim();
}
else if(ch=="3")
{
R.rectanglearea();
}
else if(ch=="4")
{
R.rectangleperim();
}
else if(ch=="5")
{
R.trianglearea();
}
else if(ch=="6")
{
R.triangleperim();
}
else if(ch=="7")
{
R.squarearea();
}
else if(ch=="8")
{
R.squareperim();
}
else if(ch=="9")
{
R.cubearea();
}
else if(ch=="10")
{
R.cubevolume();
}
else if(ch=="11")
{
R.cuboidarea();
}
else if(ch=="12")
{
R.cuboidvolume();
}
else if(ch=="13")
{
R.spherearea();
}
else if(ch=="14")
{
R.spherevolume();
}
else if(ch=="15")
{
R.SC();
}
else if(ch=="16")
{
R.AO();
}
else
{
cout<<"\t\t SORRY! YOUR CHOICE IS NOT AVAILABLE IN THIS 
PROGRAM ";
cout<<"\n\t\t See The Following Choice And Enter Your Choice : ";
sound(300);
delay(500);
nosound();
goto MaaSahib;
}
shivaay:
cout<<"\n\n\t\t\t Do You Want To Continue This Program(Y/N) : ";
cin>>cond;
if(cond=='Y'|| cond=='y')
{
goto Raosahab;
}
else if(cond=='N' || cond=='n')
{
exit(0);
}
else
{
cout<<"\t\t\t Please Enter Valid Character : ";
goto shivaay;
}
}
else
{
R.line1();
cout<<"\t\t\t"<<char(16)<<char(16)<<"|| SINGLE CHOICE 
PROGRAM ||"<<char(17)<<char(17);
R.line2();
cout<<"\n\n\n\t\t\t INVALID ID AND PASSWORD";
}
getch();
}//End of mai