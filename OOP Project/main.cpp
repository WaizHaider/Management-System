#include <iostream>
#include <fstream>
#include "Branch.h"
using namespace std;

void SetUpNewBranch(Branch& branch)
{
	string *temp_setup_str = new string;

	cout << endl;
	cout << "Welcome to Branch Setup! Let's get started by setting you up with an account." << endl;
	cout << "Your branch is identified by your city." << endl;
	cout << "Enter city name: ";
	cin.ignore();
	getline(cin, *temp_setup_str);

	//saving city to object
	branch.set_city(*temp_setup_str);

	cout << "Great! You're all set up! " << endl;
	cout << endl;

}
void DisplayCredits()
{
	cout << endl;
	cout << "Thank you for using Single-Branch Welfare Organization Management System!" << endl << endl;
	cout << "Credits to the developers:" << endl;
	cout << "\t Izza Naeem" << endl
		<< "\t Waiz Haider" << endl
		<< "\t Mamoona Saeeda" << endl;

	cout << endl << "Now terminating program..." << endl;
}

//		PRINT FUNCTIONS        //
void PrintBranchData(Branch &b)	//prints basic branch data
{
    cout << endl;
	cout << "---------------------------------------------------" << endl;
	cout << "               Basic Branch Data" << endl;
	cout << "---------------------------------------------------" << endl;
	cout << "City : " << b.get_city() << endl;
	cout << "Address : " << b.get_address() << endl;
	cout << "Contact Info : " << b.get_contact_no() << endl;
	cout << "Email : " << b.get_email() << endl;
	cout << "---------------------------------------------------" << endl;
	cout << endl;
}
void PrintEmployeeData(Branch &branch, int i)
{
    cout << endl;
	cout << "--------------------------------------------------------------------------" << endl;
	cout << "Name : " << branch.Employees_Array[i].get_employee_name() << endl;
	cout << "CNIC No. : " << branch.Employees_Array[i].get_employee_CNIC_no() << endl;
	cout << "Blood Group : " << branch.Employees_Array[i].get_employee_blood_group() << endl;
	cout << "Address : " << branch.Employees_Array[i].get_employee_address() << endl;
	cout << "Contact : " << branch.Employees_Array[i].get_employee_contact_no() << endl;
	cout << "Email : " << branch.Employees_Array[i].get_employee_email() << endl;
	cout << "Date of joining : " << branch.Employees_Array[i].get_employee_name() << endl;
	cout << "Designation : " << branch.Employees_Array[i].get_employee_designation() << endl;
	cout << "--------------------------------------------------------------------------" << endl;
	cout << endl;
}
void PrintManagerData(Branch &b)
{
    cout << endl;
	cout << "--------------------------------------------------------------------------" << endl;
	cout << "Name : " << b.Manager.get_employee_name() << endl;
	cout << "CNIC No. : " << b.Manager.get_employee_CNIC_no() << endl;
	cout << "Blood Group : " << b.Manager.get_employee_blood_group() << endl;
	cout << "Address : " << b.Manager.get_employee_address() << endl;
	cout << "Contact : " << b.Manager.get_employee_contact_no() << endl;
	cout << "Email : " << b.Manager.get_employee_email() << endl;
	cout << "Date of joining : " << b.Manager.get_employee_date_of_joining() << endl;
	cout << "Designation : " << b.Manager.get_employee_designation() << endl;
	cout << "--------------------------------------------------------------------------" << endl;
	cout << endl;
}
void PrintAmbulanceData(Branch &b, int i)
{
    cout << endl;
	cout << "-------------------------------------------" << endl;
	cout << "Registration number: " << b.Branch_Vehicles.ambulance_array[i].get_registration_no() << endl;
	cout << "Color: " << b.Branch_Vehicles.ambulance_array[i].get_color() << endl;
	cout << "Seating capacity: " << b.Branch_Vehicles.ambulance_array[i].get_seating_capacity() << endl;
	cout << "-------------------------------------------" << endl;
	cout << endl;
}
void PrintTruckData(Branch &b, int i)
{
    cout << endl;
	cout << "-------------------------------------------" << endl;
	cout << "Registration number: " << b.Branch_Vehicles.pickup_truck_array[i].get_registration_no() << endl;
	cout << "Color: " << b.Branch_Vehicles.pickup_truck_array[i].get_color() << endl;
	cout << "Seating capacity: " << b.Branch_Vehicles.pickup_truck_array[i].get_loading_capacity() << endl;
	cout << "-------------------------------------------" << endl;
	cout << endl;
}
void PrintVehiclesData(Branch& branch)
{
    cout << endl;
	//printing ambulance data
	cout << "Number of ambulances: " << branch.Branch_Vehicles.get_no_of_ambulances() << endl;
	for (int i = 0; i < branch.Branch_Vehicles.get_no_of_ambulances(); i++)
	{
		PrintAmbulanceData(branch, i);
	}

	//printing truck data
	cout << "Number of pickup trucks: " << branch.Branch_Vehicles.get_no_of_trucks() << endl;
	for (int i = 0; i < branch.Branch_Vehicles.get_no_of_trucks(); i++)
	{
		PrintTruckData(branch, i);
	}
	cout << endl;

}

