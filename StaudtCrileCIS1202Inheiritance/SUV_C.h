#pragma once
#ifndef SUV_C_

#define SUV_C_

#include "Car_C.h"

using namespace std;

class SUV_C : public Car_C {

private:
	int gasCapacity;

public:
	SUV_C();
	SUV_C(int);
	SUV_C(string, int, int, int);

	int Get_Gas_Capacity();
	void Set_Gas_Capacity(int);

	void Display_Info();


};

#endif SUV_C_