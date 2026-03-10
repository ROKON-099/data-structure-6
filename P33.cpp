#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of array:";
    cin>>n;
    cout << "Enter " <<n << " number of array:";
    char arr[n];
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
 int vowel=0, consonant=0;
 for (int i=0; i<n; i++) {
    char ch =arr[i];
 if (ch>= 'A' && ch<= 'Z')
    ch=ch+32;
 if (ch>= 'a' && ch<= 'z')
 {
     if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' )
        vowel++;
     else consonant++;
 }
}
cout << "Vowel:" << vowel <<endl;
cout << "consonant:" <<consonant <<endl;
return 0;





}

