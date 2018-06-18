#include <iostream>
#include "HealthPotion.hpp"

int HealthPotion::use(){
	
	cout << "HealthPotion uhulll" << endl;
	return get_restPts();
}

void HealthPotion::get_info(){

	cout <<"\tHealth Potion" << endl;
	cout << "Restore Points: " << get_restPts() << "\n" << endl;
}