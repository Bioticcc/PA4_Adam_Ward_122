#include "Header.h"
#include "FitnessAppWrapper.h"
//load dailys
void FitnessAppWrapper::readFileD_Daily(std::fstream& inFile, DietPlan& plan) {
	//fileDest >> arr[i];
	inFile >> plan;
}

void FitnessAppWrapper::readFileE_Daily(std::fstream& inFile, ExcersisePlan& plan) {
	inFile >> plan;
}



//load weeklys
void FitnessAppWrapper::readFileD_Weekly(std::fstream& inFile, DietPlan arr[7]) {
	DietPlan plan;
	for (int i = 0; i < 7; i++) {
		readFileD_Daily(inFile, plan);
		arr[i].setGoalCal(plan.getGoalCal());
		arr[i].setPlanDate(plan.getPlanDate());
		arr[i].setPlanName(plan.getPlanName());
	}
}

void FitnessAppWrapper::readFileE_Weekly(std::fstream & inFile, ExcersisePlan arr[7]) {
	ExcersisePlan plan;
	for (int i = 0; i < 7; i++) {
		readFileE_Daily(inFile, plan);
		arr[i].setGoalSteps(plan.getGoalSteps());
		arr[i].setPlanDate(plan.getPlanDate());
		arr[i].setPlanName(plan.getPlanName());
	}
}


void FitnessAppWrapper::runApp(void) {
	//still not sure what he wants from us here... opening the files maybe?
	//for now ill have it open zeh files n all
	//declaring file names / opening them im pretty sure idk C++ is wacky man
	//inFs
	std::fstream Diet;
	std::fstream Excersise;
	//outFs
	std::fstream DietO;
	std::fstream ExcersiseO;

	DietPlan planD;
	ExcersisePlan planE;

	//opening files
	Diet.open("DietPlan.txt", std::ios::in);
	if (Diet.is_open()) {
		cout << "File DietPlan.txt opened succesfully!\n";
	}
	else cout << "File DietPlan.txt failed to open\n";

	Excersise.open("ExcersisePlan.txt", std::ios::in);
	if (Excersise.is_open()) {
		cout << "File ExcersisePlan.txt opened succesfully!\n";
	}
	else cout << "File ExcersisePlan.txt failed to open\n";

	DietO.open("DietPlanOut.txt", std::ios::out);
	if (DietO.is_open()) {
		cout << "File DietPlanOut opened succesfully!\n";
	}
	else cout << "File DietPlanOut.txt failed to open\n";

	ExcersiseO.open("ExcersisePlanOut.txt", std::ios::out);
	if (ExcersiseO.is_open()) {
		cout << "File ExcersisePlanOut.txt opened succesfully!\n";
	}
	else cout << "File ExcersisePlanOut.txt failed to open\n";



	//just putting these here right now for testing purposes
	DietPlan arrD[7] = { };
	ExcersisePlan arrE[7] = { };

	readFileD_Weekly(Diet, arrD);
	readFileE_Weekly(Excersise, arrE);





};
