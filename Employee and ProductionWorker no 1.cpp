#include <iostream>
#include <string>

using namespace std;

class Employee {
	private : 
		string name;
		int number;
		int date;
	public :
		Employee (string name, int number, int date){
			this->name = name;
			this->number = number;
			this->date = date;
		}
		void setName(string name){
			this->name = name;
		}
		void setNumber(int number){
			this->number = number;
		}
		void setDate(int date){
			this->date = date;
		}
		string getName(){
			return name;
		}
		int getNumber(){
			return number;
		}
		int getDate(){
			return date;
		}
};

class ProductionWorker : public Employee {
	private :
		int shift;
		double payRate;
	public :
		ProductionWorker(string name, int number, int date, int shift, double payRate) : Employee(name, number, date){
			this->shift = shift;
			this->payRate = payRate;
		}
		void setShift(int shift){
			this -> shift = shift;
		}
		void setPayRate(int payRate){
			this -> payRate = payRate;
		}
		int getShift(){
			return shift;
		}
		int getPayRate(){
			return payRate;
		}
};

int main(){
	string name;
	int number;
	int date;
	int shiftOption;
	double payRate;
	
	cout << "Name : ";
	cin >> name;
	cout << "Number : ";
	cin >> number;
	cout << "Date : ";
	cin >> date;
	cout << "Hourly Payrate : ";
	cin >> payRate;
	cout << "1. Day \n2. Night\nEnter shift : " ;
	cin >> shiftOption;
	
	ProductionWorker emp (name, number, date, shiftOption, payRate); 
	
	cout << endl << emp.getName();
	cout << endl << emp.getNumber();
	cout << endl << emp.getDate();
	
	if (emp.getShift() == 1){
		cout << endl << "Day shifts";
	}
	else if (emp.getShift() == 2){
		cout << endl << "Night shifts";
	}
	else {
		cout << endl << "You enter the wrong option.";
	}
	cout << endl << emp.getPayRate();
	
	return 0;
	

}
