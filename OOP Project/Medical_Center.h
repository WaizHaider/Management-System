#pragma once


class Medical_Center
{
private:
	int no_of_doctors,			//individual data of staff will be stored in Employees_Array
		no_of_nurses,
		no_of_support_staff;

public:
	//default constructor - sets all to 0
	Medical_Center();

    //function to store all medical center data in file
    void StoreAllMedicalCenterDataInFile();

    //setter functions            
    void set_no_of_doctors(int num_d);
    void set_no_of_nurses(int num_n);
    void set_no_of_support_staff(int num_ss);

    //getter function
    int get_no_of_doctors()const;
    int get_no_of_nurses()const;
    int get_no_of_support_staff()const;
};

