#include<iostream>
using namespace std;

class room{
	public:
	double height;
	double lenght;
	double breath;
	
	double C_area(){
		return lenght * height;
	}
	
	double C_volume(){
		return lenght * height * breath;
	}
};

int main()
{
	room r1;
	cout<<"Enter height, lenght and bradth of object: "<<endl;
	cin>> r1.height >> r1.lenght >> r1.breath;
	
	cout<<"Volume of Object is: "<< r1.C_volume()<<endl;
	cout<<"Area of Object is: "<< r1.C_area()<<endl;


	return 0;
}

