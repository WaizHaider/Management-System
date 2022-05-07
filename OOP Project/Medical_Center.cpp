#include "Medical_Center.h"
#include<fstream>

//deafult constructor
Medical_Center::Medical_Center()
{
	no_of_doctors = 0;
	no_of_nurses = 0;
	no_of_support_staff = 0;
}

//setter functions
void Medical_Center::set_no_of_doctors(int num_d)
{
	this->no_of_doctors = num_d;
}

void Medical_Center::set_no_of_nurses(int num_n)
{
	this->no_of_nurses = num_n;
}

void Medical_Center::set_no_of_support_staff(int num_ss)
{
	this->no_of_support_staff = num_ss;
}

//getter functions
int Medical_Center::get_no_of_doctors()const
{
    return no_of_doctors;
}

int Medical_Center::get_no_of_nurses()const
{
    return no_of_nurses;
}

int Medical_Center::get_no_of_support_staff()const
{
	return no_of_support_staff;
}

//function to store all medical center data in file
void Medical_Center::StoreAllMedicalCenterDataInFile()
{
    std::ofstream medical_center("Medical_Center.txt",std::ofstream::out);
	medical_center << no_of_doctors << std::endl;
	medical_center << no_of_doctors << std::endl;;
	medical_center << no_of_support_staff << std::endl;;
    medical_center.close();
}
