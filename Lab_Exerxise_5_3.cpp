#include <iostream>
#include <string>
using namespace std;

int main(){
    string array[]={"B123","C234","A345","C15","B17","G3003","C235","B179"};

    for(int i=0; i<=sizeof(array); ++i){
        if(array[i][0] =='B'){
            cout<<array[i]<<endl;
        }
    }
}