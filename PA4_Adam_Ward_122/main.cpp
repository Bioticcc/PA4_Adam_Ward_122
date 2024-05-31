#include "Header.h"
#include "DietPlan.h"
#include "ExersisePlan.h"



int main() {
	//declaring file names
	std::fstream Diet;
	std::fstream Excersise;

	std::fstream DietO;
	std::fstream ExcersiseO;

	//declarin me arrays
	DietPlan arrD[7];
	ExcersisePlan arrE[7];


	readFileD(Diet, "DietPlan.txt", arrD);
	writeFileD(DietO, "DietPlanOut.txt", arrD);
	
	readFileE(Excersise, "ExcersisePlan.txt", arrE);
	writeFileE(ExcersiseO, "ExcersisePlanOut.txt", arrE);


	return 0;
}

	