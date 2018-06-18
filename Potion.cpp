#include "Potion.hpp"
#include <iostream>


void Potion::get_info(){
	cout << get_name() <<" Potion" << endl;
	cout << "Price: " << get_price() << endl;
	cout << "Restore Points: " << restore_pts << endl;

}

Potion::Potion(string name, double price, int rest_Pts) : Item(name,price){
	restore_pts = rest_Pts;
}

int Potion::use(){
	return restore_pts;
}