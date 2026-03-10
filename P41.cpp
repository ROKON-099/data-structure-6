#include<iostream>
#include<fstream>
using namespace std;
int main(){
string name;
int id;
cout << "Enter the name :" <<name;
 cin>>name;

ofstream file ("student.txt");
file<< "student name is:" <<name <<endl;
file.close();
return 0;
}






