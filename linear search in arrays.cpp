//C++ Program for Linear Search in Arrays
#include<iostream>
using namespace std;

// void linear(int *arr,int n){
//     int ele,j=0,b;
//     cout<<"Enter the element to be searched : "<<endl;
//     cin>>ele;
//     for(int i=0;i<n;i++){
//         if(arr[i]==ele){
//             b = j;
//         }
//         else{
//             j++;
//         }
//     }
//     cout<<"Element found at position "<<b<<endl;
// }

int linear(int *arr,int n){
    int ele;
    cout<<"Enter the element to be searched : "<<endl;
    cin>>ele;
    for(int i=0;i<n;i++){
        if(arr[i]==ele){
            return i;
        }
    }
    return -1;
}

int main(){
    int size,arr[size];
    cout<<"Enter the total number : "<<endl;
    cin>>size;
    cout<<"Enter the elements of the array ->"<<endl;
    for(int i=0;i<size;i++){
        cout<<"Enter the element "<<i+1<<": "<<endl;
        cin>>arr[i];
    }
    //linear(arr,size);
    int index = linear(arr,size);
    cout<<"Element found at index : "<<index<<endl;
    return 0;
}