#include "Employee.h"
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;\

//This program shows the utilization of a class that holds employee data by using it to create 3 objects
//Matanda Hillary Phiri

int main(){
	//Declare variables and initialize objects
	Employee Susan("Susan Mayers", 47899, "Accounting", "Vice President"),
			Mark("Mark Jones", 39119, "IT", "Programmer"),
			Joy("Joy Rodgers", 81774, "Manufacturing", "Engineer");

	//Display Data
	cout << "----------------------------------------------------------------------\n";
	cout << setw(15) << left << "Name" << setw(20) << left << "ID Number" << setw(20) << left << "Department" << setw(9) << left << "Position\n";
	cout << "----------------------------------------------------------------------\n";
	cout << setw(15) << left << Susan.get_name() << setw(20) << left << Susan.get_idNumber() << setw(20) << left << Susan.get_department()<< setw(20) << left << Susan.get_positions() <<endl;
	cout << setw(15) << left << Mark.get_name() << setw(20) << left << Mark.get_idNumber() << setw(20) << left << Mark.get_department() << setw(20) << left << Mark.get_positions() << endl;
	cout << setw(15) << left << Joy.get_name() << setw(20) << left << Joy.get_idNumber() << setw(20) << left << Joy.get_department() << setw(20) << left << Joy.get_positions() << endl;
	cout << "----------------------------------------------------------------------\n";	
	//End of data display

	cout << "\n\n\n\n\n\n";
	return 0;
}