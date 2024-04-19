#include <iostream>
#include <limits>
using namespace std;

int main(){
     int value;
     cout<<"Enter an integer value between 5 and 10"<<endl;
     

     while (true)
     {
        cin>>value;
        if(cin.fail()){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout<<"Sorry you have entered an invalid number please try again"<<endl;
    }
    else if(value<=5 || value>=10){
        cout<<"You have entere "<<value<<" Please enter a number between 5 and 10"<<endl;
    }
    else{
        cout<<"Your input value("<<value<<") has been accepted"<<endl;
    }
    
     }
     
}