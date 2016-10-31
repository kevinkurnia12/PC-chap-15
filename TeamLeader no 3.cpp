#include <iostream>

using namespace std;

class ProductionWorker {
	private :
		int shift;
		double payRate;
	public :
		ProductionWorker(int shift, double payRate){
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

class TeamLeader : public ProductionWorker {
	private :
		int bonusAmount;
		int reqTrainHours;
		int trainHours;
	public :
		TeamLeader (int shift, double payRate, int bonusAmount, int reqTrainHours, int trainHours) : ProductionWorker (shift , payRate){
			this->bonusAmount = bonusAmount;
			this->reqTrainHours = reqTrainHours;
			this->trainHours = trainHours;
		}
		void setBonus (int bonusAmount){
			this->bonusAmount = bonusAmount;
		}
		void setReqTrain (int reqTrainHours){
			this->reqTrainHours = reqTrainHours;
		}
		void setTrainHours (int trainHours){
			this->trainHours = trainHours;
		}
		int getBonus (){
			return bonusAmount;
		}
		int getReqTrain (){
			return reqTrainHours;
		}
		int getTrainHours(){
			return trainHours = trainHours;
		}
};

int main(){
	TeamLeader team = TeamLeader(2 , 200, 300, 10, 5);
	cout << "Shift : " << team.getShift() << endl << "Payrate : " << team.getPayRate() << endl << "Bonus Amount : " << team.getBonus() << endl << "Required train hours : " << team.getReqTrain() << endl << "Train hours : " << team.getTrainHours();
	
	return 0;
}
