//C++ Program for Insertion Sort using Array
#include<iostream>
using namespace std;

void insertion(int arr[],int size){
    for(int i=1;i<size;i++){
        int key = arr[i];
        int j = i-1;
        while(arr[j]>key && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
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
    insertion(arr,size);
    cout<<"After sorting"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"\t";
    }
    return 0;
}