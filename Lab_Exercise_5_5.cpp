#include <iostream>
#include <limits>

using namespace std;

double triangle(double base,double height){
    double result=0.5*base*height;
    return result;
}

double rectangle(double short_side,double long_side){
        double result=short_side*long_side;
        return result;
    }

double square(double side_one,double side_two){
        double result=side_one*side_two;
        return result;
    }

int main(){
    while(true){
    
    cout<<"Please select the area of the shape to calculate"<<endl;
    cout<<"1.Square"<<endl;
    cout<<"2.Rectangle"<<endl;
    cout<<"3.Triangle"<<endl;
    cout<<"4.Exit Program"<<endl;
    cout<<"\nEnter selection: "<<endl;

    double input;
    cin>>input;
    if(cin.fail()){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout<<"Your input was incorrect\n"<<endl;
    }
    else if(input>4 || input<1){
        cout<<"You input was "<<input<<" which is an invalid input"<<endl;
    }
    else if(input==1){
        cout<<"You have chosen a square, please enter the value of the two sides"<<endl;
        double SIDE_ONE;
        double SIDE_TWO;
        cin>>SIDE_ONE;
        cin>>SIDE_TWO;
         cout<<"\nThe are of the Square is: "<<square(SIDE_ONE,SIDE_TWO)<<endl;
    }
    else if(input==2){
        cout<<"You have chosen a rectangle, please enter the value of the two sides"<<endl;
        double LONG_SIDE;
        double SHORT_SIDE;
        cin>>LONG_SIDE;
        cin>>SHORT_SIDE;
        cout<<"\nThe are of the Rectangle is: "<<rectangle(LONG_SIDE,SHORT_SIDE)<<endl;
    }
    else if(input==3){
        cout<<"You have entered a triangle, Please enter the value of the height and base"<<endl;
        double HEIGHT;
        double BASE;
        cin>>HEIGHT;
        cin>>BASE;
        cout<<"\nThe value of Triangle is: "<<triangle( HEIGHT,BASE)<<endl;
    }
    else{
        break;
    }
    }
}