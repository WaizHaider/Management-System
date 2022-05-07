#pragma once
#include <string>
using std::string;

class Ambulance
{
private:
	string color,
		registration_no;
	int seating_capacity;

public:
	//default constructor
	Ambulance();

	//function to store all ambulance data in a file
    void StoreAllAmbulanceDataInFile();

	//setter functions
	void set_registration_no(string reg_no);
	void set_color(string col);
	void set_seating_capacity(int seat_cap);

	//getter functions
	string get_registration_no()const;
	string get_color()const;
	int get_seating_capacity()const;
};