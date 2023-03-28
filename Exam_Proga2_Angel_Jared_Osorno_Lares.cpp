#include <iostream>
#include "Primer_Parcial.h"

using namespace std;

int main()
{
	int menu;
	bool salir = true;
	do
	{
		cout << "---------------------Menu---------------------" << endl;
		cout << " 1) Primer Parcial" << endl;
		cout << " 2) Segundo Parcial" << endl;
		cout << " 3) Tercer Parcial" << endl;
		cout << " 4) Cuarto Parcial" << endl;
		cout << " 5) salir" << endl;
		cin >> menu;
		switch (menu)
		{
		// Primer parcial
		case 1:
			break;
		// Segundo Parcial
		case 2:
			break;
		// Tercer Parcial
		case 3:
			break;
		// Cuarto parcial
		case 4:
			break;
		// Salir
		case 5:
			salir = false;
			break;
		default:
			cout << "opcion invalida intente de nuevo" << endl;
			break;
		}
	} while (salir);
}