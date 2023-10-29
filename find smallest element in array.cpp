//C++ Program to Find Smallest Element in Array
#include<iostream>
using namespace std;

int main()
{

    int small, arr[50], m, j;
    cout<<"Enter size of Array ( Max:50 ) :: ";
    cin>>m;
    cout<<"\nEnter Elements to Array Below :: \n";
    for(j=0;j<m;++j)
    {
        cout<<"\nEnter arr["<<j<<"] Element :: ";
        cin>>arr[j];
    }
    cout<<"\nSearching for smallest element ...\n\n";
    small=arr[0];
    for(j=0; j<m; j++)
    {
        if(small>arr[j])
        {
            small=arr[j];
        }
    }
    cout<<"Smallest Element in Array = "<<small<<"\n";
    return 0;
}