//To calculate the needed ingredients to make pie crusts. Caleb Brock, 9/19/2017, COP2000
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float Pies_Needed;
	const float Recipe_Flour = 2.50; //Recipe-Flour.
	const float Recipe_Sugar = 1.33; //Recipe-Sugar.
	const float Recipe_Butter = .87; //Recipe-Butter.
	const float Recipe_Salt = .50; //Recipe-Salt
	const float Recipe_Eggs = 1; //Recipe-Eggs
							   
	//Pie Crusts Needed.
	input:
	cout << "How many Pies do you wish to make?" << endl;
	cout << ">";
	cin >> Pies_Needed;
	if (Pies_Needed >= 1)
	{
		const float Flour_Needed = Recipe_Flour * Pies_Needed; //Calculate Flour Needed.
		const float Sugar_Needed = Recipe_Sugar * Pies_Needed; //Calculate Sugar Needed.
		const float Butter_Needed = Recipe_Butter * Pies_Needed; //Calculate Butter Needed.
		const float Salt_Needed = Recipe_Salt * Pies_Needed; //Calculate Salt Needed.
		const float Eggs_Needed = Recipe_Eggs * Pies_Needed; //Calculate Eggs Needed.

		//Display Ingredients Needed
		cout << "Ingredients needed for " << Pies_Needed << " pies." << endl << endl;
		cout << "Flour	" << Flour_Needed << " Cups." << endl;
		cout << "Sugar	" << right << Sugar_Needed << " Tablespoons." << endl;
		cout << "Butter	" << right << Butter_Needed << " Cups." << endl;
		cout << "Salt	" << right << Salt_Needed << " Tablespoons." << endl;
		cout << "Eggs	" << right << Eggs_Needed << " Large Eggs." << endl << endl;
		cin.get();
		return 0;
	}
	else//Invaild number inputted
	{
		cout << "input vaild number." << endl;
		goto input;
	}
}