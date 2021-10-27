#include <iostream>
#include <string.h>
using namespace std;

void printAllprefixes(char input[]){
    for(int i = 0; i < strlen(input); i++){
        for(int j = 0; j <= i; j++){
            cout<<input[j]<<" ";
        }
        cout<<endl;
    }
}

int main() {
    cout<<"Enter the string you want to see prefixes"<<endl;
    char a[100];
    cin>>a;

    cout<<"Prefixes: "<<a<<endl;
    printAllprefixes(a);
   


    return 0;
}