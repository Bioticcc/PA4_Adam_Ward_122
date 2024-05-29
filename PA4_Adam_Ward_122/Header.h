/*
Author: Adam Ward
Date: 5/27/2024
Description: PA4, a athletic thing.
*/


#pragma once

#ifndef HEADER_H
#define HEADER_H

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>   
#include <string>      
#include <vector>    
#include <map>     
#include <algorithm>   
#include <stdexcept>  

using std::cout;
using std::cin; 
using std::string;


//defining classes!
class DietPlan {
	//defining my classes variables
	int goalCal;
	string planName;
	string planDate;

public:
	

	//the constructor. It should set up the initial values of the class.
	DietPlan(int x, const string &y, const string &z) {
		goalCal = x;
		planName = y;
		planDate = z;
	}

	//the copy constructor. copies? i think? its weird
	DietPlan(const DietPlan& t) {
		goalCal = t.goalCal;
		planName = t.planName;
		planDate = t.planDate;
	}

	//the deconstructor
	~DietPlan() {

	}

	//getter functions! yahooie
	//so these are bassically what let me print, and view the variables within my class
	int getGoalCal() const {
		return goalCal;
	}

	const string getPlanName() const {
		return planName;
	}

	const string getPlanDate() const {
		return planDate;
	}

	//setter functions! hooieya!
	//these, as the name suggests, let me SET the variables to things!
	void setGoalCal(int num) {
		goalCal = num;
	}

	void setPlanName(const string str) {
		planName = str;
	}

	void setPlanDate(const string str) {
		planDate = str;
	}
};

class ExcersisePlan {
public:
	int goalSteps;
	string planName;
	string planDate;

	ExcersisePlan(int x, string y, string z) {
		goalSteps = x;
		planName = y;
		planDate = z;
	}

};




//GOES AT THE END DONT FUCKING MOVE ME!
#endif 
