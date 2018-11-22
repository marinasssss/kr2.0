#include "stdafx.h"

using namespace std;

//���� ������ �����
void newHero(SuperHero *&hero){
	 delete hero;
	 hero = new SuperHero();
	 int a;
	 
	 while(true){
		 system("cls");
		 cout << "�������� �������: ";
		 cout << "\n0 - �����";
		 cout << "\n1 - ������������� ��";
		 cout << "\n2 - ����������� � �����������";
		 cout << "\n3 - ���������������� �����";
		 cout << "\n4 - �����������";
		 cout << "\n5 - �������������� ��������";
		 cout << "\n6 - ��������";
		 cout << "\n7 - ����������";
		 cout << "\n8 - ������������";
		 cout << "\n9 - ��������������� �����������\n";
		 cin >> a;
		 if(a == 0){
			break;
		 }
		 else if(a == 1){
			 try{
				hero->addSuperBrain();
			 }
			 catch(const exception& exc){
				cout << exc.what() << '\n';
				system("pause");
			 }
		 }
		 else if(a == 2){
			 try{
				hero->addRegeneration();
			 }
			 catch(const exception& exc){
				cout << exc.what() << '\n';
				system("pause");
			 }
		 }
		 else if(a == 3){
			 try{
				hero->addPilot();
			}
			 catch(const exception& exc){
				cout << exc.what() << '\n';
				system("pause");
			 }
		 }
		 else if(a == 4){
			 try{
				hero->addSeduction();
			}
			 catch(const exception& exc){
				cout << exc.what() << '\n';
				system("pause");
			 }
		 }
		 else if(a == 5){
			 try{
				hero->addSpeed();
			 }
			 catch(const exception& exc){
				cout << exc.what() << '\n';
				system("pause");
			 }
		 }
		 else if(a == 6){
			 try{
				hero->addFlexibility();
			 }
			 catch(const exception& exc){
				cout << exc.what() << '\n';
				system("pause");
			 }
		 }
		 else if(a == 7){
			 try{
				hero->addAgility();
			}
			 catch(const exception& exc){
				cout << exc.what() << '\n';
				system("pause");
			 }
		 }
		 else if(a == 8){
			 try{
				hero->addEndurance();
			}
			 catch(const exception& exc){
				cout << exc.what() << '\n';
				system("pause");
			 }
		 }
		 else if(a == 9){
			 try{
				hero->addExtrasense();
			 }
			 catch(const exception& exc){
				cout << exc.what() << '\n';
				system("pause");
			 }
		 }
	 }

	 while(true){
		 system("cls");
		 cout << "�������� ������: ";
		 cout << "\n0 - �����";
		 cout << "\n1 - ������ ������� ������";
		 cout << "\n2 - ������� �������";
		 cout << "\n3 - ���� �����";
		 cout << "\n4 - ��������� �������";
		 cout << "\n5 - �����";
		 cout << "\n6 - ������� �������";
		 cout << "\n7 - ����� ������";
		 cout << "\n8 - ��������";
		 cout << "\n9 - ����� ��������";
		 cout << "\n10 - ����� ��������� ��������\n";
		 cin >> a;
		 if(a == 0){
			break;
		 }
		 else if(a == 1){
			 try{
				hero->addRing();
			 }
			 catch(const exception& exc){
				cout << exc.what() << '\n';
				system("pause");
			 }
		 }
		 else if(a == 2){
			 try{
				hero->addStick();
			 }
			 catch(const exception& exc){
				cout << exc.what() << '\n';
				system("pause");
			 }
		 }
		 else if(a == 3){
			 try{
				hero->addSickle();
			}
			 catch(const exception& exc){
				cout << exc.what() << '\n';
				system("pause");
			 }
		 }
		 else if(a == 4){
			 try{
				hero->addDeadpool();
			}
			 catch(const exception& exc){
				cout << exc.what() << '\n';
				system("pause");
			 }
		 }
		 else if(a == 5){
			 try{
				hero->addColt();
			 }
			 catch(const exception& exc){
				cout << exc.what() << '\n';
				system("pause");
			 }
		 }
		 else if(a == 6){
			 try{
				hero->addScrewdriver();
			 }
			 catch(const exception& exc){
				cout << exc.what() << '\n';
				system("pause");
			 }
		 }
		 else if(a == 7){
			 try{
				hero->addLasso();
			}
			 catch(const exception& exc){
				cout << exc.what() << '\n';
				system("pause");
			 }
		 }
		 else if(a == 8){
			 try{
				hero->addMelnir();
			}
			 catch(const exception& exc){
				cout << exc.what() << '\n';
				system("pause");
			 }
		 }
		 else if(a == 9){
			 try{
				hero->addClaws();
			 }
			 catch(const exception& exc){
				cout << exc.what() << '\n';
				system("pause");
			 }
		 }
		 else if(a == 10){
			 try{
				hero->addArmor();
			 }
			 catch(const exception& exc){
				cout << exc.what() << '\n';
				system("pause");
			 }
		 }
	 }

	 while(true){
		 system("cls");
		 cout << "�������� ������ ������������: ";
		 cout << "\n0 - �����";
		 cout << "\n1 - ������";
		 cout << "\n2 - ����� �� ������";
		 cout << "\n3 - ������\n";
		 cin >> a;
		 if(a == 0){
			break;
		 }
		 else if(a == 1){
			 try{
				hero->addRun();
			 }
			 catch(const exception& exc){
				cout << exc.what() << '\n';
				system("pause");
			 }
		 }
		 else if(a == 2){
			 try{
				hero->addDrive();
			 }
			 catch(const exception& exc){
				cout << exc.what() << '\n';
				system("pause");
			 }
		 }
		 else if(a == 3){
			 try{
				hero->addFly();
			}
			 catch(const exception& exc){
				cout << exc.what() << '\n';
				system("pause");
			 }
		 }
	 }
}

