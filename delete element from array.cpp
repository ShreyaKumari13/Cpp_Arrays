//C++ Program to Delete element from Array
#include<iostream>
using namespace std;
int main(){
    int size,arr[size],b;
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
    int a;
    cout<<endl<<"Enter the element to be deleted : ";
    cin>>a;
    for(int i = 0;i<size;i++){
        if(arr[i] == a){
            b = i;
        }
    }
    for(int i=b;i<size;i++){
        arr[i] = arr[i+1];
    }

    cout<<"Your array after deletion is ->"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"\t";
    }
    return 0;
}