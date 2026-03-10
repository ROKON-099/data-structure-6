#include<iostream>
#include<fstream>
using namespace std;
int main (){
string name;

cout << "Enter the student name is :" <<name;
cin>>name;

ofstream file ("student.txt");

file<< "Student name:"<<name<<endl;
file.close();
return 0;
}






