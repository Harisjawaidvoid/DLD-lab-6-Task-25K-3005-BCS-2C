#include<iostream>
using namespace std;

class Student{
	public:
		string Name;
		int RollNumber;
};

int main(){
	Student A;
	Student B;
	A.Name="Haris Jawaid";
	A.RollNumber=3005;
	B.Name="Zaid Feroz";
	B.RollNumber=3077;
	
	cout<<"Name: "<<A.Name<<endl;
	cout<<"Roll Number : "<<A.RollNumber<<endl;
	cout<<"Name: "<<B.Name<<endl;
	cout<<"Roll Number: "<<B.RollNumber<<endl;
}
