#include "Header.h"
#include "DietPlan.h"
#include "ExersisePlan.h"



int main() {
	//declaring file names
	std::fstream Diet;
	std::fstream Excersise;

	//declarin me arrays
	DietPlan arrD[7];
	ExcersisePlan arrE[7];

	//opening files
	readFileD(Diet, "DietPlan.txt", arrD);
	readFileE(Excersise, "ExcersisePlan.txt", arrE);



	return 0;
}

	