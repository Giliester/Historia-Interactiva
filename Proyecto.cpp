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
void menuSeleccion();
void salto();
void juego(int e);

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

void menuSeleccion()
{
    limpiar();
    color("4", "37", "40");
    cout << "\t\t     Menu     " << endl << endl;
    cout << "Seleccione una opcion acorde el numero: " << endl << endl;
    if(estado != 0)
    {
    	color("0", "32", "40");
    	cout << " *(1) Continuar o ingrese N para Nueva Partida" << endl;
	}
	else
	{
		color("0", "32", "40");
    	cout << " *(1) Jugar" << endl;
	}
    color("0", "33", "40");
    cout << " *(2) Acerca de" << endl;
    color("0", "34", "40");
    cout << " *(3) Seleccionar Escenario" << endl;
    color("0", "35", "40");
    cout << " *(4) Prologo y Personajes" << endl;
    color("0", "31", "40");
    cout << " *(5) Salir" << endl;
    color("0", "37", "40");
    
    getline(cin, texto);
    istringstream iss(texto);
    
    if(texto == "N" || texto == "n")
    {
        juego(0);
        return;
	}
    
    if (!(iss >> seleccion)) 
	{
        limpiar();
        color("0", "31", "40");
        cout << "Error: Ingrese un dato valido" << endl << endl;
        cout << "Presiona Enter para continuar...";
        cin.get();
        menuSeleccion();
        return;
    }
    switch(seleccion)
    {
        case 1:
            juego(-1);
            break;
        case 2:
            limpiar();
            color("0", "37", "40");
            cout << "En esa historia podemos adentrarnos en un futuro lejano, nosotros como un astronauta dedicado y el mejor de todos los astronautas" << endl;
            cout << "Seremos seleccionados para una mision importante que dara un rumbo radical a la humanidad o su posible desolacion" << endl;
            cout << "En un conjunto de 3 diferentes misiones y con las herramientas y asistencia que creas viable haras tu cometido" << endl;
            cout << "Suerte, toda la humanidad cree en ti..." << endl << endl;
            cout << "Ingieneria en Computacion" << endl;
            cout << "Romero Marquez Eduardo Gabriel" << endl;
            cout << "Grupo: 1158" << endl << endl;
            color("0", "31", "40");
            cout << "Presiona Enter para regresar al Menu...";
            cin.get();
            menuSeleccion();
            return;
            break;
        case 3:
            salto();
        break;
        case 4:
        	limpiar();
            color("0", "37", "40");
            cout << "*Eres Robert Larson, eres un astronauta que ha obtenido un gran potencial en su evaluacion" << endl;
            cout << "Y seras asignado para la mision que definira a la humanidad" << endl;
            cout << "*La Astronauta Rachel Dinn, es una de las pilotos mas dedicadas de todos los tiempos" << endl;
            cout << "Asi mismo es una gran ayudante contra averias en partes mecanicas y/o electricas" << endl;
            cout << "*El Perro Rock, es de gran utilidad contra rastreo dfe objetos, tambien fue adiestrado para protejer" << endl;
            cout << "Le gustan los paseos y las largas siestas" << endl << endl;
            cout << "Ingieneria en Computacion" << endl;
            cout << "Romero Marquez Eduardo Gabriel" << endl;
            cout << "Grupo: 1158" << endl << endl;
            color("0", "31", "40");
            cout << "Presiona Enter para regresar al Menu...";
            cin.get();
            menuSeleccion();
            return;
        break;
        case 5:
        	limpiar();
            color("0", "31", "40");
            cout << "Adios, Gracias por jugar" << endl;
            exit(-1);
            break;
        default:
            limpiar();
            color("0", "31", "40");
            cout << "Error: No hay una opcion segun el numero: (" << seleccion << ") intentelo nuevamente" << endl << endl;
            cout << "Presiona Enter para continuar...";
            cin.get();
            menuSeleccion();
            return;
    }
}

void salto()
{
	limpiar();
	color("0", "37", "40");
    cout << "Ingresa del 1 al 4 para seleccionar el escenario, el inventario para todos los escenarios sera por default: " << endl;
    color("0", "32", "40");
    cout << " *(1) Escenario 1" << endl;
    color("0", "33", "40");
    cout << " *(2) Escenario 2" << endl;
    color("0", "34", "40");
    cout << " *(3) Escenario 3" << endl;
    color("0", "35", "40");
    cout << " *(4) Escenario 4" << endl;
    color("0", "31", "40");
    cout << endl << " *Ingrese E para regresar al menu" << endl << endl;
    color("0", "37", "40");
    		
    getline(cin, texto);
    istringstream iss(texto);
    
    if(texto == "E" || texto == "e")
   	{
    	menuSeleccion();
        return;
	}
    
    if (!(iss >> seleccion)) 
	{
        limpiar();
        color("0", "31", "40");
        cout << "Error: Ingrese un dato valido" << endl << endl;
        cout << "Presiona Enter para continuar...";
        cin.get();
        salto();
        return;
    }
    		
    switch(seleccion)
    {
    	case 1:
    		inv.asistente = 1;
    		inv.objeto = 1;
    		inv.provision = 1;
    		seleccion = 1;
    		juego(0);
    		break;
    	case 2:
    		inv.asistente = 1;
    		inv.objeto = 1;
    		inv.provision = 1;
    		seleccion = 1;
    		juego(1);
    	break;
    	case 3:
    		inv.asistente = 1;
    		inv.objeto = 1;
    		inv.provision = 1;
    		seleccion = 1;
    		juego(2);
    	break;
    	case 4:
    		inv.asistente = 1;
    		inv.objeto = 1;
    		inv.provision = 1;
    		seleccion = 1;
    		juego(3);
    	break;
    	default:
    		limpiar();
            color("0", "31", "40");
            cout << "Error: No hay una opcion segun el numero: (" << seleccion << ") intentelo nuevamente" << endl << endl;
            cout << "Presiona Enter para continuar...";
            cin.get();
            salto();
            return;
		}
}

void juego(int e)
{
	limpiar();
	color("0","37","40");
	if(e != -1)
	{
		estado = e;
	}
	if(e == 0)
	{
		inv.asistente = -1;
		inv.objeto = -1;
		inv.provision = -1;
		tanques = 3;
	}
	switch(estado)
	{
		case 0:
			escenario1();
		break;
		case 1:
			escenario2();
		break;
		case 2:
			escenario3();
		break;
		case 3:
			escenario4();
		break;
	}
}
