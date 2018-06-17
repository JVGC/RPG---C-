#include <iostream>
#include <string>
#include <vector>

#include "Knight.hpp"
#include "Wizard.hpp"
#include "Potion.hpp"


using namespace std;







///////////////////////////////////////////////////////
//                Classe Inventory		    //	
///////////////////////////////////////////////////////



//////////////////
//	MAIN	//
//////////////////
int main(){
	string nome;
	int opcao;
	
	///////////////////////////////////////////////////////////
	//	Setando caracteristicas do personagem 		//
	///////////////////////////////////////////////////////////
	cout << "================================================" << endl;
	cout << "Entre com o nome do seu personagem: ";
	cin >> nome;
	cout << "================================================" << endl;

	cout << "================================================" << endl;
	cout << "Seu personagem será um Knight ou Wizard? " << endl; 
	cout << "Digite 1 para Knight." << endl;
	cout << "Digite 2 para Wizard." << endl; 
	cout << "Entre com a opção: ";  
	cin >> opcao;
	cout << "================================================" << endl;

	while(opcao != 1 && opcao != 2){
		cout << "Opcao invalida, entre novamente com um dado válido: " << endl;
		cin >> opcao;
	}

	if(opcao == 1){
		Potion p("mana", 50, 100);
		Knight ch(nome);
		ch.set_strenght(35);
		ch.set_speed(25);
		ch.set_dexterity(20);
		ch.get_Inventory()->insert_item(&p);
		ch.get_info();
	}
	else if(opcao == 2){
		Wizard wz(nome);
		wz.set_strenght(23);
		wz.set_speed(25);
		wz.set_dexterity(37);
		wz.get_info();
	}

return 0;
}
