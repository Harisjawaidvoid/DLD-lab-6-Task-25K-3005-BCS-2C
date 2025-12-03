#include<iostream>
using namespace std;

class Patient{
	private:
		int age;
		string disease;
	public:	
		void setage(int a){
			if(a > 0) {    
            age = a;
            } else {
            cout << "Invalid age!" << endl;
            }
		}
		void setdisease(string b){
			disease=b;
		}
		int getage(){
			return age;
		}
		string getdisease(){
			return disease;
		}
};

int main(){
	
	Patient z;
	z.setage(20);
	z.setdisease("Asthma");
	cout<<"AGE: "<<z.getage()<<endl;
	cout<<"Disease: "<<z.getdisease()<<endl;
}
