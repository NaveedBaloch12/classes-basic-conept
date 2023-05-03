#include<iostream>
using namespace std;

class calculator{
	public:
	double num1;
	double num2;
	
	double product(){
		return num1 * num2;
	}
	float divide(){
		return num1 / num2;
	}
	double add(){
		return num1 + num2;
	}
	
	double subtract(){
		return num1 - num2;
	}
};

int main()
{
	calculator cal1;
	cout<<"Enter Two Numbers: "<<endl;
	cin>> cal1.num1 >> cal1.num2;
	char opt;
	cout<<"Select operator: ( +, -, /, *) ";
	cin>>opt;
	cout<<endl;
	switch(opt){
		case '+':
			cout<< cal1.num1<<" + "<< cal1.num2<<" = "<<cal1.add()<<endl;
			break;
		case '-':
			cout<< cal1.num1<<" - "<< cal1.num2<<" = "<<cal1.subtract()<<endl;
			break;
		case '/':
			cout<< cal1.num1<<" / "<< cal1.num2<<" = "<<cal1.divide()<<endl;
			break;
		case '*':
			cout<< cal1.num1<<" * "<< cal1.num2<<" = "<<cal1.product()<<endl;
			break;
	}
	return 0;
}

