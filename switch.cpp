#include <iostream>
using namespace std;
int main(){

int day;
cin>>day;

switch(day){
    case 1:
    cout<<"Monday"<<endl;
    break;

    case 2:
    cout<<"Tuesday"<<endl;
    break;

    //You can continue tying if you want but its not required to write all day.

    default:
    cout<<"default case"<<endl;

}
return 0;
}