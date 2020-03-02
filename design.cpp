#include<iostream>
using namespace std;
int main()
{
long int row,col;
char sign='*';
cout<<"HOW MANY COLUMNS:";
cin>>col;
cout<<"HOW MANY ROWS:";
cin>>row;
cout<<"WHICH SIGN:";
cin>>sign;

for(int i=0;i<row;i++){
for(int j=0;j<col;j++)
cout<<sign;
cout<<"\n";
}

}
