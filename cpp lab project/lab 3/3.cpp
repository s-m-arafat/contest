#include<iostream>
using namespace std;
int main()
{
    int year;
    cin>>year;
    if(year%400==0||(year%4==0&&year%100!=0)){
        cout<<"It is a leap year."<<endl;
    }
    else{
        cout<<"It's not a leap year."<<endl;
    }
    return 0;
}
