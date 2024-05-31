#include "Header.h"
#include "DietPlan.h"

//non-member function to DISPLAY plans
int displayPlanD(DietPlan plan) {
	cout << "|--DIET-PLAN-->\nName: " << plan.getPlanName() << "\nDate: " << plan.getPlanDate() << "\nCalorie Goal: " << plan.getGoalCal() << "\n";	
	return 1;
}

using std::getline;
//overload funciton thing
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





//reading from diet.txt

//non-member function to READ plans
int readFileD(std::fstream& fileDest, string fileName, DietPlan arr[7]) {

	//opening files!
	fileDest.open(fileName, std::ios::in);
	if (fileDest.is_open()) {
		cout << "File " << fileName << " opened succesfully!\n";
	}
	//reading from files!
	for (int i = 0; i < 7; i++) {
		fileDest >> arr[i];
		cout << "index[" << i << "]: " << arr[i].getPlanName() << " | " << arr[i].getGoalCal() << " | " << arr[i].getPlanDate() << "|\n";
	}
	
	//printings arrays to make sure!
	


	return 1;
}