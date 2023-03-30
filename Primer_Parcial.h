#pragma once
#include <iostream>
using namespace std;

int Ingresar_Usuario(int max, int min)
{
	int RUsuario;
	do
	{
	cout << "Ingrese un numero entre " << max << " y " << min << endl;
	cin >> RUsuario;
	} while (RUsuario > max || RUsuario < min);
	return RUsuario;
}
void jugar()
{
	int max, min, Respuesta, RUsuario, tries = 0;
	int MuyCercas, RegresarALMenu;
	bool salir = true, RMenu = true;
	system("cls");
	do
	{
		system("cls");
	cout << "----------Bienvenido a jugar----------" << endl;
	cout << "cual es su rango maximo?" << endl;
	cin >> max;
	cout << "cual es su rango minimo?" << endl;
	cin >> min;
	Respuesta = (rand() % (max - min)) + min;
	cout << Respuesta;
	do
	{
	RUsuario = Ingresar_Usuario(max, min);
	tries++;
	MuyCercas = Respuesta -  RUsuario;
	if (MuyCercas <= 5 && MuyCercas >= -5 && MuyCercas != 0) 
	{
		cout << "estas cercas Pero..." << endl;
	}
	if (RUsuario>Respuesta)
	{
		cout << "Muy alto" << endl;
	}
	else if (RUsuario<Respuesta)
	{
		cout << "Muy Bajo" << endl;
	}
	else
	{
		cout << "Felicidades adivinaste en " << tries<< " intentos" << endl;
		salir = false;
		cout << "quieres jugar de nuevo?" << endl;
		cout << " 1) si, 2) no" << endl;
		cin >> RegresarALMenu;
		if (RegresarALMenu==2)
		{
			RMenu = false;
		}
	}

	} while (salir);

	} while (RMenu);
}
void Exam_P1() 
{
	int menuP1, CSalir;
	bool salir = true;
	do
	{
		system("cls");
	cout << "Selecione una opcion para empezar a jugar" << endl;
	cout << "1)Para jugar" << endl;
	cout << "2)Para salir" << endl;
	cin >> menuP1;
	switch (menuP1)
		{
		case 1:
			cout << "selecciono jugar " << endl;
			jugar();
			break;
		case 2:
			cout << "Seleciono salir, seguro que quiere salir?" << endl;
			cout << "1) si, 2) no" << endl;
			cin >> CSalir;
				if (CSalir==1)
				{
					salir = false;
					cout << "Vuelva pronto" << endl;
				}
			break;
		default:
			cout << "Selecion Invalida Intente de nuevo" << endl;
			break;
	}

	} while (salir);
}


