#include "Employee.h"
#include<fstream>

//contructor
Employee::Employee()
{
    //blank
}

//setter functions
void Employee::set_employee_name(string name)
{
    this->employee_name = name;
}

void Employee::set_employee_CNIC_no(unsigned long int cnic)
{
    this->CNIC_no = cnic;
}
void Employee::set_employee_date_of_joining(string date)
{
    this->date_of_joining = date;
}
void Employee::set_employee_blood_group(string blood_grp)
{
    this-> blood_group = blood_grp;
}
void Employee::set_employee_address(string address)
{
    this->address = address;
}
void Employee::set_employee_contact_no(unsigned long int contact)
{
    this->contact_no = contact;
}
void Employee::set_employee_email(string email)
{
	this->email = email;
}
void Employee::set_employee_designation(string designation)
{
	this->designation = designation;
}

//getter functions
string Employee::get_employee_name()const
{
    return employee_name;
}
unsigned long int Employee::get_employee_CNIC_no()const
{
    return CNIC_no;
}
string Employee::get_employee_date_of_joining()const
{
    return date_of_joining;
}
string Employee::get_employee_blood_group()const
{
    return blood_group;
}
string Employee::get_employee_address()const
{
    return address;
}
unsigned long int Employee::get_employee_contact_no()const
{
    return  contact_no;
}
string Employee::get_employee_email()const
{
    return email;
}
string Employee::get_employee_designation()const
{
    return designation;
}

//function to store all employee data in a file
void Employee::StoreAllEmployeeDataInFile()
{
   std::ofstream employee("Employee.txt",std::ofstream::out);
   employee << employee_name << std::endl;
   employee << CNIC_no << std::endl;
   employee << date_of_joining << std::endl;
   employee << address << std::endl;
   employee << contact_no << std::endl;
   employee << email << std::endl;
   employee << designation << std::endl;
   employee.close();
}