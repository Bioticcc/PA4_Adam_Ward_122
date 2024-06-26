#include "Header.h"
#include "DietPlan.h"
#include "ExersisePlan.h"
#include "FitnessAppWrapper.h"

int main() {
	FitnessAppWrapper APP;
	APP.runApp();

	return 0;
}


/*
KNOWN PROBLEMS
1 - aborts if i choose load plan multiple times
	FIX: I could not tell ya man this shit is weird. From what I understand, it SHOULDNT be happening. but idk who knows >.>
3 - overall funkiness / UGLY AS BALLS I will be adding mucho colors soon! :)
*/

	