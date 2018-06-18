#include "Weapon.hpp"
#include <iostream>

void Weapon::get_info(){
	cout << "\tWeapon" << endl;
	cout << "StrenghtBonus: " << StrenghtBonus << "\n" << endl; 

}

void Axe::get_info(){
	if(this->two_hands == true)
		cout << "\tTwo-Hands Axe" << endl;
	else
		cout << "Normal Axe" << endl;
	if(get_StrenghtBonus() != 0){
		cout << "Strenght Bonus: " << get_StrenghtBonus() << endl;
	}
	if(get_SpeedBonus() != 0){
		cout << "Speed Bonus: " << get_SpeedBonus() << endl;
	}
	if(get_DexterityBonus() != 0){
		cout << "Dexterity Bonus: " << get_DexterityBonus() << endl;
	}

}

void Weapon::setBonus(int strenght, int speed, int dexterity){
	this->StrenghtBonus = strenght;
	this->SpeedBonus = speed;
	this->DexterityBonus = dexterity;
}