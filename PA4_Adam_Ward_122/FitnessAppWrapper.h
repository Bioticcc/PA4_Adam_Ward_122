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

	void readFileD_Daily(std::fstream&inFile, DietPlan& plan);
	void readFileE_Daily(std::fstream&inFile, ExcersisePlan& plan);

	void readFileD_Weekly(std::fstream& inFile, DietPlan arr[7]);
	void readFileE_Weekly(std::fstream& inFile, ExcersisePlan arr[7]);


public:
	FitnessAppWrapper() = default;

	//should open the main files, and call the read from x file to x array for both plans by default
	void runApp();
};








#endif