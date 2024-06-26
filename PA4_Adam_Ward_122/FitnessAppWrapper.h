#ifndef FITNESSAPPWRAPPER_H
#define FITNESSAPPWRAPPER_H

#include "Header.h"
#include "DietPlan.h"
#include "ExersisePlan.h"


class FitnessAppWrapper {
private:
	//defining arrays for week long daily plans
	DietPlan arrD[7] = { };
	ExcersisePlan arrE[7] = { }; 
	//default constructor

	//reading files
	//setting the diet members to return plan, to see if that works better (trust itll be sick hopefully)
	void readFileD_Daily(std::fstream&inFile, DietPlan& plan);
	void readFileE_Daily(std::fstream&inFile, ExcersisePlan& plan);

	void readFileD_Weekly(std::fstream& inFile, DietPlan arr[7]);
	void readFileE_Weekly(std::fstream& inFile, ExcersisePlan arr[7]);


	//displaying files

	int displayFileD_Daily(DietPlan& plan);
	int displayFileE_Daily(ExcersisePlan& plan);

	int displayFileD_Weekly(DietPlan arr[7]);
	int displayFileE_Weekly(ExcersisePlan arr[7]);

	//writing files

	int writeFileD_Daily(std::ostream& fileDest, DietPlan& plan);
	int writeFileE_Daily(std::ostream& fileDest, ExcersisePlan& plan);
	int writeFileE_Weekly(std::ostream& fileDest, ExcersisePlan arr[7]);
	int writeFileD_Weekly(std::ostream& fileDest, DietPlan arr[7]);

	//editing daily plans

	int editFileD_Daily(DietPlan plan[7]);
	int editFileE_Daily(ExcersisePlan plan[7]);



public:
	FitnessAppWrapper() = default;

	//should open the main files, and call the read from x file to x array for both plans by default
	void runApp();
	
	void displayMenu();
};








#endif