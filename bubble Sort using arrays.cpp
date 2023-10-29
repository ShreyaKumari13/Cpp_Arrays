//C++ Program for bubble Sort using arrays
#include<iostream>
using namespace std;

void bubble(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            while(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
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
    bubble(arr,size);
    cout<<"After sorting"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"\t";
    }
    return 0;
}