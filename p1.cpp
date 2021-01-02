#include<bits/stdc++.h>
using namespace std;

class Student{
public:
	//data fields or properties
	int rno;
	string name;
};

int main()
{
	Student s;
	s.rno = 12;
	s.name = "Harry";
	cout<<s.rno<<endl; 
	cout<<s.name<<endl;
	return 0;
}