//C++ Program to Access Elements of an Array Using Pointer
#include <iostream>
using namespace std;

void array(int *a,int n){
    for(int i=0;i<n;i++){
        cout<<"element :: "<<(*a+i)<<endl;
    }
}

int main()
{
    int n, i,a[n];
    cout<<"Enter size of Array (Value of N ):: ";
    cin>>n;
    cout<<"\nEnter elements to the array :: \n";
    for(i=0;i<n;++i)
    {
        cout<<"\nEnter "<<i+1<<" element :: ";
        cin>>a[i];
    }
    array(a,n);
    return 0;
}