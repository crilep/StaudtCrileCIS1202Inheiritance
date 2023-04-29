//Crile Staudt
//CIS 1202 101
//May 1, 2023

#include "Vehicle_C.h"
#include "Car_C.h"
#include "SUV_C.h"
#include <iostream>
#include <string>

using namespace std;

int main() {

	//local variables
	string manufactuer;
	string tempString;
	int vehicleYear;
	int numDoors;
	int gasCap;

	//get user input for vehicle object
	cout << "\n*********Vehicle Program*********\n\n";
	cout << "Enter the manufactuer: ";
	getline(cin, manufactuer);
	cout << "Enter the vehicle year: ";
	getline(cin, tempString);
	vehicleYear = stoi(tempString);

	//create vehicle object with information from the user
	Vehicle_C vehicle = Vehicle_C(manufactuer, vehicleYear);

	//display info
	vehicle.Display_Info();


	cout << "\n\n\nEnter the manufactuer: ";
	getline(cin, manufactuer);
	cout << "Enter the vehicle year: ";
	getline(cin, tempString);
	vehicleYear = stoi(tempString);
	cout << "Enter the number of doors: ";
	getline(cin, tempString);
	numDoors = stoi(tempString);

	//create car object with information provided
	Car_C car = Car_C(manufactuer, vehicleYear, numDoors);

	//display car info
	car.Display_Info();

	//get user input for SUV object
	cout << "\n\n\nEnter the manufactuer: ";
	getline(cin, manufactuer);
	cout << "Enter the vehicle year: ";
	getline(cin, tempString);
	vehicleYear = stoi(tempString);
	cout << "Number of doors: ";
	getline(cin, tempString);
	numDoors = stoi(tempString);
	cout << "Enter the gas capacity in gallons: ";
	getline(cin, tempString);
	gasCap = stoi(tempString);

	//create SUV object with info provided
	SUV_C suv = SUV_C(manufactuer, vehicleYear, numDoors, gasCap);

	//display SUV info
	suv.Display_Info();

}