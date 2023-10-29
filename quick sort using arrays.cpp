//C++ Program for Quick Sort using arrays
#include<iostream>
using namespace std;

void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}

int partition(int arr[],int low,int high){
    int temp;
    int pivot = arr[low];
    int j = high;
    int i = low+1;
    do{
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<j){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }

    }while(i<j);
    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;
}

void quicksort(int arr[],int low,int high){
    int indexofmin;
    if(low<high){
        indexofmin = partition(arr,low,high);
        quicksort(arr,low,indexofmin-1);
        quicksort(arr,indexofmin+1,high);
    }
}

int main(){
    int arr[] = {3,5,12,13,2};
    int n=5;
    printarray(arr,n);
    quicksort(arr,0,n-1);
    cout<<"Array after sorting"<<endl;
    printarray(arr,n);
    return 0;
}