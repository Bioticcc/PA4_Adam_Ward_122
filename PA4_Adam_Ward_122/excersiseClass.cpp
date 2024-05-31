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

//non-member function to READ plans
int readFileE(std::fstream& fileDest, string fileName, ExcersisePlan arr[7]) {

	//opening files!
	fileDest.open(fileName, std::ios::in);
	if (fileDest.is_open()) {
		cout << "File " << fileName << " opened succesfully!\n";
	}
	//reading from files!
	for (int i = 0; i < 7; i++) {
		fileDest >> arr[i];
		cout << "index[" << i << "]: " << arr[i].getPlanName() << " | " << arr[i].getGoalSteps() << " | " << arr[i].getPlanDate() << "|\n";

	}
	//I hope to GOD this works lmao



	return 1;
}