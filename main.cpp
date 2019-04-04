#include <iostream>
#include <string>
#include <list>
#include <array>
using namespace std;
// this is common syntax for a function in C++ type of function fist, ex. int\
then the name of function, then followed by what values with be in\
the function, and then of course, the actual function itself in {}\
always before the main function

int addition(int a, int b)
{
    int s;
    s=a+b;
    return s;
}
//This is a recursive function, which means it calls itself\
factorials are a common use of recursive functions in C++
int fact(int n){
    if (n <= 1)
        return 1;
    else
        return n*fact(n-1);
}
int main() {
    string spr = "*********************************";
    int g;
    int num;
    cout<<spr<<endl;
    g = addition (7,9);
    cout<<"The result is "<<g<<endl;
    cout<<spr<<endl;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    cout<<"The factorial of your entered number is: "<<fact(num)<<endl;
    cout<<spr<<endl;
    char a[] = {'c','a','t','\0'};
    char b[] = {'d','o','g','\0'};
    b[1] = 'u';
   cout<<""<<a<<endl;
    cout<<""<<b<<endl;
    cout<<spr<<endl;
    while( g < 20 ) {
        cout << "value of w: " << g << endl;
        g++;


    }
    cout<<""<<g<<endl
    cout<<spr<<endl;


return 0;
}