int main(){
	setlocale(LC_ALL, "");
	//4 �����
	SuperHero *frist = new SuperHero(), *second = new SuperHero(), *third = new SuperHero(), *fourth = new SuperHero();
	int a;
	int b;
	//����
	while(true){
		system("cls");
		cout << "1 - ����� �����";
		cout << "\n2 - ���������� �����";
		cout << "\n3 - ��������� �����";
		cout << "\n4 - ��������� �����\n";
		cin >> a;
		system("cls");
		cout << "1 - ����� �1";
		cout << "\n2 - ����� �2";
		cout << "\n3 - ����� �3";
		cout << "\n4 - ����� �4\n";
		cin >> b;
		if(a == 1){
			switch(b){
			case 1:
				newHero(frist);
				break;
			case 2:
				newHero(second);
				break;
			case 3:
				newHero(third);
				break;
			case 4:
				newHero(fourth);
				break;
			}
		}
		else if(a == 2){
		   switch(b){
			case 1:
				if(frist != nullptr)
					frist->print();
				break;
			case 2:
				if(second != nullptr)
					second->print();
				break;
			case 3:
				if(third != nullptr)
					third->print();
				break;
			case 4:
				if(fourth != nullptr)
					fourth->print();
				break;
			}
		   cout << '\n';
		   system("pause");
		}
		else if(a == 3){
		  switch(b){
			case 1:
				if(frist != nullptr)
					frist->fprint("first.txt");
				break;
			case 2:
				if(second != nullptr)
					second->fprint("second.txt");
				break;
			case 3:
				if(third != nullptr)
					third->fprint("third.txt");
				break;
			case 4:
				if(fourth != nullptr)
					fourth->fprint("fourth.txt");
				break;
			}
		}
		else if(a == 4){
			switch(b){
			case 1:
				if(frist != nullptr)
					frist->fread("first.txt");
				break;
			case 2:
				if(second != nullptr)
					second->fread("second.txt");
				break;
			case 3:
				if(third != nullptr)
					third->fread("third.txt");
				break;
			case 4:
				if(fourth != nullptr)
					fourth->fread("fourth.txt");
				break;
			}

		}
		else{
			return 0;
		}
	}
}