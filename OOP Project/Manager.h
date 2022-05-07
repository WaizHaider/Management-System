#pragma once
#include "Employee.h"
class Branch_Manager :     //holds data for an Employee whole holds "Branch Manager" position
	public Employee     //inherited from employee
{
public:
	//default constructor
	Branch_Manager(); //designation automatically set as "Branch Manager"

	//function to store all manager data in a file
	void StoreAllManagerDataInFile();
};