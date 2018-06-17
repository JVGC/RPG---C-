#ifndef ITEM_H
#define ITEM_H

#include <iostream>
using namespace std;

class Item
{
private:
	string name;
	double price;

public:
	//Item();
	Item(string name, double price);
	// /~Item();

	string get_name(){ return name;}
	double get_price() { return price;}
	void set_name(string name){this->name = name;}
	void set_price(double price){ this->price = price;}

	virtual void get_info(){};
	
	// virtual void use(){}
	// virtual int get_defense_Pts() {}
	// virtual int get_attack_Pts(){}

};


#endif