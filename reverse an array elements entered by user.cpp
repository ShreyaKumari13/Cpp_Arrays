//C++ Program To reverse an array elements entered by user
#include<iostream>
using namespace std;
int main(){
    int size,arr[size];
    cout<<"Enter the size of the array : ";
    cin>>size;
    for(int i=0;i<size;i++){
        cout<<"Enter number "<<i+1<<":";
        cin>>arr[i];
    }
    cout<<"Your entered array is ->"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"\t";
    }

    cout<<endl<<"Reversed array is ->"<<endl;
    for(int i=size-1;i>=0;i--){
        cout<<arr[i]<<"\t";
    }
    return 0;
}