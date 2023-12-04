#include<iostream>
#include<strings.h>
#include<cstdlib>
#include<ctime>
#include <sstream>

using namespace std;

int seleccion = -1;
string texto = "";
int estado = 0;
int mision = 0;
int tanques = 3;

struct inventario
{
	string nomAsistente;
	string nomObjeto;
	string nomProvision;
	int asistente;
	int objeto;
	int provision;
};
inventario inv;

void limpiar();
void color(string estilo, string color, string fondo);


int main()
{
	inv.asistente = -1;
	inv.objeto = -1;
	inv.provision = -1;
	menuSeleccion();
	return 0;
}

void limpiar()
{
	cout.flush();
	system("cls||clear");
}

void color(string estilo, string color, string fondo)
{
	cout.flush();
	string comando = "\033[" + estilo + ";" + color + ";" + fondo + "m";
	cout << comando;
	cout.flush();
}
