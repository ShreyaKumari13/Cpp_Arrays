//C++ program to Insert element at specific position in array
#include<iostream>
using namespace std;
int main(){
    int size,arr[10],b;
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
    int pos,ele;
    cout<<endl<<"Enter the position : ";
    cin>>pos;
    cout<<"Enter the element : ";
    cin>>ele;
    for(int i=size-1;i>=pos;i--){
        arr[i+1] = arr[i];
    }
    arr[pos] = ele;
    size++;
    cout<<"Your entered array is ->"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"\t";
    }
    return 0;
}