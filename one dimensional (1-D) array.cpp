//C++ Program for One Dimensional (1-D) Array
#include<iostream>
using namespace std;

int main()
{
    int arr[50], m,j;
    cout<<"Enter size of Array ( Max:50 ) :: ";
    cin>>m;
    cout<<"\nEnter Elements to Array Below :: \n";
    for(j=0;j<m;++j)
    {
        cout<<"\nEnter arr["<<j<<"] Element :: ";
        cin>>arr[j];
    }
    cout<<"\nThe Elements in the Array are :: \n\n";
    for(j=0; j<m; j++)
    {
            cout<<arr[j]<<"  ";
    }
    cout<<"\n";
    return 0;
}