#include "stdafx.h"

SuperHero::SuperHero(){
	//заполняем все массивы null
	for(int i = 0; i < 9; ++i){
		costumes[i] = nullptr;
	}
	for(int i = 0; i < 10; ++i){
		weapons[i] = nullptr;
	}
	for(int i = 0; i < 3; ++i){
		movements[i] = nullptr;
	}
}

SuperHero::~SuperHero(){
	for(int i = 0; i < 9; ++i){
		delete costumes[i];
	}
	for(int i = 0; i < 10; ++i){
		delete weapons[i];
	}
	for(int i = 0; i < 3; ++i){
		delete movements[i];
	}
}


/*добавление оружия*/
void SuperHero::addArmor(){
   if(weapons[9] == nullptr){
		weapons[9] = new Armor();
	 }
}
void SuperHero::addRing(){
	if(weapons[0] == nullptr){
		weapons[0] = new Ring();
	 }
}
void SuperHero::addClaws(){
	if(weapons[8] == nullptr){
		weapons[8] = new Claws();
	 }
}
void SuperHero::addColt(){
	if(weapons[4] == nullptr){
		weapons[4] = new Colt();
	 }
}
void SuperHero::addDeadpool(){
	if(weapons[3] == nullptr){
		weapons[3] = new Deadpool();
	 }
}
void SuperHero::addLasso(){
	if(weapons[6] == nullptr){
		weapons[6] = new Lasso();
	 }
}
void SuperHero::addMelnir(){
	if(weapons[7] == nullptr){
		weapons[7] = new Melnir();
	 }
}
void SuperHero::addScrewdriver(){
	if(weapons[5] == nullptr){
		weapons[5] = new Screwdriver();
	 }
}

void SuperHero::addSickle(){
	 if(weapons[2] == nullptr){
		weapons[2] = new Sickle();
	 }
}
void SuperHero::addStick(){
	if(weapons[1] == nullptr){
		weapons[1] = new Stick();
	 }
}
/*добавление костюмов*/

void SuperHero::addSeduction(){
	if(costumes[3] == nullptr){
		costumes[3] = new Seduction();
	 }
}
void SuperHero::addAgility(){
	if(costumes[6] == nullptr){
		costumes[6] = new Agility();
	 }
}
void SuperHero::addEndurance(){
	if(costumes[7] == nullptr){
		costumes[7] = new Endurance();
	 }
}
void SuperHero::addExtrasense(){
	 if(costumes[8] == nullptr){
		costumes[8] = new Extrasense();
	 }
}
void SuperHero::addFlexibility(){
	 if(costumes[5] == nullptr){
		costumes[5] = new Flexibility();
	 }
}
void SuperHero::addPilot(){
	 if(costumes[2] == nullptr){
		costumes[2] = new Pilot();
	 }
}
void SuperHero::addRegeneration(){
	 if(costumes[1] == nullptr){
		costumes[1] = new Regeneration();
	 }
}
void SuperHero::addSpeed(){
	if(costumes[4] == nullptr){
		costumes[4] = new Speed();
	 }
}
void SuperHero::addSuperBrain(){
	 if(costumes[0] == nullptr){
		costumes[0] = new SuperBrain();
	 }
}
/*добавление способности передвижения*/
void SuperHero::addDrive(){
	if(movements[1] == nullptr){
		movements[1] = new Drive();
	}
}

void SuperHero::addFly(){
	if(movements[2] == nullptr){
		movements[2] = new Fly();
	}
}

void SuperHero::addRun(){
	if(movements[0] == nullptr){
		movements[0] = new Run();
	}
}

#include <fstream> 
/*вывод в файл*/
void SuperHero::fprint(const char *filename){
	 std::ofstream out(filename);
	for(int i = 0; i < 9; ++i){
		out <<  (costumes[i] == nullptr) << ' ';
	}
	out << '\n';
	for(int i = 0; i < 10; ++i){
		out <<  (weapons[i] == nullptr) << ' ';
	}
	out << '\n';
	for(int i = 0; i < 3; ++i){
		out <<  (movements[i] == nullptr) << ' ';
	}
	out.close();
}

/*счиытвание и файла*/
void SuperHero::fread(const char *filename){
	 std::ifstream in(filename);
	 bool flag;
	 for(int i = 0; i < 9; ++i){
		 in >> flag;
		switch(i){
			case 0:
				if(flag)
					costumes[i] = new SuperBrain(); 
				break;
			case 1:
				if(flag)
					costumes[i] = new Regeneration(); 
				break;
			case 2:
				if(flag)
					costumes[i] = new Pilot(); 
				break;
			case 3:
				if(flag)
					costumes[i] = new Seduction(); 
				break;
			case 4:
				if(flag)
					costumes[i] = new Speed(); 
				break;
			case 5:
				if(flag)
					costumes[i] = new Flexibility(); 
				break;
			case 6:
				if(flag)
					costumes[i] = new Agility(); 
				break;
			case 7:
				if(flag)
					costumes[i] = new Endurance(); 
				break;
			case 8:
				if(flag)
					costumes[i] = new Extrasense(); 
				break;
	    }
	}
	for(int i = 0; i < 10; ++i){
		in >> flag;
		switch(i){
			case 0:
				if(flag)
					weapons[i] = new Ring(); 
				break;
			case 1:
				if(flag)
					weapons[i] = new Stick(); 
				break;
			case 2:
				if(flag)
					weapons[i] = new Sickle(); 
				break;
			case 3:
				if(flag)
					weapons[i] = new Deadpool(); 
				break;
			case 4:
				if(flag)
					weapons[i] = new Colt(); 
				break;
			case 5:
				if(flag)
					weapons[i] = new Screwdriver(); 
				break;
			case 6:
				if(flag)
					weapons[i] = new Lasso();
				break;
			case 7:
				if(flag)
					weapons[i] = new Melnir(); 
				break;
			case 8:
				if(flag)
					weapons[i] = new Claws();
				break;
			case 9:
				if(flag)
					weapons[i] = new Armor(); 
				break;
	    }
	}
	for(int i = 0; i < 3; ++i){
		in >> flag;
		switch(i){
			case 0:
				if(flag)
					movements[i] = new Run(); 
				break;
			case 1:
				if(flag)
					movements[i] = new Drive(); 
				break;
			case 2:
				if(flag)
					movements[i] = new Fly(); 
				break;
	    }
	}
	in.close();
}
/*вывод в консоль*/
void SuperHero::print(){
	std::cout << "Костюмы:\n";
	for(int i = 0; i < 9; ++i){
		if(costumes[i] != nullptr)
			std::cout << costumes[i]->getCostume() << '\n';
	}
	std::cout << "Оружие:\n";
	for(int i = 0; i < 10; ++i){
		if(weapons[i] != nullptr)
			std::cout << weapons[i]->getWeapon() << '\n';
	}
	std::cout << "Способы передвижения:\n";
	for(int i = 0; i < 3; ++i){
		if(movements[i] != nullptr)
			std::cout << movements[i]->getMovement() << '\n';
	}
}