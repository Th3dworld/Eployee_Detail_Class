//This is the specification file of the employee class
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;

class Employee
{
	private:
		string name;
		int idNumber;
		string department;
		string position;
	public:
		//Contructor 1
		Employee(string nm, int ID, string dpt, string pos)
		{
			name = nm;
			idNumber = ID;
			department = dpt;
			position = pos;
		}

		//Constructor 2
		Employee(string nm, int ID) :
			department(""),position("")
		{
			name = nm;
			idNumber = ID;
		}

		//Constructor 3 with constructor 1 deligated;
		Employee():Employee(" ", 0, " ", "")
		{
		
		}

		//Function prototypes(set = mutator , get = accessor)
		void set_name(string nm)
		{
			name = nm;
		}
		void set_idNumber(int ID)
		{
			idNumber = ID;
		}
		void set_department(string dpt)
		{
			department = dpt;
		}
		void set_positions(string pos)
		{
			position = pos;
		}

		string get_name() const
		{
			return name;
		}
		int get_idNumber() const
		{
			return idNumber;
		}
		string get_department() const
		{
			return department;
		}
		string get_positions() const
		{
			return position;
		}
};

#endif
