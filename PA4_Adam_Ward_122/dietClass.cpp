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

/*
//overlord function <<
std::ostream& operator<<(std::ostream& outFile, DietPlan& plan) {
	return outFile;
}*/


int writeFileD(std::fstream& fileDest, string fileName, DietPlan arr[7]) {
	//seting rq
	fileDest.open(fileName, std::ios::out);
	//testing
	for (int i = 0; i < 7; i++) {
		fileDest << arr[i].getPlanName() << "\n";
		fileDest << arr[i].getGoalCal() << "\n";
		fileDest << arr[i].getPlanDate() << "\n";
		fileDest << "\n";
	}
	return 1;
}
