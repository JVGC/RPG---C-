#ifndef POTION_H
#define POTION_H

#include <iostream>
#include "Item.hpp"

using namespace std;

class Potion: public Item
{
private: 
	int restore_pts;

public:
	Potion(string name, double price, int rest_Pts);
	//~Potion();

	void get_info();
	void use();
};
#endif