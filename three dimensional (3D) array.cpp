//C++ Program for Three Dimensional (3D) Array
#include<iostream>
using namespace std;

int main()
{
    int arr[3][4][2] = {{{2, 4},{7, 8},{3, 4},{5, 6}},
                        {{7, 6},{3, 4},{5, 3},{2, 3}},
                        {{8, 9},{7, 2},{3, 4},{5, 1}}};
    cout<<"\narr[0][0][0] = "<<arr[0][0][0]<<"\n";
    cout<<"\narr[0][2][1] = "<<arr[0][2][1]<<"\n";
    cout<<"\narr[2][3][1] = "<<arr[2][3][1]<<"\n";
    return 0;
};