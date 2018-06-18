#ifndef MANA_POTION_H
#define MANA_POTION_H 

#include <iostream>
#include "Potion.hpp"

class ManaPotion : public Potion
{
public:
	ManaPotion(string name, double price, int rest_Pts) : Potion(name, price, rest_Pts){}
	//~ManaPotion();
	int use();
	void get_info();
	
};


#endif