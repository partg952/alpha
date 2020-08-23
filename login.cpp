#include<iostream>
using namespace std;
int  main()
{
     string name;
     string password;

    cout<<"please enter your login name:"<<endl;
    cin>>name;

    if(name=="parth@gmail.com")
    {
        cout<<"please enter your password:"<<endl;
        cin>>password;

        if(password=="creeper"){
            cout<<"welcome sir";
        }
       
     else
        {
            cout<<"invalid password";
        }
        
    }

else{
    cout<<"invalid account";
}

     

}