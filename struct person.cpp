#include<iostream>
using namespace std;
struct person
{
	char name[43];
	
	int age;
	
	float salary;
	
};

int main()

{
	person p1;
	
	cout<<"enter the full name"<<endl;
	
	cin>>p1.name;
	
	cout<<" eneter person age "<<endl;
	
	cin>>p1.age;
	
	cout<<" enter person salary "<<endl;
	
	cin>>p1.salary;
	
	cout<<"the name of person is="<<p1.name<<endl;
	
	cout<<"the age of person="<<p1.age<<endl;
	
	cout<<"the salary of person is"<<p1.salary<<endl;
	
	return 0;
}
