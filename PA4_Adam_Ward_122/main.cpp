#include "Header.h"
int main() {

	//initializing dietplan as a plan! yahoo
	DietPlan plan(500, "planA", "2/12/2005");

	//testing initial values
	cout << "testing goalCal initial: " << plan.getGoalCal() << "\n";
	cout << "testing planName initial: " << plan.getPlanName() << "\n";
	cout << "testing planDate initial: " << plan.getPlanDate() << "\n\n";

	//testing copy constructer values
	DietPlan planC = plan;
	cout << "testing goalCal initial copy: " << planC.getGoalCal() << "\n";
	cout << "testing planName initial copy: " << planC.getPlanName() << "\n";
	cout << "testing planDate initial copy: " << planC.getPlanDate() << "\n\n";

	//testing editable values / inputs 
	int num;
	string str;
	string str1;

	cout << "enter goal calories: ";
	cin >> num;
	plan.setGoalCal(num);

	cout << "enter plan name: ";
	cin >> str;
	plan.setPlanName(str);

	cout << "enter plan date: ";
	cin >> str1;
	plan.setPlanDate(str1);

	//printing edited values
	cout << "\n";
	cout << "testing goalCal edited: " << plan.getGoalCal() << "\n";
	cout << "testing planName edited: " << plan.getPlanName() << "\n";
	cout << "testing planDate edited: " << plan.getPlanDate() << "\n\n";

	return 0;
}

	