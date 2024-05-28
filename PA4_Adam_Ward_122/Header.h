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
public:
	int goalCal;
	string planName;
	string planDate;

	DietPlan(int x, string y, string z) {
		goalCal = x;
		planName = y;
		planDate = z;
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
