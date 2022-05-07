#pragma once
#include "Manager.h"
#include "Vehicles.h"
#include "Permanent_Branch_Projects.h"

//class that drives the entire program
//rules over all other classes and holds entire data of a single branch
class Branch		
{
private:
	/* basic branch data */
	unsigned long int contact_no;
	string city,
		address,
		email;

	/* holds no of max employees - initialized to 500 in the constructor*/
	const int number_of_employees;
	
public:
	/*constructor*/
	Branch();

	/* branch objects - made public so their member functions can be accessed */

	Branch_Manager Manager;			//holds branch manager's data

	Employee Employees_Array[500];		//holds all employees data
										//this program can hold data of up to 500 employees
									
	Vehicles Branch_Vehicles;		//holds data of all vehicles currently owned by the branch

	Permanent_Branch_Projects branch_projects;	//holds data for the permanent projects of the branch

	
	//	MEMBER FUNCTIONS  //
	void StoreBranchDataInFile();	//stores all of the branch's data in a file
	
	void PrintBranchData();			//prints branch data onto the screen


	//setter functions
	void set_address(string address);
	void set_contact_no(unsigned long int contact_no);
	void set_email(string email);
	void set_city(string city);

    // getter functions
    string get_address()const;
    unsigned long int get_contact_no()const;
    string get_email()const;
    string get_city()const;

    int get_number_of_employees()const;
};