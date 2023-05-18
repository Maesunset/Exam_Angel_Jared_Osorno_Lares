#pragma once
#include <iostream>
#include <vector>
#include<ctype.h>
void add(vector<string>& inventory, int &gems, int& inventorySize, const int inventoryMaxSize);
int comprobar();
void Exam_p2()
{
	const int inventoryMaxSize = 10;
	vector<string> inventory;
	bool exit = true;
	int menu, freeGems, inventorySize = 3;
	srand(static_cast<unsigned int>(time(0)));
	freeGems = (rand() % 50)+5;
	do
	{
		system("cls");
		cout << "-------Que desea hacer?-------" << endl;
		cout << "1) para jugar " << endl;
		cout << "2) salir " << endl;
		menu = comprobar();
		// if jugar
		if (menu==1)
		{
			cout << "----------Bienvenido a jugar----------" << endl;
			cout << "tu cantidad de genas actuales es: " << freeGems << " usalas sabiamente" << endl;
			if (inventory.size()>=1)
			{
				cout << "tus objetos actuales son:" << endl;
					for (int i = 0; i < inventory.size(); i++)
					{
						cout << inventory[i] << endl;
					}
			}
				add(inventory, freeGems, inventorySize, inventoryMaxSize);
		}
		//else if salir
		else if (menu==2)
		{
			cout << "Gracias por jugar" << endl;
			exit = false;
		}
		// else validacion 
		else
		{
			cout << "opcion invalida, ingrese una valida" << endl;
		}
	} while (exit);
}

int comprobar()
{
	int valor;
	bool exit = true;
	do
	{
	cin >> valor;
	if (valor/valor==1)
	{
		exit = false;
	}
	else
	{
		cout << "seleccion invalida intente de nuevo" << endl;
	}
	} while (exit);
	return valor;
}

void add(vector<string>& inventory, int &gems,int &inventorySize, const int inventoryMaxSize)
{
		vector<string> items;
		int addMenu,subMenu;
		items.push_back("espada larga");
		items.push_back("gran mazo");
		items.push_back("diamante");
		items.push_back("perla");
		items.push_back("armadura");
		items.push_back("ballesta");
		items.push_back("pocion de mana");
		items.push_back("pocion de vida");
		items.push_back("filete");
		items.push_back("pescado");
		items.push_back("palo");
		items.push_back("biblia");
		items.push_back("hacha");
		items.push_back("espadas dobles");
		items.push_back("espada y escudo");
		srand(static_cast<unsigned int>(time(0)));
		int selectItem = (rand() % 15);
		cout << "cuidado invocador te has encontrado un " << items[selectItem] << endl;
		if (inventory.size()<inventorySize)
		{
			cout << "decides recoger el " << items[selectItem] << endl;
			inventory.push_back(items[selectItem]);
			system("pause");
		}
		else
		{
			cout << "te haz quedado sin espacio, que desseas hacer?" << endl;
			cout << "1) remplazar por otro objeto" << endl;
			cout << "2) continuar sin recoger el objeto" << endl;
			cout << "3) agregar un espacio con costo de gemas" << endl;
			addMenu = comprobar();
			// remplazar objeto
			if (addMenu == 1)
			{
				cout << "decides remplazar por otro objeto" << endl;
				for (int i = 0; i < inventory.size(); i++)
				{
					cout << "el espacio " << i <<" es: " << inventory[i] << endl;
				}
				cout << "por cual espacio lo desea cambiar" << endl;
				subMenu = comprobar();
				cout << " su " << inventory[subMenu] << "sera cambiada por " << items[selectItem];
				inventory[subMenu] = items[selectItem];
			}
			//continuar sin el objeto 
			else if(addMenu==2)
			{
				cout << "decides seguir adelante sin recoger el objeto" << endl;
			}
			//comprar un espacio mas
			else if(addMenu==3)
			{
				cout << "Magicamente aparece un comerciante y te dice:" << endl;
				cout << "FORASTERO ocupas una ayuda, yo te consigo lo que quieras por un precio adecuado..." << endl;
				cout << "Le haz comprado un espacio nuevo al comerciante" << endl;
				if (gems>5)
				{
					inventorySize += 1;
					gems -= 5;
					inventory.push_back(items[selectItem]);
					cout << "se agrego tu " << items[selectItem] << "al inventario" << endl;
				}
				else
				{
					cout << "no tienes gemas suficientes, el comerciante se burla de ti y se va" << endl;
				}
			}
			else
			{
				cout << "no supiste que hacer y alguien mas se llevo el objeto " << endl;
			}
		}
}