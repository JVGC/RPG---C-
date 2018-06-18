#include "ManaPotion.hpp"
#include <iostream>


int ManaPotion::use(){
	cout << "ManaPotion uhulll" << endl;
	return get_restPts();
}

void ManaPotion::get_info(){
	cout << "\tMana Potion" << endl;
	cout << "Restore Points: " << get_restPts()<< "\n" << endl; 

}