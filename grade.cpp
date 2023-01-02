#include <iostream>
using namespace std;
int main(){
 int marks;
 cin>>marks;
 if(marks>33)
cout<<"pass"<<endl;
else if(marks<33)
cout<<"500 Bucks Only"<<endl;

marks>33 ? cout<<"pass"<<endl : cout<<"500 Bucks Only"<<endl;



    return 0;
}