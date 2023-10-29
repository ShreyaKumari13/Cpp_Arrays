//binary search
#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int ele){
    int low = 0, high = n - 1;
    while (low <= high){
        int mid = (low + high)/2;
        if(ele == arr[mid]){
            return mid;      
        }
        else if(ele < arr[mid]){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return -1;
}
 
int main(void){
    int n,arr[n],ele,index;
    cout<<"Enter the size of the number : "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the number of element : "<<i+1<<endl;
        cin>>arr[i];
    }
    cout<<"Enter the element to be searched : "<<endl;
    cin>>ele;

    index = binarySearch(arr, n, ele);
    if (index != -1) {
        cout<<"Element found at index : "<<index<<endl;
    }
    else {
        cout<<"Element not found!!!"<<endl;
    }
    return 0;
}