void PrintBranchProjectsData(Branch &b)
{
    cout << endl;
	cout << "----------------------------------------------------------------" << endl;
	cout << "                  ORPHANAGE DATA" << endl;
	cout << "----------------------------------------------------------------" << endl;
	cout << "Number of orphans currently residing: " << b.branch_projects.orphanage.get_no_of_orphans() << endl;

	for (int i = 0; i < b.branch_projects.orphanage.get_no_of_orphans(); i++)
	{
		cout << "--------------------------" << endl;
		b.branch_projects.orphanage.Orphan_Array[i].PrintOrphanData();
		cout << "--------------------------" << endl;
	}

	cout << "----------------------------------------------------------------" << endl;
	cout << "                  MEDICAL CENTER DATA" << endl;
	cout << "----------------------------------------------------------------" << endl;
	cout << "Number of doctors: " << b.branch_projects.medical_center.get_no_of_doctors() << endl;
	cout << "Number of nurses: " << b.branch_projects.medical_center.get_no_of_nurses() << endl;
	cout << "Number of support staff: " << b.branch_projects.medical_center.get_no_of_support_staff() << endl;
	cout << "----------------------------------------------------------------" << endl;
	cout << endl;
}
//		MENU FUNCTIONS		//
int DisplayMenu()	//displays menu and takes user choice
{
	int choice;
	do
	{
	    cout << endl;
		cout << "----------------------------------------------" << endl;
		cout << "Menu Options:" << endl;
		cout << "----------------------------------------------" << endl;
		cout << "1 - Modify Basic Branch Data" << endl;
		cout << "2 - Modify Employee Data" << endl;
		cout << "3 - Modify Manager Data" << endl;
		cout << "4 - Modify Vehicle Data" << endl;
		cout << "5 - Modify Branch Projects Data" << endl;
		cout << "6 - View Basic Branch Data" << endl;
		cout << "7 - View Employee Data" << endl;
		cout << "8 - View Manager Data" << endl;
		cout << "9 - View Vehicle Data" << endl;
		cout << "10 - View Branch Projects Data" << endl;
		cout << "0 - Exit Program" << endl;
		cout << "----------------------------------------------" << endl;
		cout << endl << "Enter choice: ";
		cin >> choice;
		cout << "----------------------------------------------" << endl;

		//input validation statement
		if (choice > 10 || choice < 0)
		{
			cout << "Invalid Input.. Please Try Again." << endl;
		}
	} while (choice > 10 || choice < 0);

	return choice;
}
int DisplayBranchDataMenu()
{
	int choice;
	do
	{
	    cout << endl;
		cout << "----------------------------------------------" << endl;
		cout << "Menu Options:" << endl;
		cout << "----------------------------------------------" << endl;
		cout << "1 - Modify Address" << endl;
		cout << "2 - Modify Contact No" << endl;
		cout << "3 - Modify Email" << endl;
		cout << "4 - Change City" << endl;
		cout << "----------------------------------------------" << endl;
		cout << endl << "Enter choice: ";
		cin >> choice;

		//input validation
		if (choice > 4 || choice < 0)
		{
			cout << "Invalid input. Please try again." << endl;
		}
	} while (choice > 4 || choice < 0);
	

	return choice;
}

