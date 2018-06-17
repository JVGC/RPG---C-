#include "Character.hpp"
#include <iostream>
#include <vector>

Character::Character(){
	this->name = ("Personagem");
	this->HP = 100;
	this->Mana = 100;
	this->Strenght = 0;
	this->Speed = 0;
	this->Dexterity = 0;
	MyItens = new Inventory();

}

Character::Character(string name){
	this->name = name;
	this->HP = 100;
	this->Mana = 100;
	this->Strenght = 0;
	this->Speed = 0;
	this->Dexterity = 0;
	MyItens = new Inventory();
}

void Character::set_strenght(int add){
	Strenght = add;
}

void Character::set_speed(int add){
	Speed = add;
}

void Character::set_dexterity(int add){
	Dexterity = add;
}

void Character::get_info(){
	cout << "###########################" << endl;
	cout << "#~~~~~~~~~~Ficha~~~~~~~~~~#" << endl;
	cout << "###########################" << endl;
	cout << "# Name = " << name << endl;
	cout << "# HP = " << HP << endl;
        cout <<	"# Mana =  " << Mana << endl;
	cout << "# Strenght = " << Strenght << endl;
	cout << "# Speed = " << Speed << endl;
	cout << "# Dexterity = " << Dexterity << endl;
	cout << "###########################" << endl;
}
