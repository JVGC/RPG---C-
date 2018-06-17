#ifndef CHARACTER_H
#define CHARACTER_H 

#include <iostream>
using namespace std;

#include "Inventory.hpp"



class Character{
	private:
		string name;
		int HP;
		int Mana;


		int Strenght;
		int Speed;
		int Dexterity;
		//Item* equipped;
		Inventory* MyItens;

	public:
		//Setando atributos: 
		Character();
		Character(string name);
		virtual void get_info();			
		void set_strenght(int add);
		void set_speed(int add);
		void set_dexterity(int add);
		void addHP(int some){
			if((HP += some) > 100)
				HP = 100;
			else
				HP += some;
		};
		void addMana(int some){
			if((Mana += some) > 100)
				Mana = 100;
			else
				Mana += some;	
		};
		string get_name() { return name; } 
		int get_HP() { return HP; } 
		int get_Mana() { return Mana; } 
		int get_Strenght() { return Strenght; } 
		int get_Speed() { return Speed; } 
		int get_Dexterity() { return Dexterity; }
		Inventory* get_Inventory() { return MyItens;}

		//Jogabilidade:
};
#endif