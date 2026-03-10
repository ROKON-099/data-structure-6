#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of array:";
    cin>>n;
    cout << "Enter " <<n << " number of array:";
    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    int l=arr[0], sl=-999999;
    for (int i=0; i<n; i++)
    {
        if (arr[i]> l)
        {
            sl=l;
            l=arr[i];
        }
        else if (arr[i]> sl && arr[i]!=l)
        {
            sl=arr[i];
        }
    }
    cout << "Sl :" <<sl <<endl;
    return 0;
}

