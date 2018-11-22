#pragma once
#include <string>
#include "Costume.h"
#include "Weapon.h"
#include "Movement.h"

/*	costumes:
	1 - ������������� ��
	2 - ����������� � �����������
	3 - ���������������� �����
	4 - �����������
	5 - �������������� ��������
	6 - ��������
	7 - ����������
	8 - ������������
	9 - ��������������� �����������
*/

/*
   weapons
   1 - ������ ������� ������
   2 - ������� �������
   3 - ���� �����
   4 - ��������� �������
   5 - �����
   6 - ������� �������
   7 - ����� ������
   8 - ��������
   9 - ����� ��������
   10 - ����� ��������� ��������
*/

/*
	movements
	1 - ������
	2 - ����� �� ������
	3 - ������
*/


class SuperHero{//����� ����������
protected:
	Costume *costumes[9];//������� �����
	Weapon *weapons[10];//������ �����
	Movement *movements[3];//������� �����������
public:
	SuperHero();
	~SuperHero();
	/*���������� ������*/
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
	/*���������� ��������*/
	void addAgility();
	void addEndurance();
	void addExtrasense();
	void addFlexibility();
	void addPilot();
	void addRegeneration();
	void addSpeed();
	void addSuperBrain();
	void addSeduction();
	/*���������� ����������� ������������*/
	void addDrive();
	void addFly();
	void addRun();
	/*����� � ����*/
	void fprint(const char *filename);
	/*���������� � �����*/
	void fread(const char *filename);
	/*����� � �������*/
	void print();
};