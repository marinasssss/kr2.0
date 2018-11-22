#pragma once
#include <string>
#include "Costume.h"
#include "Weapon.h"
#include "Movement.h"

/*	costumes:
	1 - феноменальный ум
	2 - способность к регенерации
	3 - профессиональный пилот
	4 - соблазнение
	5 - нечеловеческая скорость
	6 - гибкость
	7 - проворство
	8 - выносливость
	9 - экстрасенсорные способности
*/

/*
   weapons
   1 - кольцо зелёного фонаря
   2 - бузиная палочка
   3 - серп баффи
   4 - остроумие дедпула
   5 - кольт
   6 - отвёртка доктора
   7 - лассо правды
   8 - мьёльнир
   9 - когти росомахи
   10 - броня железного человека
*/

/*
	movements
	1 - бегает
	2 - ездит на машине
	3 - летает
*/


class SuperHero{//класс супергерой
protected:
	Costume *costumes[9];//костюмы героя
	Weapon *weapons[10];//оружие героя
	Movement *movements[3];//способы перемещения
public:
	SuperHero();
	~SuperHero();
	/*добавление оружия*/
	void addArmor();
	void addRing();
	void addClaws();
	void addColt();
	void addDeadpool();
	void addLasso();
	void addMelnir();
	void addScrewdriver();
	
	void addSickle();  
	void addStick();
	/*добавление костюмов*/
	void addAgility();
	void addEndurance();
	void addExtrasense();
	void addFlexibility();
	void addPilot();
	void addRegeneration();
	void addSpeed();
	void addSuperBrain();
	void addSeduction();
	/*добавление способности передвижения*/
	void addDrive();
	void addFly();
	void addRun();
	/*вывод в файл*/
	void fprint(const char *filename);
	/*счиытвание и файла*/
	void fread(const char *filename);
	/*вывод в консоль*/
	void print();
};