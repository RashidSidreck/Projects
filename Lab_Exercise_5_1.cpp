#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
using namespace std;

int main(){
    srand(time(nullptr));
    
    int number_of_days= rand() % 12;

    if(number_of_days>6&&number_of_days<=10){
        cout<<"Your subscription will expire soon. Renew now!"<<endl;
    }
    else if(number_of_days>1&&number_of_days<=5){
        cout<<"Your subscription expires in "<<number_of_days<<" days Renew now and save 10%!"<<endl;
    }
    else if(number_of_days==1){
        cout<<"Your subscription expires within a day!\n""Renew now and save 20%!"<<endl;
    }
    else if(number_of_days==0){
        cout<<"Your subscription has expired."<<endl;
    }
    else{
         cout<<"You have an active subscription."<<endl;}

         return 0;
       
}