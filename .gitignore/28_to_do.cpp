//C++ Program for Union of Two Sorted Arrays
#include<iostream>
using namespace std;

int main()
{
    int a1[20],a2[20],u[40],i,j,n,m,k,z=0;
    cout<<"Enter size of first array: ";
    cin>>n;
    cout<<"\nEnter elements to the array :: \n";
    for(i=0;i<n;++i)
    {
        cout<<"\nEnter "<<i+1<<" element :: ";
        cin>>a1[i];
    }

    cout<<"\nEnter size of second array: ";
    cin>>m;
    cout<<"\nEnter elements to the array :: \n";
    for(i=0;i<m;++i)
    {
        cout<<"\nEnter "<<i+1<<" element :: ";
        cin>>a2[i];
    }
    for(j=0;j<n;j++){
        u[j] = a1[j];
    }
    for(i=0;i<n;++i)
    {
        cout<<"\nEnter "<<i+1<<" element :: "<<u[i];
    }
    int ele,j=0,b;
    cout<<"Enter the element to be searched : "<<endl;
    cin>>ele;
        for(int i=0;i<n;i++){
            if(arr[i]==ele){
                b = j;
            }
            else{
                j++;
            }
        }
        cout<<"Element found at position "<<b<<endl;
    }

    return 0;
}