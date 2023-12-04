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
void misionNombre();
void detalles();
void nuevoInventario();
void escenario1();

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

void misionNombre()
{
	switch(mision)
	{
		case 0:
			color("7","37","40");
			cout << "\tMision: Kep168" << endl;
			color("0","37","40");
		break;
		case 1:
			color("7","37","40");
			cout << "\tMision: Forg326" << endl;
			color("0","37","40");
		break;
		case 2:
			color("7","37","40");
			cout << "\tMision: Urn548" << endl;
			color("0","37","40");
		break;
	}
}

void detalles()
{
	misionNombre();
	cout << "Tanques: ";
	switch(tanques)
	{
		case 1:
			color("0", "31", "40");
			cout << "O" << endl << endl;
		break;
		case 2:
			color("0", "33", "40");
			cout << "O O" << endl << endl;
		break;
		case 3:
			color("0", "32", "40");
			cout << "O O O" << endl << endl;
		break;
	}
	
	color("0", "35", "40");
	
	cout << "Suministros: " << endl;
	cout << "Objeto: " << inv.nomObjeto << endl;
	cout << "Provision: " << inv.nomProvision << endl;
	
	color("0", "31", "40");
    cout << endl << " *Ingrese E para regresar al menu" << endl << endl;
    color("0", "37", "40");
    cout << "-------------------------------------------" << endl << endl;
}

void nuevoInventario()
{
    if (inv.asistente == -1)
    {
        limpiar();
        color("0", "37", "40");
        cout << "Antes de emprender tu mision, recoje algunos suministros para el viaje" << endl;
        cout << "Elige un asistente para la mision" << endl;
        cout << "No hay mucho espacio en la nave debido a que se necesita mayor capacidad de combustible, se precavido" << endl << endl;
        color("0", "31", "40");
        cout << endl << " *Ingrese E para regresar al menu" << endl << endl;
        color("0", "37", "40");
        color("7", "37", "40");
        cout << "Selecciona un ayudante segun el numero: " << endl << endl;
        misionNombre();
        color("0", "32", "40");
        cout << endl << " *(1)La Astronauta Rachel Dinn, excelente piloto de aeronaves y tecnica especializada" << endl;
        color("0", "33", "40");
        cout << " *(2)El Perro Rock, entrenado para localizacion de objetos y defensa" << endl;
        color("0", "34", "40");
        cout << " *(3)Solo" << endl;
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
        	nuevoInventario();
        	return;
    	
		}
        switch (seleccion)
        {
            case 1:
                inv.asistente = 1;
                inv.nomAsistente = "Asistente Rachel";
            break;
            case 2:
                inv.asistente = 2;
                inv.nomAsistente = "Asistente Rock";
                break;
            case 3:
                inv.asistente = 3;
                inv.nomAsistente = "Solo";
            break;
            default:
                limpiar();
                color("0", "31", "40");
                cout << "Error: No hay una opcion segun el numero: (" << seleccion << ") intentelo nuevamente" << endl << endl;
                cout << "Presiona Enter para continuar...";
                cin.get();
                nuevoInventario();
                return;
            }
        }
    

    if (inv.objeto == -1)
    {
        limpiar();
        color("0", "37", "40");
        cout << "Antes de emprender tu mision, recoje algunos suministros para el viaje" << endl;
        cout << "Elige un objeto para la mision" << endl;
        cout << "No hay mucho espacio en la nave debido a que se necesita mayor capacidad de combustible, se precavido" << endl << endl;
        color("0", "31", "40");
        cout << endl << " *Ingrese E para regresar al menu" << endl << endl;
        color("0", "37", "40");
        color("7", "37", "40");
        cout << "Selecciona un objeto segun el numero: " << endl << endl;
        misionNombre();
        color("0", "32", "40");
        cout << endl << " *(1)Dron, una forma eficiente para recopilar datos" << endl;
        color("0", "33", "40");
        cout << " *(2)Robot Terrestre, es perfecto para analizar el entorno" << endl;
        color("0", "34", "40");
        cout << " *(3)Libro, por si te sientes aburrido" << endl;
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
        	nuevoInventario();
        	return;
		}
		
        switch (seleccion)
        {
            case 1:
                inv.objeto = 1;
                inv.nomObjeto = "Dron";
                break;
            case 2:
                inv.objeto = 2;
                inv.nomObjeto = "Robot Terrestre";
            break;
            case 3:
                inv.objeto = 3;
                inv.nomObjeto = "Libro";
            break;
            default:
                limpiar();
                color("0", "31", "40");
                cout << "Error: No hay una opcion segun el numero: (" << seleccion << ") intentelo nuevamente" << endl << endl;
                cout << "Presiona Enter para continuar...";
                cin.get();
                nuevoInventario();
                return;
        
        }
	}

    if (inv.provision == -1)
    {
        limpiar();
        color("0", "37", "40");
        cout << "Antes de emprender tu mision, recoje algunos suministros para el viaje" << endl;
        cout << "Elige provisiones para la mision" << endl;
        cout << "No hay mucho espacio en la nave debido a que se necesita mayor capacidad de combustible, se precavido" << endl << endl;
        color("0", "31", "40");
        cout << endl << " *Ingrese E para regresar al menu" << endl << endl;
        color("0", "37", "40");
        color("7", "37", "40");
        cout << "Selecciona una provision segun el numero: " << endl << endl;
        misionNombre();
        color("0", "32", "40");
        cout << endl << " *(1)Comida, perfecta para largas jornadas de trabajo" << endl;
        color("0", "33", "40");
        cout << " *(2)Kit Medico, auxiliar para cualquier ocacion" << endl;
        color("0", "34", "40");
        cout << " *(3)Bateria Extra, nunca se sabe que podria pasar, parece el empaque en mal estado" << endl;
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
        	nuevoInventario();
        	return;
		}
		
        switch (seleccion)
        {
            case 1:
                inv.provision = 1;
                inv.nomProvision = "Comida";
                break;
            case 2:
                inv.provision = 2;
                inv.nomProvision = "Kit Medico";
            break;
        	case 3:
                inv.provision = 3;
                inv.nomProvision = "Bateria Extra";
            break;
            default:
                limpiar();
                color("0", "31", "40");
                cout << "Error: No hay una opcion segun el numero: (" << seleccion << ") intentelo nuevamente" << endl << endl;
                cout << "Presiona Enter para continuar...";
                cin.get();
                nuevoInventario();
                return;
        
        }
    }

    limpiar();
    misionNombre();
    color("0", "37", "40");
    cout << endl << "A continuacion se muestran tus suministros: " << endl << endl;
    
    color("0", "32", "40");
    cout << "Asistente: " << inv.nomAsistente << endl;

    color("0", "33", "40");
    cout << "Objeto: " << inv.nomObjeto << endl;

    color("0", "34", "40");
    cout << "Provision: " << inv.nomProvision << endl;
    color("0", "31", "40");
    cout << endl << "Presiona Enter cuando hayas visto tus suministros o Ingrese R para volver a elejirlos..." << endl;
    
    getline(cin, texto);
    istringstream iss(texto);
    	
    if(texto == "R" || texto == "r")
    {
        inv.asistente = -1;
        inv.objeto = -1;
        inv.provision = -1;
        nuevoInventario();
        return;
	}
}

