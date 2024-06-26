#ifndef EXERCISEPLAN_H
#define EXERCISEPLAN_H

#include "Header.h"



class ExcersisePlan {
	int goalSteps;
	string planName;
	string planDate;

public:

	ExcersisePlan() : goalSteps(0), planName("empty"), planDate("empty") {}

	friend std::istream& operator>>(std::istream& inFile, ExcersisePlan& plan);
	friend std::ostream& operator<<(std::ostream& out, ExcersisePlan& plan);

	//constructor
	ExcersisePlan(int x, const string& y, const string& z) {
		goalSteps = x;
		planName = y;
		planDate = z;
	}
	//copy constructor
	ExcersisePlan(const ExcersisePlan& t) {
		goalSteps = t.goalSteps;
		planName = t.planName;
		planDate = t.planDate;
	}
	//deconstructor
	~ExcersisePlan() {

	}


	//member functions to edit values within function
	int editGoal() {
		int num;
		cout << "Enter new calorie goal: ";
		cin >> num;
		goalSteps = num;
		cout << "\n--new-plan-->: \nname: " << planName << "\ncalorie goal: " << goalSteps << "\ndate: " << planDate << "\n";
		return goalSteps;
	}

	string editName() {
		string str;
		cout << "Enter new plan name: ";
		cin >> str;
		planName = str;
		cout << "\n--new-plan-->: \nname: " << planName << "\ncalorie goal: " << goalSteps << "\ndate: " << planDate << "\n";
		return planName;
	}

	string editDate() {
		string str;
		cout << "Enter new plan date: ";
		cin >> str;
		planDate = str;
		cout << "\n--new-plan-->: \nname: " << planName << "\ncalorie goal: " << goalSteps << "\ndate: " << planDate << "\n";
		return planDate;
	}


	//getters
	const int getGoalSteps() const {
		return goalSteps;
	}
	const string getPlanName() const {
		return planName;
	}
	const string getPlanDate() const {
		return planDate;
	}

	//setters
	void setGoalSteps(const int num) {
		goalSteps = num;
	}
	void setPlanName(const string str) {
		planName = str;
	}
	void setPlanDate(const string str) {
		planDate = str;
	}


};

int displayPlanE(ExcersisePlan plan);
int readFileE(std::fstream& fileDest, string fileName, ExcersisePlan arr[7]);
int writeFileE(std::fstream& fileDest, string fileName, ExcersisePlan arr[7]);


#endif