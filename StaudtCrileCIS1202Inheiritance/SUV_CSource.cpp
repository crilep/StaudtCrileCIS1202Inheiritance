#include "SUV_C.h"

//default constructor
SUV_C::SUV_C() : Car_C() {

	gasCapacity = 0;

};

//constructor #2
SUV_C::SUV_C(int gas) : Car_C() {

	gasCapacity = gas;

};

//constructor #3
SUV_C::SUV_C(string manu, int vehicleYear, int numDoors, int gasCap) : Car_C(manu, vehicleYear, numDoors) {

	gasCapacity = gasCap;

};

//getter and setter
int SUV_C::Get_Gas_Capacity() {

	return gasCapacity;

};


void SUV_C::Set_Gas_Capacity(int gasCap) {

	gasCapacity = gasCap;

}

//display information
void SUV_C::Display_Info() {

	cout << "\n\Car Information: ";
	cout << "\nManufacturer: " << Get_Manufacturer();
	cout << "\nYear Built: " << Get_Year();
	cout << "\nDoors: " << Get_Number_Doors();
	cout << "\nGas Capacity in Gallons: " << gasCapacity;

};