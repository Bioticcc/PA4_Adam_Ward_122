#include "Header.h"

//non-member function to DISPLAY plans
int displayPlanD(DietPlan plan) {
	cout << "|--DIET-PLAN-->\nName: " << plan.getPlanName() << "\nDate: " << plan.getPlanDate() << "\nCalorie Goal: " << plan.getGoalCal() << "\n";	
	return 1;
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




	return 1;
}