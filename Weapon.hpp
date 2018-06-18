#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include "Item.hpp"

class Weapon : public Item{
private:
	int StrenghtBonus;
	int SpeedBonus;
	int DexterityBonus;

public:
	Weapon(string name, double price) : Item(name, price){}
	//~Weapon();
	int get_StrenghtBonus(){ return StrenghtBonus;}
	int get_SpeedBonus(){ return SpeedBonus;}
	int get_DexterityBonus(){ return DexterityBonus;}


	void setBonus(int strenght, int speed, int dexterity);
	void set_StrenghtBonus(int str_bonus);
	void set_SpeedBonus(int speed_bonus);
	void set_DexterityBonus(int dex_bonus);

	virtual void get_info();
};

class Axe : public Weapon{
	bool two_hands; // Indica se o Machado é de duas mãos
	// os bonus podem ser positivos, negativos e até 0
	int weight; // Peso do machado. Se for de duas mãos, seu peso é maior

public:
	Axe(string name, double price, bool two_hands) : Weapon(name, price){this->two_hands = two_hands;}
	//~Axe();
	bool get_two_hands(){return two_hands;} // Indica se o Machado é de duas mãos

	void get_info();
	

	
};


#endif