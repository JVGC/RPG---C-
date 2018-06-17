#ifndef INVENTORY_H
#define INVENTORY_H

#include "Item.hpp"
#include <iostream>
#include <vector>

using namespace std;

class Inventory{

private:
	int free_spaces;
	int used_spaces;
	double gold;
	vector<Item*> Itens;

public:
	Inventory();
	//~Inventory();
	double get_total_gold(){return gold;}
	int get_Avaiable_space(){return free_spaces;}
	void spend_gold(double gold){this->gold -=gold;}
	void earn_gold(double gold){this->gold += gold;}
	void set_spaces(int spaces){free_spaces += spaces;}
	void print_itens();
	bool insert_item(Item* i);
	//bool remove_item(Item* i);
	bool remove_item(string item_name);
	bool remove_item(int i);
};

#endif