#include <iostream>

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

class ShiftSupervisor : public Employee{
	private :
		int annSalary;
		int annProduction;
	public :
		ShiftSupervisor(string name, int number, int date, int annSalary, double annProduction) : Employee(name, number, date){
			this->annSalary = annSalary;
			this->annProduction = annProduction;
		}
		void setAnnSalary(int annSalary){
			this -> annSalary = annSalary;
		}
		void setAnnProduction(int annProduction){
			this -> annProduction = annProduction;
		}
		int getAnnSalary(){
			return annSalary;
		}
		int getAnnProduction(){
			return annProduction;
		}
};

int main(){
	ShiftSupervisor emp = ShiftSupervisor("Kevin" , 18, 21, 200, 300);
	cout << "Name : " << emp.getName() << endl << "Number : " << emp.getNumber() << endl << "Date : " << emp.getDate() << endl << "Salary : " << emp.getAnnSalary() << endl << "Annual Production : " << emp.getAnnProduction();
	return 0;
}

