#include<iostream>
using namespace std;
int main()
{
    int a = 6;
    int b = 9;
    // swapping
    a = a^b;
    b = a^b;         //( a = a^b) && b^b=0
    a = a^b;
    cout<<"a = "<<a<<" b = "<<b;
}