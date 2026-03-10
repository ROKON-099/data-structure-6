#include<iostream>
using namespace std;
int main(){
int n, fact=1;

cout << "Enter a number:";
cin >>n;
cout << "factorial of " <<n << " is = ";
for (int i=n; i>=1; i--)

{
    cout <<i;

    if (i>1)
    {
        cout << "*";
    }
    fact*=i;
}
cout << "=" <<fact <<endl;






}
