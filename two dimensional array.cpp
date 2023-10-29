//C++ Program for Two Dimensional Array
#include<iostream>
using namespace std;

int main()
{
    int arr[10][10], row, col, i, j;
    cout<<"Enter rows for Array :: ";
    cin>>row;
    cout<<"\nEnter columns for Array :: ";
    cin>>col;
    cout<<"\nNow Enter "<<row<<"*"<<col<<" Array Elements :: \n";
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            cout<<"\nEnter arr["<<i<<"]["<<j<<"] Element :: ";
                cin>>arr[i][j];
        }
    }
    cout<<"\nThe Entered Array is :: \n\n";
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
                cout<<"\t"<<arr[i][j];
        }
        cout<<"\n\n";
    }

        return 0;
}