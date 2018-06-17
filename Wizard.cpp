#include "Wizard.hpp"
#include <iostream>


Wizard::Wizard(string name) : Character(name){
	this->Wisdom = 42;
}

void Wizard::get_info(){
	cout << "###########################" << endl;
	cout << "#~~~~~~Ficha~Wizard~~~~~~~#" << endl;
	cout << "###########################" << endl;
	cout << "# Name = " << get_name() << endl;
	cout << "# HP = " << get_HP() << endl;
        cout <<	"# Mana =  " << get_Mana() << endl;
	cout << "# Strenght = " << get_Strenght() << endl;
	cout << "# Speed = " << get_Speed() << endl;
	cout << "# Dexterity = " << get_Dexterity() << endl;
	cout << "# Wisdom = " << Wisdom << endl;
	cout << "###########################" << endl;
}
