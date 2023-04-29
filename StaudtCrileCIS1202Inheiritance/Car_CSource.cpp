

#include "Car_C.h"
#include<string>

Car_C::Car_C() : Vehicle_C() {

	numberDoors = 0;

};

Car_C::Car_C(int numDoors) : Vehicle_C() {

	numberDoors = numDoors;

};

Car_C::Car_C(string manu, int vehicleYear, int numDoors) : Vehicle_C(manu, vehicleYear) {

	numberDoors = numDoors;

};

int Car_C::Get_Number_Doors() {

	return numberDoors;

}

void Car_C::Display_Info() {

	cout << "\n\Car Information: ";
	cout << "\nManufacturer: " << Get_Manufacturer();
	cout << "\nYear Built: " << Get_Year();
	cout << "\nDoors: " << numberDoors;

};