
#include "Vehicle_C.h"
#include<iostream>

//defualt constructor
Vehicle_C::Vehicle_C() {

	manufacturer = "";
	year = 0;

};

//constructor #2
Vehicle_C::Vehicle_C(string vehicleManu, int vechicleYear) {

	manufacturer = vehicleManu;
	year = vechicleYear;

};

//getters and setters
string Vehicle_C::Get_Manufacturer() {

	return manufacturer;

};

int Vehicle_C::Get_Year() {

	return year;

};

void Vehicle_C::Set_Manufacturer(string vehicleManu) {

	manufacturer = vehicleManu;

};

void Vehicle_C::Set_Year(int vechicleYear) {

	year = vechicleYear;

};

//display information
void Vehicle_C::Display_Info() {

	cout << "\n\nVehicle Information: ";
	cout << "\nManufacturer: " << manufacturer;
	cout << "\nYear Built: " << year;

};
