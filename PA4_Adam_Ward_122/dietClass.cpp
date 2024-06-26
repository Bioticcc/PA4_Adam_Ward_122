#include "Header.h"
#include "DietPlan.h"

//non-member function to DISPLAY plans
int displayPlanD(DietPlan plan) {
	cout << "|--DIET-PLAN-->\nName: " << plan.getPlanName() << "\nDate: " << plan.getPlanDate() << "\nCalorie Goal: " << plan.getGoalCal() << "\n";	
	return 1;
}

using std::getline;
//overload funciton thing >>
std::istream& operator>>(std::istream& inFile, DietPlan& plan) {
	string goalCalStr;
	string blank;
	//reading the 3 lines of info
	getline(inFile, plan.planName);
	getline(inFile, goalCalStr);
	getline(inFile, plan.planDate);
	//setting string cals to int cals
	plan.goalCal = stoi(goalCalStr);

	//blank line yahooie
	getline(inFile, blank);
	return inFile;
}


std::ostream& operator<<(std::ostream& out, DietPlan& plan) {
	out << "Plan name: " << plan.getPlanName() << " | Plan date: " << plan.getPlanDate() << " | Goal Calories: " << plan.getGoalCal() << " |\n";
	return out;
}


//now overload function for writing to file

//overlord function <<
/*
std::ostream& operator<<(std::ostream& outFile, DietPlan& plan) {
	outFile << plan.getPlanName() << "\n";
	outFile << plan.getPlanDate() << "\n";
	outFile << plan.getGoalCal() << "\n";
	outFile << "\n";
	return outFile;
}*/


