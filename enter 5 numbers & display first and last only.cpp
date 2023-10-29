//C++ Program to enter 5 numbers & display first and last only
#include<iostream>
using namespace std;
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cout<<"Enter number "<<i+1<<":";
        cin>>arr[i];
    }
    cout<<"Your entered array is ->"<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl<<"First element is : "<<arr[0]<<endl;
    cout<<"Last element is : "<<arr[4]<<endl;

    return 0;
}