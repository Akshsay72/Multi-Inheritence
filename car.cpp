#include<string>
using namespace std;

class FWD{
	public:
		FWD(){
			
		}
		void display(){
			cout << "This is a 4 wheeler vehicle" << endl;
		}
};

class Brand : public FWD{
	public:
		string name;
		Brand(){}
		Brand(string n){
			name = n;
		}
		void display1(){
			display();
			cout << "This is " << name << " ";
		}
};

class Car : public Brand{
	public:
		string n;
		Car(){}
		Car(string a){
			n = a;
		}
		void display2(){
			display();display1();
			cout << n << endl;
		}
};

int main(){
	Car a("RX-7");
	a.name = "Mazda";
	a.display2();
	
	return 0;
}
