#include <iostream>
using namespace std;

int length(char input[]){
    int count = 0;
    for(int i = 0; input[i] != '\0'; i++){
        count++;
    }
    return count;
}

void reverse(char input[]){
    int start = 0;
    int end = length(input) - 1;

    while(start < end){
        swap(input[start], input[end]);
        start++;
        end--;
    }
}



int main() {
    cout<<"Enter the string you want to reverse"<<endl;
    char a[100];
    cin.getline(a, 100);

    cout<<"string without reversing is "<<a<<endl;
    reverse(a);
    cout<<"Reversed string is "<<a<<endl;


    return 0;
}