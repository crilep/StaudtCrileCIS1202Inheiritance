#pragma once
#ifndef Vehicle_C_

#define Vehicle_C_

#include<iostream>
#include<string>

using namespace std;

class Vehicle_C {

	private:
		string manufacturer;
		int year;

	public:
		Vehicle_C();
		Vehicle_C(string, int);

		string Get_Manufacturer();
		int Get_Year();

		void Set_Manufacturer(string);
		void Set_Year(int);

		void Display_Info();

};

#endif Vehicle_C_