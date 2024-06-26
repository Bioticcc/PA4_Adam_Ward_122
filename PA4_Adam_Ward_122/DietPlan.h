#ifndef DIETPLAN_H
#define DIETPLAN_H

#include "Header.h"



//defining classes!
class DietPlan {
	//defining my classes variables
	int goalCal;
	string planName;
	string planDate;

public:
	//default constructor
	DietPlan() : goalCal(0), planName("empty"), planDate("empty") {}

	//friend function for overload operator >>
	friend std::istream& operator>>(std::istream& inFile, DietPlan& plan);
	
	friend std::ostream& operator<<(std::ostream& out, DietPlan& plan);

	//friend std::ostream& operator<<(std::ostream& outFile, DietPlan& plan);

	/*friend function for overload operator << ? i think ? ? turns out its not needed ? ? idk im sure itll make sense later <3
	friend std::ostream& operator<<(std::ostream& outFile, DietPlan& plan);
	*/

	//the constructor. It should set up the initial values of the class.
	DietPlan(int x, const string& y, const string& z) {
		goalCal = x;
		planName = y;
		planDate = z;
	}

	//the copy constructor. copies? i think? its weird
	DietPlan(const DietPlan& t) {
		goalCal = t.goalCal;
		planName = t.planName;
		planDate = t.planDate;
	}

	//the deconstructor
	~DietPlan() {

	}

	//member functions to edit values within function
	int editGoal() {
		int num;
		cout << "Enter new calorie goal: ";
		cin >> num;
		goalCal = num;
		cout << "\n--new-plan-->: \nname: " << planName << "\ncalorie goal: " << goalCal << "\ndate: " << planDate << "\n";
		return goalCal;
	}

	string editName() {
		string str;
		cout << "Enter new plan name: ";
		cin >> str;
		planName = str;
		cout << "\n--new-plan-->: \nname: " << planName << "\ncalorie goal: " << goalCal << "\ndate: " << planDate << "\n";
		return planName;
	}

	string editDate() {
		string str;
		cout << "Enter new plan date: ";
		cin >> str;
		planDate = str;
		cout << "\n--new-plan-->: \nname: " << planName << "\ncalorie goal: " << goalCal << "\ndate: " << planDate << "\n";
		return planDate;
	}

	//getter functions! yahooie
	//so these are bassically what let me print, and view the variables within my class
	int getGoalCal() const {
		return goalCal;
	}

	const string getPlanName() const {
		return planName;
	}

	const string getPlanDate() const {
		return planDate;
	}

	//setter functions! hooieya!
	//these, as the name suggests, let me SET the variables to things!
	void setGoalCal(int num) {
		goalCal = num;
	}

	void setPlanName(const string str) {
		planName = str;
	}

	void setPlanDate(const string str) {
		planDate = str;
	}
};








int displayPlanD(DietPlan plan);
int readFileD(std::fstream& fileDest, string fileName, DietPlan arr[7]);
int writeFileD(std::fstream& fileDest, string fileName, DietPlan arr[7]);



#endif