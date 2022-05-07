#include "Manager.h"
#include<fstream>

//constructor
Branch_Manager::Branch_Manager()
{
	designation = "Branch Manager";
}

//function to store all manager data in file
void Branch_Manager::StoreAllManagerDataInFile()
{
    std::ofstream manager("Manager.txt",std::ofstream::out);
	manager << employee_name << std::endl;
	manager << CNIC_no << std::endl;
	manager << date_of_joining << std::endl;
	manager << address << std::endl;
	manager << contact_no << std::endl;
	manager << email << std::endl;
	manager << designation << std::endl;
    manager.close();
}
