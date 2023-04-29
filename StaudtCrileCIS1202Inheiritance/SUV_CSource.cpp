#include "SUV_C.h"

SUV_C::SUV_C() : Car_C() {

	gasCapacity = 0;

};

SUV_C::SUV_C(int gas) : Car_C() {

	gasCapacity = gas;

};

SUV_C::SUV_C(string manu, int vehicleYear, int numDoors, int gasCap) : Car_C(manu, vehicleYear, numDoors) {

	gasCapacity = gasCap;

};

int SUV_C::Get_Gas_Capacity() {

	return gasCapacity;

};


void SUV_C::Set_Gas_Capacity(int gasCap) {

	gasCapacity = gasCap;

}

void SUV_C::Display_Info() {

	cout << "\n\Car Information: ";
	cout << "\nManufacturer: " << Get_Manufacturer();
	cout << "\nYear Built: " << Get_Year();
	cout << "\nDoors: " << Get_Number_Doors();
	cout << "\nGas Capacity in Gallons: " << gasCapacity;

};