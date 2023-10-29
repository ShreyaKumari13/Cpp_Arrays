//C++ Program to Find Sum Above and Below of Main Diagonal Matrix
#include<iostream>
using namespace std;

int main(){
    int arr1[50][50],n,sum1=0,sum2=0;
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
            if(i<j){
                sum1+=arr1[i][j];              
            }
            else if(i>j){
                sum2+=arr1[i][j];
            }

        }
    }
    cout<<"Sum of above in array is : "<<sum1<<endl;
    cout<<"Sum of below in array is : "<<sum2<<endl;
    return 0;
}