//		MODIFICATION FUNCTIONS		//
void ModifyBasicBranchData(Branch &branch)
{
	cout << endl
		<< "-------------------------------------------------" << endl
		<< "You have selected 1 - Modify Basic Branch Data" << endl
		<< "-------------------------------------------------" << endl;

	//creating new variable to hold value of BranchData menu
	int* user_choice_1 = new int;

	do
	{
		//showing current stored data
		cout << "Current stored basic branch data..." << endl;
		PrintBranchData(branch);

		//asking for user's choice
		cout << endl;
		cout << "What would you like to add/change? " << endl;
		*user_choice_1 = DisplayBranchDataMenu();

		//change address
		if (*user_choice_1 == 1)
		{
			string* temp_add = new string;	//temporarily hold value of address

			cout << "Enter new address: ";
			cin.ignore();
			getline(cin, *temp_add);

			//pass modified branch address to object
			branch.set_address(*temp_add);

			delete temp_add;
		}

		//change contact no
		else if (*user_choice_1 == 2)
		{
			unsigned long int* temp_int = new unsigned long int;	//temporarily hold value of contact no

			cout << "Enter new contact no: ";
			cin >> *temp_int;

			//pass modified branch contact no to object
			branch.set_contact_no(*temp_int);

			delete temp_int;
		}

		//change email
		else if (*user_choice_1 == 3)
		{
			string* temp_email = new string;	//temporarily hold value of email address

			cout << "Enter new email address: ";
			cin.ignore();
			getline(cin, *temp_email);

			//pass modified branch address to object
			branch.set_email(*temp_email);

			delete temp_email;
		}

		//change city
		else if (*user_choice_1 == 4)
		{
			string* temp_city = new string;	//temporarily hold value of city

			cout << "Enter new city: ";
			//cin.ignore();
			getline(cin, *temp_city);

			//pass modified branch address to object
			branch.set_city(*temp_city);

			delete temp_city;
		}
	} while (*user_choice_1 != 0);
}
void ModifyEmployeeData(Branch &branch)
{
	cout << endl
		<< "-------------------------------------------------" << endl
		<< "You have selected 2 - Modify Employee Data" << endl
		<< "-------------------------------------------------" << endl;

	char* temp_choice_char = new char;

	cout << "Would you like to \n"
		<< "\t\t A: add new employee data \n"
		<< "\t\t B: change an existing employee's data\n";

	//input validation
	do {
		cout << "Enter choice: ";
		cin >> *temp_choice_char;

		if ((*temp_choice_char != 'A') && (*temp_choice_char != 'a')
			&& (*temp_choice_char != 'B') && (*temp_choice_char != 'b'))
		{
			cout << "Invalid input. Try again" << endl;
		}
	} while ((*temp_choice_char != 'A') && (*temp_choice_char != 'a')
		&& (*temp_choice_char != 'B') && (*temp_choice_char != 'b'));

	if ((*temp_choice_char == 'A') || (*temp_choice_char == 'a'))
	{
		//TODO: put in separate function
		cout << "Now taking input for employee data...";
		for (int i = 0; i < 500; i++)
		{
			string* temp_string_employee = new string;

			//taking employee data
			cout << "Enter employee name: ";
			cout << "\n Enter X to stop taking employee inputs \n";
			cin.ignore();
			getline(cin, *temp_string_employee);

			if (*temp_string_employee == "X")
			{
				break;
			}

			//TODO: call the following function - MAKE THE FUNCTION employeedata or smthng
			//setting value of name in object
			branch.Employees_Array[i].set_employee_name(*temp_string_employee);

			unsigned long int* temp_int_employee = new unsigned long int;

			//taking CNIC input
			cout << "Enter employee CNIC: ";
			cin >> *temp_int_employee;

			branch.Employees_Array[i].set_employee_CNIC_no(*temp_int_employee);

			//taking contact no input
			cout << "Enter employee contact no: ";
			cin >> *temp_int_employee;

			branch.Employees_Array[i].set_employee_contact_no(*temp_int_employee);

			delete temp_int_employee;

			//taking input for designation
			cout << "Enter employee designation: ";
			cin.ignore();
			getline(cin, *temp_string_employee);

			branch.Employees_Array[i].set_employee_designation(*temp_string_employee);

			//taking input for date of joining
			cout << "Enter employee date of joining: ";
			getline(cin, *temp_string_employee);

			branch.Employees_Array[i].set_employee_date_of_joining(*temp_string_employee);

			//taking input for address
			cout << "Enter employee address: ";
			getline(cin, *temp_string_employee);

			branch.Employees_Array[i].set_employee_address(*temp_string_employee);

			//taking input for email
			cout << "Enter employee email: ";
			getline(cin, *temp_string_employee);

			branch.Employees_Array[i].set_employee_designation(*temp_string_employee);

			//taking input for blood group
			do
			{
				cout << "Enter employee blood group: ";
				cout << "\t (Choose one: A+, A-, B+, B-, AB+, O+, O-)  ";
				getline(cin, *temp_string_employee);

				if ((*temp_string_employee != "A+") && (*temp_string_employee != "A-") &&
					(*temp_string_employee != "B+") && (*temp_string_employee != "B-") &&
					(*temp_string_employee != "AB+") && (*temp_string_employee != "O+") &&
					(*temp_string_employee != "O-"))
				{
					cout << "Invalid input. Please try again." << endl;
				}
			} while ((*temp_string_employee != "A+") && (*temp_string_employee != "A-") &&
				(*temp_string_employee != "B+") && (*temp_string_employee != "B-") &&
				(*temp_string_employee != "AB+") && (*temp_string_employee != "O+") &&
				(*temp_string_employee != "O-"));


			branch.Employees_Array[i].set_employee_blood_group(*temp_string_employee);

			delete temp_string_employee;
		}
	}

	else if ((*temp_choice_char == 'B') || (*temp_choice_char == 'b'))
	{
		string* temp_string_employee_2 = new string;
		int* index = new int;
		cout << "Enter the employee's name whose data you would like to change: ";
		getline(cin, *temp_string_employee_2);

		for (int i = 0;
			(i < 500) || (branch.Employees_Array[i].get_employee_name() == *temp_string_employee_2);
			i++)
		{
			if (branch.Employees_Array[i].get_employee_name() == *temp_string_employee_2)
			{
				*index = i;
			}
		}

		//TODO: call the employee data wala function
	}
}
void ModifyManagerData(Branch &branch)
{
	string* temp_str_manager = new string;

	cout << endl
		<< "-------------------------------------------------" << endl
		<< "You have selected 3 - Modify Manager Data" << endl
		<< "-------------------------------------------------" << endl;

	cout << "Enter manager name: ";
	cin.ignore();
	getline(cin, *temp_str_manager);

	//setting value of name in object
	branch.Manager.set_employee_name(*temp_str_manager);

	unsigned long int* temp_int_manager = new unsigned long int;

	//taking CNIC input
	cout << "Enter manager CNIC: ";
	cin >> *temp_int_manager;

	branch.Manager.set_employee_CNIC_no(*temp_int_manager);

	//taking contact no input
	cout << "Enter manager contact no: ";
	cin >> *temp_int_manager;

	branch.Manager.set_employee_contact_no(*temp_int_manager);

	delete temp_int_manager;

	//taking input for date of joining
	cout << "Enter manager date of joining: ";
	cin.ignore();
	getline(cin, *temp_str_manager);

	branch.Manager.set_employee_date_of_joining(*temp_str_manager);

	//taking input for address
	cout << "Enter manager address: ";
	getline(cin, *temp_str_manager);

	branch.Manager.set_employee_address(*temp_str_manager);

	//taking input for email
	cout << "Enter employee email: ";
	getline(cin, *temp_str_manager);

	branch.Manager.set_employee_email(*temp_str_manager);

	//taking input for blood group
	do
	{
		cout << "Enter manager blood group: ";
		cout << "\t (Choose one: A+, A-, B+, B-, AB+, O+, O-)  ";
		getline(cin, *temp_str_manager);

		if ((*temp_str_manager != "A+") && (*temp_str_manager != "A-") &&
			(*temp_str_manager != "B+") && (*temp_str_manager != "B-") &&
			(*temp_str_manager != "AB+") && (*temp_str_manager != "O+") &&
			(*temp_str_manager != "O-"))
		{
			cout << "Invalid input. Please try again." << endl;
		}
	} while ((*temp_str_manager != "A+") && (*temp_str_manager != "A-") &&
		(*temp_str_manager != "B+") && (*temp_str_manager != "B-") &&
		(*temp_str_manager != "AB+") && (*temp_str_manager != "O+") &&
		(*temp_str_manager != "O-"));


	branch.Manager.set_employee_blood_group(*temp_str_manager);

	delete temp_str_manager;

}
void ModifyVehicleData(Branch &branch)
{
	cout << endl
		<< "-------------------------------------------------" << endl
		<< "You have selected 4 - Modify Vehicle Data" << endl
		<< "-------------------------------------------------" << endl;

	char* temp_char_vehicles = new char;

	cout << "Now taking ambulance data... "
		<< "\n\tTo skip to Pickup Truck Data, press P \n"
		<< "\tPress any other key to continue\n ";
	cin >> *temp_char_vehicles;

	//taking all ambulance data
	if (*temp_char_vehicles != 'P' && *temp_char_vehicles != 'p')
	{
		//taking user input for number of ambulances
		int* temp_int_ambulance = new int;

		cout << "Enter number of ambulances: ";
		cin >> *temp_int_ambulance;


		//dynamically allocating array
		branch.Branch_Vehicles.ambulance_array = new Ambulance[*temp_int_ambulance];
		branch.Branch_Vehicles.set_no_of_ambulances(*temp_int_ambulance);

		delete temp_int_ambulance;

		//taking user input for each of the ambulances in the array
		for (int i = 0; i < branch.Branch_Vehicles.get_no_of_ambulances(); i++)
		{
			string* temp_str_ambulance = new string;

			cout << "Enter the registration number of Ambulance # " << i + 1 << ": ";
			cin >> *temp_str_ambulance;

			branch.Branch_Vehicles.ambulance_array[i].set_registration_no(*temp_str_ambulance);

			cout << "Enter the color of the ambulance: ";
			getline(cin, *temp_str_ambulance);

			branch.Branch_Vehicles.ambulance_array[i].set_color(*temp_str_ambulance);

			delete temp_str_ambulance;

			int* temp_int_ambulance_1 = new int;

			cout << "Enter seating capacity of the ambulance: ";
			cin >> *temp_int_ambulance_1;

			branch.Branch_Vehicles.ambulance_array[i].set_seating_capacity(*temp_int_ambulance_1);

			delete temp_int_ambulance_1;
		}
	}

	cout << "Now taking Pickup Truck data... "
		<< "\n\tTo skip input of  Pickup Truck Data, press P \n"
		<< "\tPress any other key to continue\n ";
	cin >> *temp_char_vehicles;

	if (*temp_char_vehicles != 'P' && *temp_char_vehicles != 'p')
	{
		//taking user input for number of trucks
		int* temp_int_truck = new int;

		cout << "Enter number of trucks: ";
		cin >> *temp_int_truck;


		//dynamically allocating array
		branch.Branch_Vehicles.pickup_truck_array = new Pickup_Truck[*temp_int_truck];
		branch.Branch_Vehicles.set_no_of_trucks(*temp_int_truck);

		delete temp_int_truck;

		//taking user input for each of the ambulances in the array
		for (int i = 0; i < branch.Branch_Vehicles.get_no_of_trucks(); i++)
		{
			string* temp_str_truck = new string;

			cout << "Enter the registration number of Truck # " << i + 1 << ": ";
			cin >> *temp_str_truck;

			branch.Branch_Vehicles.pickup_truck_array[i].set_registration_no(*temp_str_truck);

			cout << "Enter the color of the truck: ";
			getline(cin, *temp_str_truck);

			branch.Branch_Vehicles.pickup_truck_array[i].set_color(*temp_str_truck);

			delete temp_str_truck;

			int* temp_int_truck_1 = new int;

			cout << "Enter seating capacity of the ambulance: ";
			cin >> *temp_int_truck_1;

			branch.Branch_Vehicles.ambulance_array[i].set_seating_capacity(*temp_int_truck_1);

			delete temp_int_truck_1;
		}
	}
}






