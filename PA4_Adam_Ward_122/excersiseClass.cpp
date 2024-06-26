#include "Header.h"
#include "ExersisePlan.h"

int displayPlanE(ExcersisePlan plan) {
	cout << "|--EXCERSISE-PLAN-->\nName: " << plan.getPlanName() << "\nDate: " << plan.getPlanDate() << "\nCalorie Goal: " << plan.getGoalSteps() << "\n";
	return 1;
}

using std::getline;
//overload funciton thing
std::istream& operator>>(std::istream& inFile, ExcersisePlan& plan) {
	string goalStepStr;
	string blank;
	//reading the 3 lines of info
	getline(inFile, plan.planName);
	getline(inFile, goalStepStr);
	getline(inFile, plan.planDate);
	//setting string steps to int steps
	plan.goalSteps = stoi(goalStepStr);

	//blank line yahooie
	getline(inFile, blank);
	return inFile;
}


//overload operator for displaying function 

std::ostream& operator<<(std::ostream& out, ExcersisePlan& plan) {
	out << "Plan name: " << plan.getPlanName() << " | Plan date: " << plan.getPlanDate() << " | Goal Calories: " << plan.getGoalSteps() << " |\n";
	return out;
}

//non-member function to WRITE plans (w bands? rhyming?) yahooie?
int writeFileE(std::fstream& fileDest, string fileName, ExcersisePlan arr[7]){
//seting rq
	//made this a bit more
	fileDest.open(fileName, std::ios::out);
	//testing
	for (int i = 0; i < 7; i++) {
		fileDest << arr[i].getPlanName() << "\n";
		fileDest << arr[i].getGoalSteps() << "\n";
		fileDest << arr[i].getPlanDate() << "\n";
		fileDest << "\n";
	}
	return 1;
}
