#include<iostream>
#include<math.h>
using namespace std;



int main()
{

char work;





cout<<"WELCOME BACK,BOSS";
cout<<"\n";

cout<<"\n";
cout<<"ENTER C FOR CALCULATING SUMS \n";
cout<<"ENTER B FOR BINARY LANGUAGE \n";
cout<<"ENTER K FOR CONSOLE MODELS \n";
cout<<"ENTER S TO LISTEN TO SONGS \n ";
cout<<"ENTER G TO SEE GAME PARTS  \n";
cout<<"ENTER W TO SEE WHICH NUMBER IS GREATER \n ";

cout<<"ENTER M TO SEE GRADES \n";
cout<<"ENTER F TO SEE FORMULAS FOR THE CONCEPTS \n";
cout<<"ENTER A TO CHECK SEATING ARRANGEMNET \n";
cout<<"ENTER Q TO FIND TO SQUARE ROOT OF A NUMBER \n";
cout<<"ENTER H TO SEE SUPER HERO GROUPS \n";
cout<<"ENTER D TO SEE DAY NUMBERS \n";
cout<<"ENTER R FOR SIMPLE INTREST \n";
cout<<" ENTER P FOR CHECKING WHETHER A NUMBER IS PRIME OR NOT \n";
cout<<"\n";
cout<<"\n";
cin>>work;
switch(work)

{
case 'S':
int num;

cout<<"\t\ MUSIC \n";
cout<<"\n";
cout<<"PLEASE ENTER YOUR NUMBER OF THE SONG FROM 1 TO 4: \n";
cout<<"1.JACKPOT \n";
cout<<"2.UNITY \n";
cout<<"3.MONODY \n";
cout<<"4.OBLIVION \n";
cout<<"6.TO EXIT \n";
cin>>num;

switch(num)

{
case 1:cout<<"THE SONG PLAYING IS  JACKPOT";
system("canberra-gtk-play -f /home/dhrpsr/Downloads/jackpot.wav");


break;
case 2:
cout<<"2.UNITY";
system("canberra-gtk-play -f /home/dhrpsr/Downloads/unity.wav");
break;

case 3:
cout<<"3.MONODY";
system("canberra-gtk-play -f /home/dhrpsr/Downloads/media.io_monody.wav");
break;

case 4:
cout<<"4.OBLIVION";
system("canberra-gtk-play -f /home/dhrpsr/Downloads/oblivion.wav");
break;

default:;break;


}


case 'C':
int a;
int b;
int sum;
char operation;

cout<<"PLEASE ENTER YOUR OPERATION:";
cin>>operation;
cout<<"PLEASE ENTER YOUR FIRST NUMBER:";
cin>>a;
cout<<"PLEASE ENTER YOUR SECOND NUMBER:";
cin>>b;

if(operation==a){
cout<<"PLEASE ENTER A OPERATION";
}

switch(operation)
{
case'*':sum=a*b;
cout<<a<<'*'<<b<<'='<<sum;
cout<<"\n";
cout<<sum;
cout<<" IS THE PRODUCT OF BOTH NUMBERS";
break;

case'/':sum=a/b;
cout<<a<<'/'<<b<<'='<<sum;
cout<<"\n";
cout<<sum;
cout<<" IS THE QUETIONT OF BOTH NUMBERS";
break;

case'+':sum=a+b;
cout<<a<<'+'<<b<<'='<<sum;
cout<<"\n";
cout<<sum;
cout<<" IS THE SUM OF BOTH THE NUMBERS";
break;

case'-':sum=a-b;
cout<<a<<'-'<<b<<'='<<sum;
cout<<"\n";
cout<<sum;
cout<<" IS THE DIFFERENCE OF BOTH THE NUMBERS";
break;

default:
cout<<"THE OPERATOR ENTERED IS NOT VALID";
break;





















}
case 'k':

char company;

cout<<"PLEASE ENTER YOUR COMPANY NAME:";
cin>>company;

switch(company)
{
case'X':
cout<<"X BOX \n";
cout<<"X BOX 360 \n";
cout<<"X BOX ONE \n";
cout<<"X BOX ONE S \n";
cout<<"X BOX ONE X \n";
break;

case'P':
cout<<"PLAYSTATION1 \n";
cout<<"PLAYSTATION2 \n";
cout<<"PLAYSTATION3 \n";
cout<<"PLAYSTATION4 \n";
break;

default:;break;










}

case'B':

int no;
cout<<"PLEASE ENTER YOUR NUMBER FROM 0 TO 9:";
cin>>no;

switch(no)
{
case 0:
cout<<0;
break;

case 1:
cout<<1;
break;


case 2:
cout<<10;
break;

case 3:
cout<<11;
break;

case 4:
cout<<100;
break;

case 5:
cout<<101;
break;

case 6:
cout<<110;
break;

case 7:
cout<<111;
break;

case 8:
cout<<1000;
break;

case 9:
cout<<1001;
break;

default:;break;
}
case 'W':
cout<<"PLEASE ENTER TWO NUMBERS: \n";
cin>>a;
cout<<"\n";
cin>>b;

if(a>b){
cout<<"A IS GREATER THAN B";
}

else{
cout<<"B IS GREATER THAN A";
}

case'G':

char game;

cout<<"PLEASE ENTER YOUR GAME COMPANY NAME:";
cin>>game;



switch(game)
{
case'R':
cout<<"GTA \n";







cout<<"GTA 2 \n";
cout<<"GTA 3 \n";
cout<<"GTA VICE CITY \n";
cout<<"GTA SAN ANDREAS \n";
cout<<"GTA 4 \n";
cout<<"GTA 5 \n";
cout<<"RED DEAD REDEMPTION \n";
cout<<"RED DEAD REDEMPTION 2 \n";
break;


case'A':
cout<<"CALL OF DUTY  \n";
cout<<"CALL OF DUTY 2 \n";
cout<<"CALL OF DUTY 3 \n";
cout<<"CALL OF DUTY 4 MODERN WARFARE \n";
cout<<"CALL OF DUTY 5 BLACK OPS \n";
cout<<"CALL OF DUTY 6 MODERN WARFARE 2 \n";
cout<<"CALL OF DUTY BLACK OPS 2 \n";
cout<<"CALL OF DUTY INFINITY WARFARE \n";
cout<<"CALL OF DUTY BLACK OPS 3 \n";
cout<<"CALL OF DUTY WORLD WAR 2 \n";
cout<<"CALL OF DUTY BLACK OPS 4 \n";
break;

default:;break;
}

case'M':

int marks;

cout<<"PLEASE ENTER YOUR NUMBER:";
cin>>marks;

switch(marks)
{
case 100:
cout<<" WOW, YOU HAVE GOT GOOD GRADES";
break;

case 90:
cout<<"YOU HAVE GOT A1 GRADES";
break;

case 80:
cout<<"YOU HAVE GOT A2GRADES ";
break;

case 70:
cout<<"YOU HAVE GOT B1 GRADES";
break;

case 60:
cout<<"YOU HAVE GOT B2 GRADES";
break;


case 50:
cout<<"YOU HAVE GOT C1 GRADES";
break;

case 40:
cout<<"YOU HAVE GOT C2 GRADES";
break;

case 30:
cout<<"YOU HAVE GOT D1 GARDES";
break;

case 20:
cout<<"YOU HAVE GOT D2 GRADES";
break;


case 10:
cout<<"YOU HAVE GOT E1 GRADES";
break;



default:;break;
}

case'F':

char formula;

cout<<"PLEASE ENTER YOUR CONCEPT NAME:";
cin>>formula;

switch(formula)
{
case'M':
cout<<"MOMENTUM=MASS*VELOCITY";
break;

case'G':
cout<<"F=GM1M2/R*R";
break;

case'V':
cout<<"VELOCITY=DISPLACEMENT/TIME";
break;

case'S':
cout<<"SPEED=DISTANCE/TIME";
break;

case'A':
cout<<"ANGULAR MOMENTUM=RADIUS*MASS*VELOCITY";
break;

default:;break;
}
case'A':

int row;

cout<<"PLEASE ENTER YOUR ROW NUMBER:";
cin>>row;

switch(row)
{
case 1:
cout<<"801c 701b \n";
cout<<"802c 702b \n";
cout<<"803c 703b \n";
cout<<"804c 704b \n";
break;

case 2:
cout<<"805c 705b \n";
cout<<"806c 706b \n";
cout<<"807c 707b \n";
cout<<"808c 708b \n";
break;

case 3:
cout<<"809c  709b  \n";
cout<<"8010c 7010b \n";
cout<<"8011c 7011b \n";
cout<<"8012c 7012b \n";
break;

case 4:
cout<<"8013c 7013b \n";
cout<<"8014c 7014b \n";
cout<<"8015c 7015b \n";
cout<<"8016c 7016b \n";
break;


default:;break;










}
case'Q':

int c;


cout<<"PLEASE ENTER YOUR NUMBER:";
cin>>a;

cout<<sqrt(a);
cout<<"\n";
b=sqrt(a);
c=int(b);
if(c*c==a){
cout<<"NUMBER ENTERED IS A PERFECT SQUARE";
}

else{
cout<<"NUMBER ENTERED IS A NOT A PERFECT SQUARE";
}

case'D':
char day;

cout<<"PLEASE ENTER YOUR DAY:";
cin>>day;


switch(day)
{
case'M':
cout<<1;
break;


case'T':
cout<<2;
break;

case'W':
cout<<3;
break;

case't':
cout<<4;
break;

case'F':
cout<<5;
break;

case'S':
cout<<6;
break;

case's':
cout<<7;
break;

default:;break;
}
case'H':
char hero;

cout<<"PLEASE ENTER YOUR HERO GROUP NAME:";
cin>>hero;

switch(hero)
{
case'A':
cout<<" IRON MAN \n";
cout<<" CAPTAIN AMERICA \n";
cout<<" HULK \n";
cout<<" FALCON \n";
cout<<" DOCTOR STRANGE \n";
cout<<" SPIDER-MAN \n";
cout<<" SCARLET WITCH \n";
cout<<" THOR \n";
break;


case'J':
cout<<" SUPERMAN \n";
cout<<" BATMAN \n";
cout<<" FLASH \n";
cout<<" WONDER WOMAN \n";
cout<<" AQUAMAN \n";
cout<<" CYBORG \n";
break;














}
case 'R':

long int rate;
long int time;
long int amount;
long int si;

cout<<"PLEASE ENTER YOUR RATE:";
cin>>rate;
cout<<"\n";
cout<<"PLEASE ENTER YOUR TIME:";
cin>>time;
cout<<"\n";
cout<<"PLEASE ENTER AMOUNT: ";
cin>>amount;
cout<<"\n";
si=time*rate*amount/100;

cout<<si;
cout<<"  IS SIMPLE INTEREST";





case 'P':

long int number;

cout<<"PLEASE ENTER YOUR PRIME NUMBER THAT YOU WANT YOU CHECK:";
cin>>number;



if(number%2==0){
cout<<"THE NUMBER ENTERED IS NOT PRIME";
}
else if(number%3==0){
cout<<"THE NUMBER ENTERED IS NOT PRIME NUMBER";
}
else if(number%4==0){
cout<<"THE NUMBER ENTERED IS NOT PRIME";
}
else if(number%5==0){
cout<<"THE NUMBER ENTERED IS NOT PRIME";
}else if(number%7==0){
cout<<"THE NUMBER ENTERED IS NOT PRIME";
}
else if(number%8==0){
cout<<"THE NUMBER ENTERED IS NOT PRIME";
}
else if(number%9==0){
cout<<"THE NUMBER ENTERED IS NOT PRIME";
}
else if(number%11==0){
cout<<"THE NUMBER ENTERED IS NOT PRIME";
}



else{
cout<<"THE NUMBER ENTERED IS PRIME NUMBER";
}

 default:
cout<<"PLEASE ENTER  VALID INFORMATION";

cout<<"\n";
cout<<"ENTER C FOR CALCULATING SUMS \n";
cout<<"ENTER B FOR BINARY LANGUAGE \n";
cout<<"ENTER K FOR CONSOLE MODELS \n";
cout<<"ENTER S TO LISTEN TO SONGS \n ";
cout<<"ENTER G TO SEE GAME PARTS  \n";
cout<<"ENTER W TO SEE WHICH NUMBER IS GREATER \n ";
cout<<"ENTER M TO SEE GRADES \n";
cout<<"ENTER F TO SEE FORMULAS FOR THE CONCEPTS \n";
cout<<"ENTER A TO CHECK SEATING ARRANGEMNET \n";
cout<<"ENTER Q TO FIND TO SQUARE ROOT OF A NUMBER \n";
cout<<"ENTER H TO SEE SUPER HERO GROUPS \n";
cout<<"ENTER D TO SEE DAY NUMBERS \n";
cout<<"ENTER R FOR SIMPLE INTREST \n";
cout<<" ENTER P FOR CHECKING WHETHER A NUMBER IS PRIME OR NOT \n";
cout<<"\n";
cout<<"\n";
cin>>work;
switch(work)

{
case 'S':
int num;

cout<<"\t\ MUSIC \n";
cout<<"\n";
cout<<"PLEASE ENTER YOUR NUMBER OF THE SONG FROM 1 TO 4: \n";
cout<<"1.JACKPOT \n";
cout<<"2.UNITY \n";
cout<<"3.MONODY \n";
cout<<"4.OBLIVION \n";
cout<<"6.TO EXIT \n";
cin>>num;

switch(num)

{
case 1:cout<<"THE SONG PLAYING IS  JACKPOT";
system("canberra-gtk-play -f /home/dhrpsr/Downloads/jackpot.wav");


break;
case 2:
cout<<"2.UNITY";
system("canberra-gtk-play -f /home/dhrpsr/Downloads/unity.wav");
break;

case 3:
cout<<"3.MONODY";
system("canberra-gtk-play -f /home/dhrpsr/Downloads/media.io_monody.wav");
break;

case 4:
cout<<"4.OBLIVION";
system("canberra-gtk-play -f /home/dhrpsr/Downloads/oblivion.wav");
break;

default:;break;




}


case 'C':
int a;
int b;
int sum;
char operation;

cout<<"PLEASE ENTER YOUR OPERATION:";
cin>>operation;
cout<<"PLEASE ENTER YOUR FIRST NUMBER:";
cin>>a;
cout<<"PLEASE ENTER YOUR SECOND NUMBER:";
cin>>b;

if(operation==a){
cout<<"PLEASE ENTER A OPERATION";
}

switch(operation)
{
case'*':sum=a*b;
cout<<a<<'*'<<b<<'='<<sum;
cout<<"\n";
cout<<sum;
cout<<" IS THE PRODUCT OF BOTH NUMBERS";
break;

case'/':sum=a/b;
cout<<a<<'/'<<b<<'='<<sum;
cout<<"\n";
cout<<sum;
cout<<" IS THE QUETIONT OF BOTH NUMBERS";
break;

case'+':sum=a+b;
cout<<a<<'+'<<b<<'='<<sum;
cout<<"\n";
cout<<sum;
cout<<" IS THE SUM OF BOTH THE NUMBERS";
break;

case'-':sum=a-b;
cout<<a<<'-'<<b<<'='<<sum;
cout<<"\n";
cout<<sum;
cout<<" IS THE DIFFERENCE OF BOTH THE NUMBERS";
break;

default:
cout<<"THE OPERATOR ENTERED IS NOT VALID";
break;





















}
case 'k':

char company;

cout<<"PLEASE ENTER YOUR COMPANY NAME:";
cin>>company;

switch(company)
{
case'X':
cout<<"X BOX \n";
cout<<"X BOX 360 \n";
cout<<"X BOX ONE \n";
cout<<"X BOX ONE S \n";
cout<<"X BOX ONE X \n";
break;

case'P':
cout<<"PLAYSTATION1 \n";
cout<<"PLAYSTATION2 \n";
cout<<"PLAYSTATION3 \n";
cout<<"PLAYSTATION4 \n";
break;

default:;break;










}

case'B':

int no;
cout<<"PLEASE ENTER YOUR NUMBER FROM 0 TO 9:";
cin>>no;

switch(no)
{
case 0:
cout<<0;
break;

case 1:
cout<<1;
break;


case 2:
cout<<10;
break;

case 3:
cout<<11;
break;

case 4:
cout<<100;
break;

case 5:
cout<<101;
break;

case 6:
cout<<110;
break;

case 7:
cout<<111;
break;

case 8:
cout<<1000;
break;

case 9:
cout<<1001;
break;

default:;break;
}
case 'W':
cout<<"PLEASE ENTER TWO NUMBERS: \n";
cin>>a;
cout<<"\n";
cin>>b;

if(a>b){
cout<<"A IS GREATER THAN B";
}

else{
cout<<"B IS GREATER THAN A";
}

case'G':

char game;

cout<<"PLEASE ENTER YOUR GAME COMPANY NAME:";
cin>>game;



switch(game)
{
case'R':
cout<<"GTA \n";







cout<<"GTA 2 \n";
cout<<"GTA 3 \n";
cout<<"GTA VICE CITY \n";
cout<<"GTA SAN ANDREAS \n";
cout<<"GTA 4 \n";
cout<<"GTA 5 \n";
cout<<"RED DEAD REDEMPTION \n";
cout<<"RED DEAD REDEMPTION 2 \n";
break;


case'A':
cout<<"CALL OF DUTY  \n";
cout<<"CALL OF DUTY 2 \n";
cout<<"CALL OF DUTY 3 \n";
cout<<"CALL OF DUTY 4 MODERN WARFARE \n";
cout<<"CALL OF DUTY 5 BLACK OPS \n";
cout<<"CALL OF DUTY 6 MODERN WARFARE 2 \n";
cout<<"CALL OF DUTY BLACK OPS 2 \n";
cout<<"CALL OF DUTY INFINITY WARFARE \n";
cout<<"CALL OF DUTY BLACK OPS 3 \n";
cout<<"CALL OF DUTY WORLD WAR 2 \n";
cout<<"CALL OF DUTY BLACK OPS 4 \n";
break;

default:;break;
}

case'M':

int marks;

cout<<"PLEASE ENTER YOUR NUMBER:";
cin>>marks;

switch(marks)
{
case 100:
cout<<" WOW, YOU HAVE GOT GOOD GRADES";
break;

case 90:
cout<<"YOU HAVE GOT A1 GRADES";
break;

case 80:
cout<<"YOU HAVE GOT A2GRADES ";
break;

case 70:
cout<<"YOU HAVE GOT B1 GRADES";
break;

case 60:
cout<<"YOU HAVE GOT B2 GRADES";
break;


case 50:
cout<<"YOU HAVE GOT C1 GRADES";
break;

case 40:
cout<<"YOU HAVE GOT C2 GRADES";
break;

case 30:
cout<<"YOU HAVE GOT D1 GARDES";
break;

case 20:
cout<<"YOU HAVE GOT D2 GRADES";
break;


case 10:
cout<<"YOU HAVE GOT E1 GRADES";
break;



default:;break;
}

case'F':

char formula;

cout<<"PLEASE ENTER YOUR CONCEPT NAME:";
cin>>formula;

switch(formula)
{
case'M':
cout<<"MOMENTUM=MASS*VELOCITY";
break;

case'G':
cout<<"F=GM1M2/R*R";
break;

case'V':
cout<<"VELOCITY=DISPLACEMENT/TIME";
break;

case'S':
cout<<"SPEED=DISTANCE/TIME";
break;

case'A':
cout<<"ANGULAR MOMENTUM=RADIUS*MASS*VELOCITY";
break;

default:;break;
}
case'A':

int row;

cout<<"PLEASE ENTER YOUR ROW NUMBER:";
cin>>row;

switch(row)
{
case 1:
cout<<"801c 701b \n";
cout<<"802c 702b \n";
cout<<"803c 703b \n";
cout<<"804c 704b \n";
break;

case 2:
cout<<"805c 705b \n";
cout<<"806c 706b \n";
cout<<"807c 707b \n";
cout<<"808c 708b \n";
break;

case 3:
cout<<"809c  709b  \n";
cout<<"8010c 7010b \n";
cout<<"8011c 7011b \n";
cout<<"8012c 7012b \n";
break;

case 4:
cout<<"8013c 7013b \n";
cout<<"8014c 7014b \n";
cout<<"8015c 7015b \n";
cout<<"8016c 7016b \n";
break;


default:;break;










}
case'Q':

int c;


cout<<"PLEASE ENTER YOUR NUMBER:";
cin>>a;

cout<<sqrt(a);
cout<<"\n";
b=sqrt(a);
c=int(b);
if(c*c==a){
cout<<"NUMBER ENTERED IS A PERFECT SQUARE";
}

else{
cout<<"NUMBER ENTERED IS A NOT A PERFECT SQUARE";
}

case'D':
char day;

cout<<"PLEASE ENTER YOUR DAY:";
cin>>day;


switch(day)
{
case'M':
cout<<1;
break;


case'T':
cout<<2;
break;

case'W':
cout<<3;
break;

case't':
cout<<4;
break;

case'F':
cout<<5;
break;

case'S':
cout<<6;
break;

case's':
cout<<7;
break;

default:;break;
}
case'H':
char hero;

cout<<"PLEASE ENTER YOUR HERO GROUP NAME:";
cin>>hero;

switch(hero)
{
case'A':
cout<<" IRON MAN \n";
cout<<" CAPTAIN AMERICA \n";
cout<<" HULK \n";
cout<<" FALCON \n";
cout<<" DOCTOR STRANGE \n";
cout<<" SPIDER-MAN \n";
cout<<" SCARLET WITCH \n";
cout<<" THOR \n";
break;


case'J':
cout<<" SUPERMAN \n";
cout<<" BATMAN \n";
cout<<" FLASH \n";
cout<<" WONDER WOMAN \n";
cout<<" AQUAMAN \n";
cout<<" CYBORG \n";
break;














}
case 'R':

long int rate;
long int time;
long int amount;
long int si;

cout<<"PLEASE ENTER YOUR RATE:";
cin>>rate;
cout<<"\n";
cout<<"PLEASE ENTER YOUR TIME:";
cin>>time;
cout<<"\n";
cout<<"PLEASE ENTER AMOUNT: ";
cin>>amount;
cout<<"\n";
si=time*rate*amount/100;

cout<<si;
cout<<"  IS SIMPLE INTEREST";





case 'P':

long int number;
cout<<"PLEASE ENTER YOUR PRIME NUMBER THAT YOU WANT YOU CHECK:";
cin>>number;
if(number%2==0){
cout<<"THE NUMBER ENTERED IS NOT PRIME";
}
else if(number%3==0){
cout<<"THE NUMBER ENTERED IS NOT PRIME NUMBER";
}
else if(number%4==0){
cout<<"THE NUMBER ENTERED IS NOT PRIME";
}
else if(number%5==0){
cout<<"THE NUMBER ENTERED IS NOT PRIME";
}else if(number%7==0){
cout<<"THE NUMBER ENTERED IS NOT PRIME";
}
else if(number%8==0){
cout<<"THE NUMBER ENTERED IS NOT PRIME";
}
else if(number%9==0){
cout<<"THE NUMBER ENTERED IS NOT PRIME";
}
else if(number%11==0){
cout<<"THE NUMBER ENTERED IS NOT PRIME";
}
else{
cout<<"THE NUMBER ENTERED IS PRIME NUMBER";
break;
}}
}
}
