#include "Knight.hpp"


Knight::Knight(string name) : Character(name){
	this->Power = 42;
}

void Knight::get_info(){
	cout << "###########################" << endl;
	cout << "#~~~~~~~Ficha~Knight~~~~~~#" << endl;
	cout << "###########################" << endl;
	cout << "# Name = " << get_name() << endl;
	cout << "# HP = " << get_HP() << endl;
        cout <<	"# Mana =  " << get_Mana() << endl;
	cout << "# Strenght = " << get_Strenght() << endl;
	cout << "# Speed = " << get_Speed() << endl;
	cout << "# Dexterity = " << get_Dexterity() << endl;
	cout << "# Power = " << Power << endl;
	cout << "Inventory: " << endl;
	get_Inventory()->print_itens();

	cout << "###########################" << endl;
}