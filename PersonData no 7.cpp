#include <iostream>
#include <string>

using namespace std;

class PersonData {
	private :
		string lastName;
		string firstName;
		string address;
		string city;
		string state;
		int zip;
		int phone;
	public :
		PersonData(string lastName, string firstName, string address, string city, string state, int zip, int phone){
			this->lastName = lastName;
			this->firstName = firstName;
			this->address = address;
			this->city = city;
			this->state = state;
			this->zip = zip;
			this->phone = phone;
		}
		void setLastName(string lastName){
			this->lastName = lastName;
		}
		void setFirstName(string firstName){
			this->firstName = firstName;
		}
		void setAddress(string address){
			this->address = address;
		}
		void setCity(string city){
			this->city = city;
		}
		void setState(string state){
			this->state = state;
		}
		void setZip(int zip){
			this->zip = zip;
		}
		void setPhone(int phone){
			this->phone = phone;
		}
		string getLastName(){
			return lastName;
		}
		string getFirstName(){
			return firstName;
		}
		string getAddress(){
			return address;
		}
		string getCity(){
			return city;
		}
		string getState(){
			return state;
		}
		int getZip(){
			return zip;
		}
		int getPhone(){
			return phone;
		}
};

class CustomerData : public PersonData{
	int customerNumber;
	bool mailingList;
		
	public:
		CustomerData(string lastName, string firstName, string address, string city, string state, int zip, int phone, int customerNumber, bool mailingList) : PersonData(lastName, firstName, address, city, state, zip, phone){
			this->customerNumber = customerNumber;
			this->mailingList = mailingList; 
		}
		void setCustomerNumber(int customerNumber){
			this->customerNumber = customerNumber;
		}
		void setMailingList(bool mailinglist){
			this->mailingList = mailinglist;
		}
		int getCustomerNumber(){
			return customerNumber;
		}
		bool getMailingList(){
			return mailingList;
		}
};

int main(){
	string lastName;
	string firstName;
	string address;
	string city;
	string state;
	int zip;
	string phone;
	int custNumber;
	char mailing;
	CustomerData cust;
	
	cout << "Last name : ";
	getline(cin,lastName);
	cout << "First name : ";
	getline(cin,firstName);
	cout << "Address : ";
	getline(cin,address);
	cout << "City : ";
	getline(cin,city);
	cout << "State : ";
	getline(cin,state);
	cout << "Zip : ";
	cin >> zip;
	cout << "Phone number : ";
	cin >> phone;
	cout << "Customer number : ";
	cin >> custNumber;
	cout << "Do you need mailing list (Y/N) ? ";
	cin >> mailing;
	
	if(mailing == 'Y' || mailing == 'y'){
		cust.setMailingList (true);
	}
	else{
		cust.setMailingList (false);
	}
	
	cust.CustomerData (lastName, firstName, address, city, state, zip, phone);
	cust.setNumber(custNumber);
	
	cout << cust.getLastName() << endl;
	cout << cust.getFirstName() << endl;	
	cout << cust.getAddress() << endl;
	cout << cust.getCity() << endl;
	cout << cust.getState() << endl;
	cout << cust.getZip() << endl;
	cout << cust.getCustomerNumber();
	cout << "Mailing list? ";
	
	if (cust.getMailingList()){
	cout << "Yes";
	else{
	cout << "No";
	}	
	return 0;
}



