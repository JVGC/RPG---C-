#ifndef KNIGHT_H
#define KNIGHT_H 

#include <iostream>
#include "Character.hpp"

using namespace std;


class Knight: public Character{
	private:
		int Power;
	public:
		Knight(string name);
 		void get_info();			
		int get_attack();
		int get_defense();
};

#endif

