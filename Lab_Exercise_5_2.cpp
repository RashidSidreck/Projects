#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <algorithm>

using namespace std;

int main(){
    srand(time(NULL));

    int number_of_days= rand() % 12;

    switch (number_of_days)
    {
    case 0:
        cout<<"Your subscription has expired."<<endl;
        break;
    case 1:
        cout<<"Your subscription expires within a day!\n""Renew now and save 20%!"<<endl;
        break;
    case 2:
    case 3:
    case 4:
    case 5:
        cout<<"Your subscription expires in "<<number_of_days<<" days Renew now and save 10%!"<<endl;
        break;
    case 7:
    case 8:
    case 9:
    case 10:
        cout<<"Your subscription will expire soon. Renew now!"<<endl;
        break;
    case 11:
        cout<<"You have an active subscription."<<endl;
        break;
default:
        break;
    }
}