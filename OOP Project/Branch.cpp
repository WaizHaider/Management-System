#include "Branch.h"
#include <fstream>

//constructor
Branch::Branch():number_of_employees(500)
{
	//blank
}

//setter functions for basic branch data
void Branch::set_contact_no(unsigned long int contact_no)
{
	this->contact_no = contact_no;
}
void Branch::set_city(string city)
{
	this->city = city;
}
void Branch::set_address(string address)
{
	this->address = address;
}
void Branch::set_email(string email)
{
	this->email = email;
}

//getter functions for basic branch data
unsigned long int Branch::get_contact_no()const
{
    return contact_no;
}
string Branch::get_city()const
{
    return city;
}
string Branch::get_address()const
{
    return address;
}
string Branch::get_email()const
{
    return email;
}

//getter function for no of employees
int Branch::get_number_of_employees()const
{
	return number_of_employees;
}

//function for storing all branch data in a file
void Branch::StoreBranchDataInFile()
{
    std::ofstream branch("Branch.txt",std::ofstream::out);
	branch << city << std::endl;
	branch << address << std::endl;
	branch << email << std::endl;
	branch << contact_no << std::endl;
    branch.close();
}