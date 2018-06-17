#ifndef WIZARD_H
#define WIZARD_H

#include "Character.hpp"
#include <iostream>

using namespace std;

class Wizard: public Character{
	private:
		int Wisdom;
	public:
		Wizard(string name);
		void get_info();
};

#endif