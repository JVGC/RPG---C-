#ifndef HEALTH_POTION_H
#define HEALTH_POTION_H

#include <iostream>
#include "Potion.hpp"

class HealthPotion : public Potion
{
public:
	HealthPotion(string name, double price, int rest_Pts) : Potion(name, price, rest_Pts){}
	//~HealthPotion();
	int use();
	void get_info();
	
};


#endif