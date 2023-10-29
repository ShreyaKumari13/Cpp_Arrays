//C++ Program to Pass Array in Function
#include<iostream>
using namespace std;

void array(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}

int main(){
    int a[] = {1,2,3,4,5};
    int n = sizeof(a)/(sizeof(int));
    array(a,n);
    return 0;
}