void escenario1()
{
	cout << "En un futuro lejano la tierra ha sufrido una contaminacion generada por el ser humano" << endl;
	cout << "Eres el atronauta Robert Larson, fuiste asignado a una mision en la Nasa" << endl << endl;
	cout << "Datos de la mision: " << endl;
	srand(time(NULL));
	int random = rand()%3;
	mision = random;
	switch(random)
	{
		case 0:
			misionNombre();
			cout << "\t*Nesesitamos obtener datos de un planeta que se ha encontrado un planeta posiblemente habitable" << endl;
			cout << "\t*Viaja hacia ese planeta y obten una muestra para evaluar la sustentabilidad" << endl;
		break;
		case 1:
			misionNombre();
			cout << "\t*Encuentra una civilizacion en un planeta que parece que hay vida" << endl;
			cout << "\t*Intenta comunicarte e informar nuestra situacion, si funciona esto seria nuestra unica esperanza" << endl;
		break;
		case 2:
			misionNombre();
			cout << "\t*Ubica y trae la nave Mark2005 que ha terminado de ser ensamblada con los recursos del planeta COUR58" << endl;
			cout << "\t*Llevala a la estacion espacial para poder empezar a abordar a la gente, esta nave se encuentra en la orbita de dicho planeta" << endl;
		break;
	}
	color("0","31","40");
	cout << endl << "Presiona Enter cuando haya comprendido la mision..." << endl;
   	cin.get();
   	estado = 1;
   	juego(-1);
}
