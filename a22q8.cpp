//8. Write a C++ program to swap values of two int variables without using third variable
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b;
    c=a;
    a=b;
    b=c;
    cout<<a<<b;
}
