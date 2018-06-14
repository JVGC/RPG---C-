#include <iostream>
#include <string>

using namespace std;

///////////////////////////////////////////////////////
//                Classe Character    		     //	
///////////////////////////////////////////////////////
class Character{
	private:
		string name;
		int HP;
		int Mana;

		int Strenght;
		int Speed;
		int Dexterity;
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
		//Jogabilidade:
};
Character::Character(){
	this->name = ("Personagem");
	this->HP = 100;
	this->Mana = 100;
	this->Strenght = 0;
	this->Speed = 0;
	this->Dexterity = 0;
}

Character::Character(string name){
	this->name = name;
	this->HP = 100;
	this->Mana = 100;
	this->Strenght = 0;
	this->Speed = 0;
	this->Dexterity = 0;
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
	cout << "# Name = " << name << endl;
	cout << "# HP = " << HP << endl;
        cout <<	"# Mana =  " << Mana << endl;
	cout << "# Strenght = " << Strenght << endl;
	cout << "# Speed = " << Speed << endl;
	cout << "# Dexterity = " << Dexterity << endl;
	cout << "###########################" << endl;
}

///////////////////////////////////////////////////////
//                Classe Knight			    //	
///////////////////////////////////////////////////////
class Knight: public Character{
	private:
		int Power;
	public:
		Knight(string name);
 		void get_info();			
		int get_attack();
		int get_defense();
};

Knight::Knight(string name) : Character(name){
	this->Power = 42;
}

void Knight::get_info(){
	cout << "###########################" << endl;
	cout << "#~~~~~~~Ficha~Knight~~~~~~#" << endl;
	cout << "# Name = " << get_name() << endl;
	cout << "# HP = " << get_HP() << endl;
        cout <<	"# Mana =  " << get_Mana() << endl;
	cout << "# Strenght = " << get_Strenght() << endl;
	cout << "# Speed = " << get_Speed() << endl;
	cout << "# Dexterity = " << get_Dexterity() << endl;
	cout << "# Power = " << Power << endl;
	cout << "###########################" << endl;
}

///////////////////////////////////////////////////////
//                Classe Wizard			    //	
///////////////////////////////////////////////////////
class Wizard: public Character{
	private:
		int Wisdom;
	public:
		Wizard(string name);
		void get_info();
};

Wizard::Wizard(string name) : Character(name){
	this->Wisdom = 42;
}

void Wizard::get_info(){
	cout << "###########################" << endl;
	cout << "#~~~~~~Ficha~Wizard~~~~~~~#" << endl;
	cout << "# Name = " << get_name() << endl;
	cout << "# HP = " << get_HP() << endl;
        cout <<	"# Mana =  " << get_Mana() << endl;
	cout << "# Strenght = " << get_Strenght() << endl;
	cout << "# Speed = " << get_Speed() << endl;
	cout << "# Dexterity = " << get_Dexterity() << endl;
	cout << "# Wisdom = " << Wisdom << endl;
	cout << "###########################" << endl;
}

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
		Knight ch(nome);
		ch.set_strenght(35);
		ch.set_speed(25);
		ch.set_dexterity(20);
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
