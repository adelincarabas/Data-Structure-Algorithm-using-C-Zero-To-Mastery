#include <iostream>
using namespace std;

int main() {
    cout<<"Enter the number of elements"<<endl;
    int n;
    cin>>n;

    int a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }

    int largest = 0;
    for(int i = 0; i < n; i++){
        if(largest <= a[i])
        largest = a[i];
    }
    cout<<largest;

    return 0;
}