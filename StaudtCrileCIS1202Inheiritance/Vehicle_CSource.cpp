
#include "Vehicle_C.h"
#include<iostream>

Vehicle_C::Vehicle_C() {

	manufacturer = "";
	year = 0;

};

Vehicle_C::Vehicle_C(string vehicleManu, int vechicleYear) {

	manufacturer = vehicleManu;
	year = vechicleYear;

};

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

void Vehicle_C::Display_Info() {

	cout << "\n\nVehicle Information: ";
	cout << "\nManufacturer: " << manufacturer;
	cout << "\nYear Built: " << year;

};
