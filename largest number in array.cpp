//C++ Program to find Maximum or Largest number in array
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

    int a = 0;
    for(int i=0;i<size;i++){
        while(arr[i]>a){
            a = arr[i];
        }
    }

    cout<<endl<<"Largest element in the array is : "<<a;

    return 0;
}