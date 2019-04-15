#include<iostream>
#include<cstdlib>
#include<conio.h>
#include <cmath>
#include "Punkt.h"
#include "Prostokat.h"
const double M_PI = 3.14159265358979323846;

using namespace std;
void drawMenu();
void autor();
bool flaga = true;
int wybor;
int main()
{
	//TODO STWORZYC MENU DO OBSLUGI PROGRAMU
	double angle;
	Punkt p1, p2, p3, p4;
	Prostokat p;
	Vec v;
	

	while (1)
	{
		system("cls");
		if (flaga)
		{
			autor();
			flaga = false;
		}
		drawMenu();

		cin >> wybor;

		switch (wybor)
		{
		case 1:
		{
			cout << "Lewy dolny rog x >";
			cin >> p1.x;
			cout << "Lewy dolny rog y >";
			cin >> p1.y;
			cout << "Prawy dolny rog x >";
			cin >> p2.x;
			cout << "Prawy dolny rog y >";
			cin >> p2.y;
			cout << "Prawy gorny rog x >";
			cin >> p3.x;
			cout << "Prawy gorny rog y >";
			cin >> p3.y;
			cout << "Lewy gorny rog x >";
			cin >> p4.x;
			cout << "Lewy gorny rog y >";
			cin >> p4.y;
			p.p1 = p1;
			p.p2 = p2;
			p.p3 = p3;
			p.p4 = p4;
		}break;
		case 2:
		{
			p.print();
			cout << endl;
			_getch();
		}break;
		case 3:
		{
			cout << "Przesuniecie o x:\n>";
			cin >> v.x;
			cout << "Przesuniecie o y:\n>";
			cin >> v.y;
			cout << "Wspolzedne prostokata przed przesunieciem o wektor:\n";
			p.print();
			cout << "\nWspolzedne prostokata po przesunieciu o wektor: x" << v.x << " y" << v.y <<"\n";
			p.p1.x += v.x;
			p.p1.y += v.y;
			p.p2.x += v.x;
			p.p2.y += v.y;
			p.p3.x += v.x;
			p.p3.y += v.y;
			p.p4.x += v.x;
			p.p4.y += v.y;
			p.print();
			cout << "\n";
			_getch();

		}break;
		case 4:
		{
			cout << "Podaj kat wyrazony w stopniach o jaki chcesz obrocic prostokat wzgledem pkt (0,0)\n>";
			cin >> angle;
			cout << "Podaj ile razy chcesz zastosowac podana rotacje\n>";
			int n;
			cin >> n;
			cout << "Wspolzedne prostokata przed obrotem:";
			p.print();
			for (int i = 0; i < n; i++)
			{
				p.rotate(angle);
			}
			cout << "\n Wpolzedne prostokata po obrocie o " << angle << " stopni:\n";
			p.print();
			_getch();
		}break;
		case 5:
		{
			exit(0);
		}break;


		}
		

	}

	system("pause");

	return 0;
}

void autor()
{
	cout << "\311\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\273\n";
	cout << "\272                                                                    \272 \n";
	cout << "\272                          Prac\251 Wykona\210                             \272 \n";
	cout << "\272                      Krzysztof K\210opotowski                         \272 \n";
	cout << "\272                     Politechnika Wroc\210awska                        \272 \n";
	cout << "\272                                                                    \272 \n";
	cout << "\310\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\274\n";
}

void drawMenu()
{
	cout << "\311\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\273\n";
	cout << "\272                          MENU G\235\340WNE                               \272 \n";
	cout << "\272                                                                    \272 \n";
	cout << "\272 1.Wczytaj dane prostokata                                          \272 \n";
	cout << "\272 2.Wyswietl prostokat                                               \272 \n";
	cout << "\272 3.Przesun o wektor                                                 \272 \n";
	cout << "\272 4.Obroc prostokat o kat                                            \272 \n";
	cout << "\272 5.zakoncz                                                          \272 \n";
	cout << "\272                                                                    \272 \n";
	cout << "\310\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\274\n";
	cout << ">";
}