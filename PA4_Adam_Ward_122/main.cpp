#include "Header.h"
int main() {
	//declaring file names
	std::fstream Diet;
	std::fstream Excersise;

	//opening files
	readFile(Diet, "DietPlan.txt");
	readFile(Excersise, "ExcersisePlan.txt");

	//initializing dietplan as a plan! yahoo
	DietPlan planD(500, "planA", "2/12/2005");
	ExcersisePlan planE(600, "planeB", "2/15/2023");
	
	//dislaying files
	displayPlanD(planD);
	displayPlanE(planE);


	return 0;
}

	