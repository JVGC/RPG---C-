objects = jogo.o Character.o Knight.o Wizard.o Item.o Potion.o Inventory.o ManaPotion.o HealthPotion.o Weapon.o

all: $(objects)
	g++ -o jogo $(objects) -g

jogo.o: jogo.cpp Knight.hpp Wizard.hpp ManaPotion.hpp Weapon.hpp
	g++ -c jogo.cpp

Character.o: Character.hpp Character.cpp Inventory.hpp
	g++ -c Character.cpp

Inventory.o: Inventory.hpp Inventory.cpp Item.hpp
	g++ -c Inventory.cpp

Item.o: Item.hpp Item.cpp
	g++ -c Item.cpp

Knight.o: Knight.hpp Knight.cpp Character.hpp
	g++ -c Knight.cpp

Wizard.o:   Character.hpp
	g++ -c Wizard.cpp

Potion.o: Potion.hpp Potion.cpp Item.hpp
	g++ -c Potion.cpp

ManaPotion.o: ManaPotion.hpp ManaPotion.cpp Potion.hpp
	g++ -c ManaPotion.cpp

HealthPotion.o: HealthPotion.hpp HealthPotion.cpp Potion.hpp
	g++ -c HealthPotion.cpp

Weapon.o: Weapon.hpp Weapon.cpp Item.hpp
	g++ -c Weapon.cpp
clean:
	rm *.o jogo

zip:
	zip RPGgame.zip jogo.cpp Character.hpp Character.cpp Inventory.hpp Inventory.cpp Item.hpp Item.cpp Knight.hpp Knight.cpp Wizard.hpp Wizard.cpp Potion.hpp Potion.cpp HealthPotion.hpp HealthPotion.cpp ManaPotion.hpp ManaPotion.cpp Makefile

run:
	./jogo
