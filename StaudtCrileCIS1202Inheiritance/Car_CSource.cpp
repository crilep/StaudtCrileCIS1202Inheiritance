
#include "Car_C.h"
#include<string>

//default constructor
Car_C::Car_C() : Vehicle_C() {

	numberDoors = 0;

};

//constructor #2
Car_C::Car_C(int numDoors) : Vehicle_C() {

	numberDoors = numDoors;

};

//constructor #3
Car_C::Car_C(string manu, int vehicleYear, int numDoors) : Vehicle_C(manu, vehicleYear) {

	numberDoors = numDoors;

};

//getters and setters
int Car_C::Get_Number_Doors() {

	return numberDoors;

}

void Car_C::Set_Number_Doors(int numDr) {
	
	numberDoors = numDr;

};

//display object information
void Car_C::Display_Info() {

	cout << "\n\Car Information: ";
	cout << "\nManufacturer: " << Get_Manufacturer();
	cout << "\nYear Built: " << Get_Year();
	cout << "\nDoors: " << numberDoors;

};