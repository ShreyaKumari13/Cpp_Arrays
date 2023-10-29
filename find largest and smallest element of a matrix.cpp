//C++ Program to Find Largest and Smallest Element of a Matrix
#include<iostream>
using namespace std;

int main(){
    int arr1[50][50],n;
    cout<<"Enter dimension of the array : "<<endl;
    cin>>n;
    cout<<"Array 1"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"Enter the element for row ["<<i<<"]["<<j<<"] : "<<endl;
            cin>>arr1[i][j];
        }
    }
    int small = arr1[0][0],largest = arr1[0][0];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr1[i][j]>largest){
                largest = arr1[i][j];
            }
            // if(arr1[i][j]<small){
            //     small = arr1[i][j];
            // }
            else{
                small = arr1[i][j];
            }
        }
    }
    cout<<"Largest element is : "<<largest<<endl;
    cout<<"Smallest element is : "<<small<<endl;


    return 0;
}