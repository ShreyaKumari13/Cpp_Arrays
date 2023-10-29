//C++ Program to Find Sum of Diagonals of Matrix
#include<iostream>
using namespace std;

int main(){
    int arr1[50][50],n,sum=0;
    cout<<"Enter dimension of the array : "<<endl;
    cin>>n;
    cout<<"Array 1"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"Enter the element for row ["<<i<<"]["<<j<<"] : "<<endl;
            cin>>arr1[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum+=arr1[i][j];
            }
        }
    }
    cout<<"The sum of the diagonals is : "<<sum;
    return 0;
}