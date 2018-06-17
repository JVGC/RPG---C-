#include "Inventory.hpp"

#include <iostream>


Inventory::Inventory(){
	free_spaces = 20;
	used_spaces = 0;
	gold = 500;
}

void Inventory::print_itens(){
	
	//cout << "size:" << Itens.size() << endl;
	//cout << free_spaces;
	for(int i = 0; i != Itens.size(); i++){

		Itens[i]->get_info();
	}

}

bool Inventory::insert_item(Item* i){
	if(free_spaces == 0){
		
		return false;
	}

	//cout << "inserindo" << endl;
	
	Itens.push_back(i);
	//out << Itens.size();
	//Itens.push_back(i);
	return true;

}