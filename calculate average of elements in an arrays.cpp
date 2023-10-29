//C++ Program to Calculate Average of elements in an Arrays
#include <iostream>
using namespace std;

int main()
{
    int n, i;
    float a[100], sum=0.0 , average;

    cout<<"Enter size of Array (Value of N ):: ";
    cin>>n;
    cout<<"\nEnter elements to the array :: \n";

    for(i=0;i<n;++i)
    {
        cout<<"\nEnter "<<i+1<<" element :: ";
        cin>>a[i];
        sum += a[i];
    }

    average = sum / n;
    cout << "\nAverage of "<<n<<" Numbers is = " << average<<"\n";

    return 0;
}