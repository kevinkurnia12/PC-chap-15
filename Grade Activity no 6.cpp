#include<iostream>
#include<string>
using namespace std;

class GradedActivity{
	private:
		double score; 
	public:
		GradedActivity(){
			score = 0; 
		}
		GradedActivity(double score){ 
			this->score = score;
		}
		void setScore(double score){
		 	this->score = score; 
		}

 		double getScore() { 
			return score; 
		}
		char getGrade(){
			char grade; 
			if (score > 89){
			grade = 'A';
			}
			else if (score > 79){
			grade = 'B';
			}
			else if (score > 69){
			grade = 'C';
			}
			else if (score > 59){
			grade = 'D';
			}
			else {
			grade = 'F';
			}
		return grade; }
};

class Essay : public GradedActivity {
	private : 
		int grammar;
		int spelling ;
		int lenght ;
		int content ;
	public :
		void setEssay(int grammar, int spelling, int length, int content){
			this->grammar = grammar;
			this->spelling = spelling;
			this->lenght = length;
			this->content = content;
		}
		int getGrammar(){
			return grammar;
		}
		int getSpelling(){
			return spelling;
		}
		int getLength(){
			return lenght ;
		}
		int getContent(){
			return content;
		}
};

int main()
{
	int grammar, spelling, length, content;
	double score;
	Essay essay;
	
	cout << "Enter grammar score (0-30) : ";
	cin >> grammar ;
	while(grammar > 30 || grammar < 0){ 
		cout << "Enter grammar score (0-30) : ";
		cin >> grammar;
		cout << endl;
	}
	
	cout << "Enter spelling score (0-20) : "; 
	cin >> spelling;
	while(spelling > 20 || spelling < 0){
		cout << "Enter spelling score (0-20) : ";
		cin >> spelling;
		cout << endl;
	}
	
	cout << "Enter length score (0-20) : ";
	cin >> length;
	
	while(length > 20 || length < 0){
		cout << "Enter lenght score (0-20) : ";
		cin >> length;
		cout << endl;
	}
	
	cout << "Enter content score (0-30) : ";
	cin >> content;
	while(content > 30 || content < 0){
		cout << "Enter content score (0-30) : ";
		cin >> content;
		cout << endl;
	}
	essay.setEssay(grammar, spelling, length, content);
	
	score = essay.getGrammar() + essay.getContent() + essay.getLength() + essay.getSpelling();
	
	essay.setScore(score);
	cout << endl << "Total : " << score << endl;
	cout << "Grade : " << essay.getGrade() << endl;
	
	return 0;
}

