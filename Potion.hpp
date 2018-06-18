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

	int get_restPts(){ return restore_pts;}

	void get_info();
	int use();
};
#endif