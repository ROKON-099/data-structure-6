#include<iostream>
using namespace std;
int main()
{
    int x=5;
    int*ptr=&x;

    cout << "Value of variable:" <<*ptr <<endl;
    cout << "Address of variable:" <<ptr<<endl;
    return 0;

}
