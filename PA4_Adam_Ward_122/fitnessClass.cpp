#include "Header.h"
#include "FitnessAppWrapper.h"
//load dailys
void FitnessAppWrapper::readFileD_Daily(std::fstream& inFile, DietPlan& plan) {
	//fileDest >> arr[i];
	//resetting plan to default values (notsure if this will fix zeh problem or not but ya never know teehee

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

void FitnessAppWrapper::readFileE_Weekly(std::fstream& inFile, ExcersisePlan arr[7]) {
	ExcersisePlan plan;
	for (int i = 0; i < 7; i++) {
		readFileE_Daily(inFile, plan);
		arr[i].setGoalSteps(plan.getGoalSteps());
		arr[i].setPlanDate(plan.getPlanDate());
		arr[i].setPlanName(plan.getPlanName());
	}
}


int FitnessAppWrapper::displayFileD_Daily(DietPlan& plan) {
	std::cout << plan << std::endl;
	return 1;
}
int FitnessAppWrapper::displayFileE_Daily(ExcersisePlan& plan) {
	std::cout << plan << std::endl;
	return 1;
}
int FitnessAppWrapper::displayFileD_Weekly(DietPlan arr[7]) {
	for (int i = 0; i < 7; i++) {
		std::cout << arr[i] << std::endl;
	}
	return 1;
}
int FitnessAppWrapper::displayFileE_Weekly(ExcersisePlan arr[7]) {
	for (int i = 0; i < 7; i++) {
		std::cout << arr[i] << std::endl;
	}
	return 1;
}

//writing files W bands

int FitnessAppWrapper::writeFileD_Daily(std::ostream& fileDest, DietPlan& plan) {
	fileDest << plan.getPlanName() << "\n";
	fileDest << plan.getGoalCal() << "\n";
	fileDest << plan.getPlanDate() << "\n";
	fileDest << "\n";
	return 1;
}
int FitnessAppWrapper::writeFileE_Daily(std::ostream& fileDest, ExcersisePlan& plan) {
	fileDest << plan.getPlanName() << "\n";
	fileDest << plan.getGoalSteps() << "\n";
	fileDest << plan.getPlanDate() << "\n";
	fileDest << "\n";
	return 1;
}

int FitnessAppWrapper::writeFileE_Weekly(std::ostream& fileDest, ExcersisePlan arr[7]) {
	for(int i = 0; i < 7; i++){
		writeFileE_Daily(fileDest, arr[i]);
	}
	return 1;
}

int FitnessAppWrapper::writeFileD_Weekly(std::ostream& fileDest, DietPlan arr[7]) {
	for (int i = 0; i < 7; i++) {
		writeFileD_Daily(fileDest, arr[i]);
	}
	return 1;
}

//method for editing diet plan and excersise plan (daily)
int FitnessAppWrapper::editFileD_Daily(DietPlan arr[7]) {

	//okay, so tbh the PA does not specify this very well, but what on earth does it want from me here? I see 2 options, and am not sure witch is wanted from me
	//one being 
	//nevermind this gon take too long to write out and i am NOT ballin enough to be willing to type out a paragraph of my woes and struggles with inprecise instructions T^T
	//imma just pray that im doing this as he wants it and ask later when the semester starts (6/3/2024) meow
	/*
	cout << "|--The Week Ahead-->\n";
	cout << "|[SUNDAY] - " << arr[0];
	cout << "|[MONDAY] - " << arr[1];
	cout << "|[TUESDAY] - " << arr[2];
	cout << "|[WEDENSDAY] - " << arr[3];
	cout << "|[THURSDAY] - " << arr[4];
	cout << "|[FRIDAY] - " << arr[5];
	cout << "|[SATURDAY] - " << arr[6];
	cout << "|[DAY]: ";
	string day;
	cin >> day;
	switch (day) {
		case
	}*/ 
	//okay just to be clear, i know i could do this way cleaner and more effecient if I labeled these 
	//based on their corresponding index, instead of the actual day, and then just iterate through arr[i] until i find the matching
	//arr index and edit that. HOWEVER, stylistically the days look prettier and since i dont know how to enumerate stuff yet, imma make this longer and ickier
	//then it needs to be in the name of stylistic prettiness tu users! thats a good quality of software developement ;3 me thinks

	//AAAAND NEVERMIND YOU CANT DO SWITCH CASES WITH STRINGS LMAO I DID NOT KNOW THAT :(
	//womp womp well guess itll look ugly with ints i spose... well ill preserve this relic of my hubris here for comedic effect and juxtaposition (idk what that means)

	cout << "|--The Week Ahead-->\n";
	cout << "|[0] - " << arr[0];
	cout << "|[1] - " << arr[1];
	cout << "|[2] - " << arr[2];
	cout << "|[3] - " << arr[3];
	cout << "|[4] - " << arr[4];
	cout << "|[5] - " << arr[5];
	cout << "|[6] - " << arr[6];
	cout << "|[0-6]: ";
	int day;
	cin >> day;
	//editing corresponding index in arr to "day" that user chooses
	for (int i = 0; i < 7; i++) {
		if (i == day) {
			int goA = 1;
			while (goA) {
				//found ya! >:D
				cout << "|--DAILY PLAN-->\n";
				cout << "|(1) NAME - " << arr[i].getPlanName() << "\n";
				cout << "|(2) GOAL - " << arr[i].getGoalCal() << "\n";
				cout << "|(3) DATE - " << arr[i].getPlanDate() << "\n";
				cout << "|(4) STOP EDITING \n";
				cout << "|(1-4): ";
				int val;
				cin >> val;
				string edit;
				int editI;

				switch (val) {
				case 1:
					//editing name
					cout << "|Enter new NAME: ";
					cin >> edit;
					arr[i].setPlanName(edit);
					break;
				case 2:
					cout << "|Enter new GOAL: ";
					cin >> editI;
					arr[i].setGoalCal(editI);
					//editing goal
					break;
				case 3:
					cout << "|Enter new DATE: ";
					cin >> edit;
					arr[i].setPlanDate(edit);
					//editing date
					break;
				case(4):
					goA = 0;
					break;
				}
			}

		}
	}
	return 1;
}

int FitnessAppWrapper::editFileE_Daily(ExcersisePlan arr[7]) {

	cout << "|--The Week Ahead-->\n";
	cout << "|[0] - " << arr[0];
	cout << "|[1] - " << arr[1];
	cout << "|[2] - " << arr[2];
	cout << "|[3] - " << arr[3];
	cout << "|[4] - " << arr[4];
	cout << "|[5] - " << arr[5];
	cout << "|[6] - " << arr[6];
	cout << "|[0-6]: ";
	int day;
	cin >> day;
	//editing corresponding index in arr to "day" that user chooses
	for (int i = 0; i < 7; i++) {
		if (i == day) {
			int goA = 1;
			while (goA) {
				//found ya! >:D
				cout << "|--DAILY PLAN-->\n";
				cout << "|(1) NAME - " << arr[i].getPlanName() << "\n";
				cout << "|(2) GOAL - " << arr[i].getGoalSteps() << "\n";
				cout << "|(3) DATE - " << arr[i].getPlanDate() << "\n";
				cout << "|(4) STOP EDITING \n";
				cout << "|(1-4): ";
				int val;
				cin >> val;
				string edit;
				int editI;

				switch (val) {
				case 1:
					//editing name
					cout << "|Enter new NAME: ";
					cin >> edit;
					arr[i].setPlanName(edit);
					break;
				case 2:
					cout << "|Enter new GOAL: ";
					cin >> editI;
					arr[i].setGoalSteps(editI);
					//editing goal
					break;
				case 3:
					cout << "|Enter new DATE: ";
					cin >> edit;
					arr[i].setPlanDate(edit);
					//editing date
					break;
				case(4):
					goA = 0;
					break;
				}
			}

		}
	}
	return 1;
}

void FitnessAppWrapper::runApp(void) {
	//still not sure what he wants from us here... opening the files maybe?
	//for now ill have it open zeh files n all
	//declaring file names / opening them im pretty sure idk C++ is wacky man
	//inFs
	displayMenu();
};

void FitnessAppWrapper::displayMenu() {
	//slapping in what I had previously in runApp ig idk what he wants in this tbh

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

	DietPlan arrD[7] = { };
	ExcersisePlan arrE[7] = { };
	int superSecretCrashStoppingTechnique1 = 0;
	int superSecretCrashStoppingTechnique2 = 0;

	int go = 1;
	while (go) {
		system("cls");
		int c = 0;
		cout << "|--Menu-->\n";
		cout << "|(1) Load Weekly Diet \n";
		cout << "|(2) Load Weekly Excersise	 \n";
		cout << "|(3) Store Weekly Diet \n";
		cout << "|(4) Store Weekly Excersise \n";
		cout << "|(5) Display Weekly Diet \n";
		cout << "|(6) Display Weekly Excersise \n";
		cout << "|(7) Edit Daily Diet \n";
		cout << "|(8) Edit Daily Excersise \n";
		cout << "|(9) Exit \n";
		cout << "|(1-9): ";
		cin >> c;

		switch (c) {
		case 1:
			
			if (superSecretCrashStoppingTechnique1) {
				cout << "\nFiles read succesfully!\n";

			}
			else if (!superSecretCrashStoppingTechnique1){
				superSecretCrashStoppingTechnique1 = 1;
				readFileD_Weekly(Diet, arrD);
				cout << "\nFiles read succesfully!\n";
			}
			system("pause");
			break;
		case 2:
			if (superSecretCrashStoppingTechnique2) {
				cout << "\nFiles read succesfully!\n";

			}
			else if (!superSecretCrashStoppingTechnique2) {
				superSecretCrashStoppingTechnique2 = 1;
				readFileE_Weekly(Excersise, arrE);
				cout << "\nFiles read succesfully!\n";
			}
			system("pause");
			break;
		case 3:
			writeFileD_Weekly(DietO, arrD);
			cout << "\nFiles stored succesfully!\n";
			system("pause");

			break;
		case 4:
			writeFileE_Weekly(ExcersiseO, arrE);
			cout << "\nFiles stored succesfully!\n";
			system("pause");

			break;
		case 5:
			displayFileD_Weekly(arrD);
			system("pause");

			break;
		case 6:
			displayFileE_Weekly(arrE);
			system("pause");

			break;
		case 7:
			editFileD_Daily(arrD);
			system("pause");
			break;
		case 8:
			editFileE_Daily(arrE);
			system("pause");
			break;
		case 9:
			cout << "\nSee you next time! :)\n";
			/*
			problem 2: how can i write the most recent iterations to the file without deleting them? (gonna try closing and reopening the write files every time)
			*/
			DietO.close();
			ExcersiseO.close();
			DietO.open("DietPlanOut.txt", std::ios::out);
			ExcersiseO.open("ExcersisePlanOut.txt", std::ios::out);

			writeFileD_Weekly(DietO, arrD);
			writeFileE_Weekly(ExcersiseO, arrE);
			
			Diet.close();
			DietO.close();
			Excersise.close();
			ExcersiseO.close();
			system("pause");
			exit(1);
			break;
		}
	}
}
