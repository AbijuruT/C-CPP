#include <iostream>

using namespace std;

int main(){

    int a = 100, b = 4;
    a = a+b;
    b= a-b;
    a = a-b;

    cout<<"a :"<<a<<endl;
    cout<<"b :"<<b<<endl;
    // cout<<a + (b++)<<endl; //9
    // cout<<b<<endl; //5
    // cout<<(--a) + b<<endl; //9
    // cout<<!(true && false)<<endl; // true
    // cout<<(true && false || true)<<endl;// true
    // int x = 7;
    // cout<<(++x <=9 && x+2 >=10)<<endl;
    // int y = 3;
    // cout<<(y == y++)<<endl;
    // cout<<y<<endl;

    return 0;
}