#include<iostream>
#include<string>

using namespace std;

class Employee{
	private:
		float sallery;
		float ballance;
	public:
		string name;
		int age;
		int service;
		
	void p_data(float sallery1, float ballance1);
	
	double getdata(){
		cout<<"Name: "<<name<<"."<<endl;
		cout<<"Service: "<<service<<" Years."<<endl;
		cout<<"Age: "<<age<<" Years."<<endl;
		cout<<"Sallery: "<<sallery<<"."<<endl;
		cout<<"Current Ballance: "<<ballance<<"."<<endl;
	}	
};

void Employee :: p_data(float sallery1, float ballance1){
	sallery = sallery1;
	ballance = ballance1;
}
int main()
{
	int set_pass = 786786, pass;
	cout<<"Enter PIN: ";
	cin >>pass;
	Employee E1, E2, E3;
	if(pass == set_pass){
//	Persosnal Data fuction...
	E1.p_data(60000, 80000);
	E2.p_data(64000, 67000);
	E3.p_data(62000, 23000);	
	}
	else{
	E1.p_data(00000, 00000);
	E2.p_data(00000, 00000);
	E3.p_data(00000, 00000);
	}
	
	E1.name = "Naveed";
	E1.age = 19;
	E1.service = 4;
	
	E2.name = "Danish";
	E2.age = 23;
	E2.service = 6;
	
	E3.name = "Wasiq";
	E3.age = 18;
	E3.service = 2;
	
	E1.getdata();
	cout<<endl;
	E2.getdata();
	cout<<endl;
	E3.getdata();
	
	return 0;
}

