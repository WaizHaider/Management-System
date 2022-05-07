#pragma once
#include <string>
using std::string;

//stores information about every single employee working at the branch
class Employee
{
protected:	//inherited by Manager
	string employee_name,	//full name
		blood_group,		//required for emergencies
		address,			//permanent mailing address
		email,
		date_of_joining,
		designation;		//position of the employee
	unsigned long int CNIC_no,
		contact_no;
public:
	//blank default constructor
	Employee();	
	// Function to Store All Employee Data;
    void StoreAllEmployeeDataInFile();
	//setter functions 
	void set_employee_name(string name);
	void set_employee_CNIC_no(unsigned long int cnic);
	void set_employee_date_of_joining(string date);
	void set_employee_blood_group(string blood_grp);
	void set_employee_address(string address);
	void set_employee_contact_no(unsigned long int contact);
	void set_employee_email(string email);
	void set_employee_designation(string designation);

	//getter functions 
	string get_employee_name()const;
	unsigned long int get_employee_CNIC_no()const;
	string get_employee_date_of_joining()const;
	string get_employee_blood_group()const;
	string get_employee_address()const;
	unsigned long int get_employee_contact_no()const;
	string get_employee_email()const;
	string get_employee_designation()const;
};
