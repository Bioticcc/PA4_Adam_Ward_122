#include "Header.h"


int displayPlanE(ExcersisePlan plan) {
	cout << "|--EXCERSISE-PLAN-->\nName: " << plan.getPlanName() << "\nDate: " << plan.getPlanDate() << "\nCalorie Goal: " << plan.getGoalSteps() << "\n";
	return 1;
}


//non-member function to READ plans
int readFileE(std::fstream& fileDest, string fileName, ExcersisePlan arr[7]) {

	//opening files!
	fileDest.open(fileName, std::ios::in);
	if (fileDest.is_open()) {
		cout << "File " << fileName << " opened succesfully!\n";
	}
	//reading from files!




	return 1;
}