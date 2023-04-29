
#ifndef Car_C_
#define Car_C_

#include "Vehicle_C.h"

using namespace std;

class Car_C : public Vehicle_C {

private:
	int numberDoors;

public:
	Car_C();
	Car_C(int);
	Car_C(string, int, int);
	int Get_Number_Doors();
	void Set_Number_Doors(int);
	void Display_Info();

};


#endif Car_C_