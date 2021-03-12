#include<iostream>
using namespace std;
int main(){
	int age;
	cout<<"Enter the age of the user: ";
	cin>>age;
	
	if(age>=18){
		cout<<"\n You are eligible.";
	}
	else
	{
	cout<<"\n You are not eligible.";
	cout<<"Wait for "<<18-age<<" year(s)";
	}
	return 0;
}
