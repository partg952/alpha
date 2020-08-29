#include<iostream>
using namespace std;
int main()
{
int input;
int count=0 ;
int cost=0;
int r=0;
int c=0;
int b=0;
while (true)
{

cout<<"press 1 for rickshaw"<<endl;
cout<<"press 2 for car"<<endl;
cout<<"press 3 for truck"<<endl;
cout<<"press 4 for record "<<endl;
cout<<"press 5 to delete "<<endl;
cin>> input;

if(input==1){
    cost=cost+100;
    count++;
    r++; 
}

else if(input==2){
    cost=cost+200;
    count++;
    c++;
}
else if(input==3){
    cost=cost+300;
    count++;
    b++;
}
else if(input==4){
    cout<<"*************************************"<<endl;
    cout<<"number of vehicles = "<<count<<endl;
    cout<<"total cost  = "<<cost<<endl;
    cout<<"ricshaw = "<<r<<endl;
    cout<<"car = "<<c<<endl;
    cout<<"truck = "<<b<<endl;
    cout<<"*************************************"<<endl;
}
else if(input==5){
    count =0;
    cost=0;
}

else {
    cout<<"inavlid number";

}


}
}