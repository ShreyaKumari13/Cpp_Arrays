//C++ Program to Multiply Two Matrix Using Multi-dimensional Arrays
#include<iostream>
using namespace std;

int main()
{
    int arr1[5][5], arr2[5][5], arr3[5][5], sum=0, i, j, k,m,n;

    cout<<"Enter size of matrix ( Max:5 ) :: ";
    cin>>m;
    cout<<"\nEnter Elements to Matrix A Below :: \n";

    for(i=0;i<m;i++)
    {
        for(j=0;j<m;++j)
        {
            cout<<"\nEnter arr1["<<i<<"]["<<j<<"] Element :: ";
            cin>>arr1[i][j];
        }

    }

    cout<<"\nEnter Elements to Matrix B Below :: \n";

    for(i=0;i<m;i++)
    {
        for(j=0;j<m;++j)
        {
            cout<<"\nEnter arr2["<<i<<"]["<<j<<"] Element :: ";
            cin>>arr2[i][j];
        }

    }

    cout<<"\nMultiplying two matrices.....\n";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            sum=0;
            for(k=0; k<3; k++)
            {
                    sum = sum + arr1[i][k] * arr2[k][j];
            }
            arr3[i][j] = sum;
        }
    }
    cout<<"\nMultiplication of two Matrices : \n\n";
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < m; ++j)
        {
            cout<<"\t"<<arr3[i][j];
        }
        printf("\n\n");
    }

    return 0;
}