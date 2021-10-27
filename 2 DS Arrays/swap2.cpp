#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout<<"Input 2 numbers";
    cin>>a>>b;
    cout<<"the first number is "<<a<<" the second number is "<<b<<endl;
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"the first number is "<<a<<" the second number is "<<b<<endl;


    return 0;
}