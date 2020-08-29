#include<iostream>
using namespace std;
int main()
{
    int u_input;
    int s=0;
    int t=0;
    string name;
    string password;

while(true){
    cout<<"press 1 for student "<<endl;
    cout<<"press 2 for teacher"<<endl;
    cout<<"press 3 for record "<<endl;
    cout<<"press 4 to delete record"<<endl;
    cin>>u_input;

    
    
if(u_input==1){
    s++;
}

else if(u_input==2){
    t++;
}
else if(u_input==3)
{
 cout<<"please enter your mail:"<<endl;
 cin>>name;

if(name=="parth@gmail.com"){

    cout<<"enter your password:"<<endl;
    cin>>password;

    if (password=="creeper")
    {
        cout<<"*******************************"<<endl;
        cout<<"number of students = "<<s<<endl;
        cout<<"number of teachers =  "<<t<<endl;
        cout<<"total =  "<<t+s<<endl;
        cout<<"********************************"<<endl;
    }
    else
    {
        cout<<"invalid password"<<endl;
    }
    
    
} 
 else
    {
     cout<<"invalid account"<<endl;   
    }

}
else if(u_input==4){
    s=0;
    t=0;
}
else
{
    cout<<"enter valid number"<<endl;
}



    }
}