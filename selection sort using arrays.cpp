//C++ Program for Selection Sort using Arrays
#include<iostream>
using namespace std;

void selection(int *arr,int size){
    int indexofmin,temp;
    for(int i=0;i<size-1;i++){
        indexofmin = i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[indexofmin]){
                indexofmin = j;
            }
            
        }
        temp = arr[i];
        arr[i] = arr[indexofmin];
        arr[indexofmin] = temp;
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
    selection(arr,size);
    cout<<"After sorting"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"\t";
    }
    return 0;
}