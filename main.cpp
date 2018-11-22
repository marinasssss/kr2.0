#include "stdafx.h"

using namespace std;

//меню нового нероя
void newHero(SuperHero *&hero){
	 delete hero;
	 hero = new SuperHero();
	 int a;
	 
	 while(true){
		 system("cls");
		 cout << "Выберите костюмы: ";
		 cout << "\n0 - выход";
		 cout << "\n1 - феноменальный ум";
		 cout << "\n2 - способность к регенерации";
		 cout << "\n3 - профессиональный пилот";
		 cout << "\n4 - соблазнение";
		 cout << "\n5 - нечеловеческая скорость";
		 cout << "\n6 - гибкость";
		 cout << "\n7 - проворство";
		 cout << "\n8 - выносливость";
		 cout << "\n9 - экстрасенсорные способности\n";
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
		 cout << "Выберите оружие: ";
		 cout << "\n0 - выход";
		 cout << "\n1 - кольцо зелёного фонаря";
		 cout << "\n2 - бузиная палочка";
		 cout << "\n3 - серп баффи";
		 cout << "\n4 - остроумие дедпула";
		 cout << "\n5 - кольт";
		 cout << "\n6 - отвёртка доктора";
		 cout << "\n7 - лассо правды";
		 cout << "\n8 - мьёльнир";
		 cout << "\n9 - когти росомахи";
		 cout << "\n10 - броня железного человека\n";
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
		 cout << "Выберите способ передвижения: ";
		 cout << "\n0 - выход";
		 cout << "\n1 - бегает";
		 cout << "\n2 - ездит на машине";
		 cout << "\n3 - летает\n";
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
	//4 героя
	SuperHero *frist = new SuperHero(), *second = new SuperHero(), *third = new SuperHero(), *fourth = new SuperHero();
	int a;
	int b;
	//меню
	while(true){
		system("cls");
		cout << "1 - новый герой";
		cout << "\n2 - отобразить героя";
		cout << "\n3 - сохранить героя";
		cout << "\n4 - загрузить героя\n";
		cin >> a;
		system("cls");
		cout << "1 - герой №1";
		cout << "\n2 - герой №2";
		cout << "\n3 - герой №3";
		cout << "\n4 - герой №4\n";
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