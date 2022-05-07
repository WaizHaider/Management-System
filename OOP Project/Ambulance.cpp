#include "Ambulance.h"
#include <fstream>

//constructor
Ambulance::Ambulance()
{
	registration_no = "";
	color = "";
	seating_capacity = 0;
}

//setter functions
void Ambulance::set_registration_no(string registration_no)
{
	this->registration_no = registration_no;
}
void Ambulance::set_color(string color)
{
    this-> color = color;
}
void Ambulance::set_seating_capacity(int seating_capacity)
{
    this-> seating_capacity = seating_capacity;
}

//getter functions
string Ambulance::get_registration_no()const
{
    return registration_no;
}
string Ambulance::get_color()const
{
    return color;
}
int Ambulance::get_seating_capacity()const
{
    return seating_capacity;
}

//function to store all ambulance data in file
void Ambulance::StoreAllAmbulanceDataInFile()
{
    std::ofstream ambulance("Ambulance.txt",std::ofstream::out);
	ambulance << registration_no << std::endl;
	ambulance << color << std::endl;
	ambulance << seating_capacity << std::endl;
    ambulance.close();
}