//------------------------------------------------------------
void ReadFileAndStoreInObject(Branch& branch){//blank
}

int main()
{
	char* temp_char = new char;
	int* user_choice = new int;

	//creating blank Branch object - around which the whole program runs
	Branch branch;

	//welcome screen output
	cout << "Welcome to the Single-Branch Welfare Organization Management System!" << endl;
	cout << "Press\t" << endl;
	cout << "\t\t Y\t if your organization has already set up an account for your branch" << endl;
	cout << "\t\t N if you would like to sign up your branch for an account" << endl;

	//taking user input for initial choice
	do {
		cout << endl << "Enter here: ";
		cin.get(*temp_char);

		//input validation
		if ((*temp_char != 'Y') && (*temp_char != 'y') &&
			(*temp_char != 'N') && (*temp_char != 'n'))
		{
			cout << "Invalid input. Please try again." << endl;
		}
	} while ((*temp_char != 'Y') && (*temp_char != 'y') && (*temp_char != 'N') && (*temp_char != 'N'));

	switch (*temp_char)
	{
	case 'Y':
	{
		//storing saved branch data in object
		ReadFileAndStoreInObject(branch);
		//menu to display options
		cout << "What would you like to do? " << endl;
		//user choice stored in variable - used in if/else if later
		*user_choice = DisplayMenu();
		break;
	}
	case 'y':
	{
		//storing saved branch data in object
		ReadFileAndStoreInObject(branch);
		//menu to display options
		cout << "What would you like to do next? " << endl;
		//user choice stored in variable - used in if/else if later
		*user_choice = DisplayMenu();
		break;
	}
	case 'N':
	{
		//function to set up the basic data of the new branch
		SetUpNewBranch(branch); cout << "What would you like to do? " << endl;
		//user choice stored in variable - used in if/else if later
		*user_choice = DisplayMenu();
		break;
	}
	case 'n':
	{
		//function to set up the basic data of the new branch
		SetUpNewBranch(branch);
		cout << "What would you like to do next? " << endl;
		//user choice stored in variable - used in if/else if later
		*user_choice = DisplayMenu();
		break;
	}
	}

	do
	{
		/* modify basic branch data */
		if (*user_choice == 1)
		{
			ModifyBasicBranchData(branch);
		}

		/* modify employee data */
		else if (*user_choice == 2)
		{

			ModifyEmployeeData(branch);
		}

		/* modify manager data */
		else if (*user_choice == 3)
		{
			ModifyManagerData(branch);
		}

		/* modify vehicle data */
		else if (*user_choice == 4)
		{
			ModifyVehicleData(branch);
		}

		/* modify branch projects data */
		else if (*user_choice == 5)	//add or change branch projects data
		{
			cout << endl
				<< "-------------------------------------------------" << endl
				<< "You have selected 5 - Modify Branch Projects Data" << endl
				<< "-------------------------------------------------" << endl;

			char* temp_char_project = new char;

			cout << "Now taking orphanage data... "
				<< "\n\tTo skip to Medical Center Data, press S \n"
				<< "\tPress any other key to continue\n ";
			cin >> *temp_char_project;


			if (*temp_char_project != 'S' && *temp_char_project != 's')
			{
				int* temp_num = new int;
				cout << "Enter number of orphans: ";
				cin >> *temp_num;

				branch.branch_projects.orphanage.set_no_of_orphans(*temp_num);
				//make dynamic array
				branch.branch_projects.orphanage.make_dynamic_array(*temp_num);

				delete temp_num;

				for (int i = 0; i < branch.branch_projects.orphanage.get_no_of_orphans(); i++)
				{
					cout << "Now entering individual orphan data..." << endl;

					string* temp_orphan = new string;

					cout << "Enter orphan name: ";
					cin.ignore();
					getline(cin, *temp_orphan);

					branch.branch_projects.orphanage.Orphan_Array[i].set_name(*temp_orphan);

					cout << "Enter orphan date of birth ";
					getline(cin, *temp_orphan);

					branch.branch_projects.orphanage.Orphan_Array[i].set_date_of_birth(*temp_orphan);

					cout << "Enter orphan blood group: ";
					getline(cin, *temp_orphan);

					branch.branch_projects.orphanage.Orphan_Array[i].set_blood_group(*temp_orphan);

					delete temp_orphan;
				}
			}

			cout << "Now taking medical center data... "
				<< "\n\tTo skip, press S \n"
				<< "\tPress any other key to continue\n ";
			cin >> *temp_char_project;

			if (*temp_char_project != 'S' && *temp_char_project != 's')
			{
				int *med_cen_temp = new int;

				cout << "Enter number of doctors: ";
				cin >> *med_cen_temp;

				branch.branch_projects.medical_center.set_no_of_doctors(*med_cen_temp);

				cout << "Enter number of nurses: ";
				cin >> *med_cen_temp;

				branch.branch_projects.medical_center.set_no_of_nurses(*med_cen_temp);

				cout << "Enter number of support staff: ";
				cin >> *med_cen_temp;

				branch.branch_projects.medical_center.set_no_of_support_staff(*med_cen_temp);
			}
		}

		/* view basic branch data */
		else if (*user_choice == 6)
		{
			PrintBranchData(branch);
		}

		/* view employee data */
		else if (*user_choice == 7)
		{
			cout << "-------------------------" << endl;
			cout << "Displaying Employee Data" << endl;
			cout << "-------------------------" << endl;
			for (int i = 0; i < branch.get_number_of_employees(); i++)
			{
				PrintEmployeeData(branch, i);
			}
		}

		/* view manager data*/
		else if (*user_choice == 8)
		{
			cout << "------------------------" << endl;
			cout << "Displaying Manager Data" << endl;
			cout << "-------------------------" << endl;
			PrintManagerData(branch);
		}

		/* view vehicle data */
		else if (*user_choice == 9)	//view vehicle data
		{
			cout << "-------------------------" << endl;
			cout << "Displaying Vehicles Data" << endl;
			cout << "-------------------------" << endl;
			PrintVehiclesData(branch);
		}

		/*view branch projects data */
		else if (*user_choice == 10)
		{
			cout << "--------------------------------" << endl;
			cout << "Displaying Branch Projects Data" << endl;
			cout << "--------------------------------" << endl;
			PrintBranchProjectsData(branch);
		}

		cout << "What would you like to do next? " << endl;
		cout << "Press 99 to display menu" << endl;
		cin >> *user_choice;

		if (*user_choice == 99)
		{
			*user_choice = DisplayMenu();
		}

	} while (*user_choice != 0);

	DisplayCredits();
	return 0;

}