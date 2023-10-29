//C++ Program to Find Duplicate Elements in Array
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
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                cout<<endl<<"Duplicate element is : "<<arr[i];
            }
        }
    }
    return 0;
}