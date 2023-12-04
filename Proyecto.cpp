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
void escenario2();
void escenario3();
void escenario4();
void final(int f);

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

void escenario2()
{
	switch(mision)
	{
		case 0:
			misionNombre();
			nuevoInventario();
		break;
		case 1:
			misionNombre();
			nuevoInventario();
		break;
		case 2:
			misionNombre();
			nuevoInventario();
		break;
	}
	limpiar();
	misionNombre();
	cout << "Con tus suministros y una mision clara emprendes la mision" << endl;
	cout << "Lo mas importante es que tienes que tener en cuenta es que la mision es larga" << endl;
	color("7","37","40");
	cout << "Por lo que tendras que conseguir tanques de oxigeno disponibles, tienes 3 actualmente" << endl;
	color("0","37","40");
	cout << "Cuidalos, en caso de que uno se rompa no hay problema pero si los 3 no sirven moriras" << endl;
	color("0","31","40");
	cout << endl << "Presiona Enter cuando haya comprendido la mision..." << endl;
	cin.get();
	estado = 2;
    juego(-1);
}

void escenario3()
{
	limpiar();
	switch(mision)
	{
		case 0:
			detalles();
			cout << "Despues de una larga jornada llegas al planeta Karou16" << endl;
			cout << "Parece un planeta similar a la vieja tierra y con una buena atmosfera" << endl;
			cout << "Con nostalgia miras el planeta y piensas en las formas en la que la humanidad prosperaria si la mision se completa" << endl;
			if(inv.objeto != 3)
			{
				cout << endl << "Solo ahora hay oportunidad de usar tu " << inv.nomObjeto << " ya que mas adelante no se podra si abandonas la nave" << endl << endl;
				if(inv.asistente != 3)
				{
					cout << "Tu Asistente te indica que hay que trabajar de inmediato" << endl;
					cout << "Para poder completar la mision se nesesitara algo para explorar" << endl;
					cout << "Haz algo para poder concluir tu mision:" << endl;
					cout << "(1) Abandonar la Mision" << endl;
					cout << "(2) Usar tu " << inv.nomObjeto << endl;
					cout << "(3) Utilizar tu provision: " << inv.nomProvision << endl;
				}
				else
				{
					cout << "Despues de varios minutos empiezas a trabajar" << endl;
					cout << "Para poder completar la mision se nesesitara algo para explorar" << endl;
					cout << "Haz algo para poder concluir tu mision:" << endl;
					cout << "(1) Abandonar la Mision" << endl;
					cout << "(2) Usar tu " << inv.nomObjeto << endl;
					cout << "(3) Utilizar tu provision: " << inv.nomProvision << endl;
				}
			}
			else
			{
				if(inv.asistente != 3)
				{
					cout << "Tu Asistente te indica que hay que trabajar de inmediato" << endl;
					cout << "Te das cuenta que no tienes mucho que hacer ya que no trajiste algo util" << endl;
					cout << "Pero tu Asistente esta aqui y proponen varias opciones:" << endl;
					cout << "(1) Abandonar la Mision" << endl;
					cout << "(2) Usar tu " << inv.nomObjeto << endl;
					cout << "(3) Utilizar tu provision: " << inv.nomProvision << endl;
				}
				else
				{
					cout << "Despues de varios minutos empiezas a trabajar" << endl;
					cout << "Una vez despues de pensar te das cuenta que no tienes mucho que hacer" << endl;
					cout << "No trajiste el equipamiento adecuado, pero hay algunas alternativas:" << endl;
					cout << "(1) Abandonar la Mision" << endl;
					cout << "(2) Usar tu " << inv.nomObjeto << endl;
					cout << "(3) Utilizar tu provision: " << inv.nomProvision << endl;
				}
			}
		break;
		case 1:
			detalles();
			cout << "Despues de una larga jornada llegas al planeta Inye23" << endl;
			cout << "Como se sospechaba, es un planeta ocupado por seres inteligentes con mayor avance, habra que ser precavido" << endl;
			cout << "Tu eres muy cauteloso por lo que es una buena idea para poder establecer un contacto amistoso" << endl;
			if(inv.objeto != 3)
			{
				cout << "Solo ahora hay oportunidad de usar tu " << inv.nomObjeto << " ya que mas adelante no se podra si abandonas la nave" << endl;
				if(inv.asistente != 3)
				{
					cout << "Tu Asistente te indica que hay que trabajar de inmediato" << endl;
					cout << "Para poder completar la mision se nesesitara algo para explorar" << endl;
					cout << "Haz algo para poder concluir tu mision:" << endl;
					cout << "(1) Abandonar la Mision" << endl;
					cout << "(2) Usar tu " << inv.nomObjeto << endl;
					cout << "(3) Utilizar tu provision: " << inv.nomProvision << endl;
				}
				else
				{
					cout << "Despues de varios minutos empiezas a trabajar" << endl;
					cout << "Para poder completar la mision se nesesitara algo para explorar" << endl;
					cout << "Haz algo para poder concluir tu mision:" << endl;
					cout << "(1) Abandonar la Mision" << endl;
					cout << "(2) Usar tu " << inv.nomObjeto << endl;
					cout << "(3) Utilizar tu provision: " << inv.nomProvision << endl;
				}
			}
			else
			{
				if(inv.asistente != 3)
				{
					cout << "Tu Asistente te indica que hay que trabajar de inmediato" << endl;
					cout << "Te das cuenta que no tienes mucho que hacer ya que no trajiste algo util" << endl;
					cout << "Pero tu Asistente esta aqui y proponen varias opciones:" << endl;
					cout << "(1) Abandonar la Mision" << endl;
					cout << "(2) Usar tu " << inv.nomObjeto << endl;
					cout << "(3) Utilizar tu provision: " << inv.nomProvision << endl;
				}
				else
				{
					cout << "Despues de varios minutos empiezas a trabajar" << endl;
					cout << "Una vez despues de pensar te das cuenta que no tienes mucho que hacer" << endl;
					cout << "No trajiste el equipamiento adecuado, pero hay algunas alternativas:" << endl;
					cout << "(1) Abandonar la Mision" << endl;
					cout << "(2) Usar tu " << inv.nomObjeto << endl;
					cout << "(3) Utilizar tu provision: " << inv.nomProvision << endl;
				}
			}
		break;
		case 2:
			detalles();
			cout << "Despues de una larga jornada llegas al planeta Cour58" << endl;
			cout << "Se ve un planeta muy desolado, ya usado por el ser humano, algo inservible y proximo destino de la humanidad" << endl;
			cout << "Piensas que con todo esto se ha podido dar una oportunidad a tu especie, solo hay que completar la mision" << endl;
			if(inv.objeto != 3)
			{
				cout << "Solo ahora hay oportunidad de usar tu " << inv.nomObjeto << " ya que mas adelante no se podra si abandonas la nave" << endl;
				if(inv.asistente != 3)
				{
					cout << "Tu Asistente te indica que hay que trabajar de inmediato" << endl;
					cout << "Para poder completar la mision se nesesitara algo para explorar" << endl;
					cout << "Haz algo para poder concluir tu mision:" << endl;
					cout << "(1) Abandonar la Mision" << endl;
					cout << "(2) Usar tu " << inv.nomObjeto << endl;
					cout << "(3) Utilizar tu provision: " << inv.nomProvision << endl;
				}
				else
				{
					cout << "Despues de varios minutos empiezas a trabajar" << endl;
					cout << "Para poder completar la mision se nesesitara algo para explorar" << endl;
					cout << "Haz algo para poder concluir tu mision:" << endl;
					cout << "(1) Abandonar la Mision" << endl;
					cout << "(2) Usar tu " << inv.nomObjeto << endl;
					cout << "(3) Utilizar tu provision: " << inv.nomProvision << endl;
				}
			}
			else
			{
				if(inv.asistente != 3)
				{
					cout << "Tu Asistente te indica que hay que trabajar de inmediato" << endl;
					cout << "Te das cuenta que no tienes mucho que hacer ya que no trajiste algo util" << endl;
					cout << "Pero tu Asistente esta aqui y proponen varias opciones:" << endl;
					cout << "(1) Abandonar la Mision" << endl;
					cout << "(2) Usar tu " << inv.nomObjeto << endl;
					cout << "(3) Utilizar tu provision: " << inv.nomProvision << endl;
				}
				else
				{
					cout << "Despues de varios minutos empiezas a trabajar" << endl;
					cout << "Una vez despues de pensar te das cuenta que no tienes mucho que hacer" << endl;
					cout << "No trajiste el equipamiento adecuado, pero hay algunas alternativas:" << endl;
					cout << "(1) Abandonar la Mision" << endl;
					cout << "(2) Usar tu " << inv.nomObjeto << endl;
					cout << "(3) Utilizar tu provision: " << inv.nomProvision << endl;
				}
			}
		break;
	}
	
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
        cout << "Presiona Enter para continuar..." << endl;
        cin.get();
        escenario3();
        return;
	}
	
	limpiar();
	detalles();
	
	switch(mision)
	{
		case 0:
			switch(seleccion)
			{
				case 1:
				final(1);
				return;
				break;
				case 2:
					if(inv.objeto == 1 || inv.objeto == 2)
					{
						cout << "Grandioso plan, preparas tu " << inv.nomObjeto << " , fue una buena idea decidir traerlo" << endl;
					}
					else
					{
						cout << "Sin gran cosa lees tu libro, despues de cierto tiempo te relajas" << endl;
						cout << "Ahora te sientes con mas tranquilidad, puedes tomar una buena desicion ahora" << endl;
						cout << "Observas tu entorno y aprecias lo que parece un diminuto Robot Aereo" << endl;
						cout << "Sin pensarlo mas lo usas para continuar la misison" << endl;
						inv.nomObjeto = "Robot Aereo";
					}
				break;
				case 3:
					if(inv.provision == 1 || inv.provision == 2)
					{
						cout << "Despues de usar tu provision te sientes mejor, recuperas fuerzas" << endl;
						cout << "Sin duda podria ser un gran avance para la mision" << endl;
						inv.provision = 5;
					}
					else
					{
						cout << "Despues de usar tu provsion te sientes mejor, te das cuenta que las baterias no sirven" << endl;
						cout << "El paquete podria estar defectuoso, te sientes frustado" << endl;
					}
				break;
				default:
                	limpiar();
                	color("0", "31", "40");
                	cout << "Error: No hay una opcion segun el numero: (" << seleccion << ") intentelo nuevamente" << endl << endl;
                	cout << "Presiona Enter para continuar...";
                	cin.get();
                	escenario3();
                	return;
			}
		break;
		case 1:
			switch(seleccion)
			{
				case 1:
				final(1);
				return;
				break;
				case 2:
					if(inv.objeto == 1 || inv.objeto == 2)
					{
						cout << "Grandioso plan, preparas tu " << inv.nomObjeto << " , fue una buena idea decidir traerlo" << endl;
					}
					else
					{
						cout << "Sin gran cosa lees tu libro, despues de cierto tiempo te relajas" << endl;
						cout << "Ahora te sientes con mas tranquilidad, puedes tomar una buena desicion ahora" << endl;
						cout << "Observas tu entorno y aprecias lo que parece un diminuto Robot Aereo" << endl;
						cout << "Sin pensarlo mas lo usas para continuar la misison" << endl;
						inv.nomObjeto = "Robot Aereo";
					}
				break;
				case 3:
					if(inv.provision == 1 || inv.provision == 2)
					{
						cout << "Despues de usar tu provision te sientes mejor, recuperas fuerzas" << endl;
						cout << "Sin duda podria ser un gran avance para la mision" << endl;
						inv.provision = 5;
					}
					else
					{
						cout << "Despues de usar tu provsion te sientes mejor, te das cuenta que las baterias no sirven" << endl;
						cout << "El paquete podria estar defectuoso, te sientes frustado" << endl;
					}
				break;
				default:
                	limpiar();
                	color("0", "31", "40");
                	cout << "Error: No hay una opcion segun el numero: (" << seleccion << ") intentelo nuevamente" << endl << endl;
                	cout << "Presiona Enter para continuar...";
                	cin.get();
                	escenario3();
                	return;
			}
			break;
		case 2:
			switch(seleccion)
			{
				case 1:
				final(1);
				return;
				break;
				case 2:
					if(inv.objeto == 1 || inv.objeto == 2)
					{
						cout << "Grandioso plan, preparas tu " << inv.nomObjeto << " , fue una buena idea decidir traerlo" << endl;
					}
					else
					{
						cout << "Sin gran cosa lees tu libro, despues de cierto tiempo te relajas" << endl;
						cout << "Ahora te sientes con mas tranquilidad, puedes tomar una buena desicion ahora" << endl;
						cout << "Observas tu entorno y aprecias lo que parece un diminuto Robot Aereo" << endl;
						cout << "Sin pensarlo mas lo usas para continuar la misison" << endl;
						inv.nomObjeto = "Robot Aereo";
					}
				break;
				case 3:
					if(inv.provision == 1 || inv.provision == 2)
					{
						cout << "Despues de usar tu provision te sientes mejor, recuperas fuerzas" << endl;
						cout << "Sin duda podria ser un gran avance para la mision" << endl;
						inv.provision = 5;
					}
					else
					{
						cout << "Despues de usar tu provsion te sientes mejor, te das cuenta que las baterias no sirven" << endl;
						cout << "El paquete podria estar defectuoso, te sientes frustado" << endl;
					}
				break;
				default:
                	limpiar();
                	color("0", "31", "40");
                	cout << "Error: No hay una opcion segun el numero: (" << seleccion << ") intentelo nuevamente" << endl << endl;
                	cout << "Presiona Enter para continuar...";
                	cin.get();
                	escenario3();
                	return;
			}
			break;
		break;
	}
	color("0", "31", "40");
    cout << "Presiona Enter para continuar..." << endl;
    cin.get();
	estado = 3;
    juego(-1);
}

void escenario4()
{
    limpiar();
    tanques--;
    detalles();
    cout << "Nivel de Oxigeno decayendo" << endl << endl;
    switch (mision)
    {
    	case 0:
    		switch(seleccion)
    		{
    			case 1:
    				final(1);
    			break;
    			case 2:
    				cout << "Despues de desplegar tu " << inv.nomObjeto << " hacia el planeta admiras que el planeta tiene una variada fauna" << endl;
    				cout << "Parece un lugar prometedor" << endl;
    				cout << "Tomas la muestra del planeta y Regresas a la estacion espacial" << endl;
    				color("0", "31", "40");
    				cout << "Presiona Enter para continuar..." << endl;
    				cin.get();
    				final(4);
    			break;
    			case 3:
    				cout << "Despues de usar tu provision no hay mucho que hacer, una accion sin sentido, decides regresar" << endl;
    				cout << "Llegando al planeta informas que el planeta si puede alvergar vida pero no traes lo que se te pidio" << endl;
    				color("0", "31", "40");
    				cout << "Presiona Enter para continuar..." << endl;
    				cin.get();
    				final(2);
    			break;
				default:
                	limpiar();
                	color("0", "31", "40");
                	cout << "Error: No hay una opcion segun el numero: (" << seleccion << ") intentelo nuevamente" << endl << endl;
                	cout << "Presiona Enter para continuar...";
                	cin.get();
                	escenario4();
                	return;	
			}
    	break;
    	case 1:
    		switch(seleccion)
    		{
    			case 1:
    				final(1);
    			break;
    			case 2:
    				cout << "Despues de desplegar tu " << inv.nomObjeto << " hacia el planeta ves una forma de vida inteligente" << endl;
    				cout << "Le entregas un disco con informacion del ser humano, parecen amigables y toman la nota" << endl;
    				cout << "Regresas a la estacion espacial, puede que puedan ayudar despues de todo" << endl;
    				color("0", "31", "40");
    				cout << "Presiona Enter para continuar..." << endl;
    				cin.get();
    				final(4);
    			break;
    			case 3:
    				cout << "Despues de usar tu provision no hay mucho que hacer, una accion sin sentido, decides regresar" << endl;
    				cout << "Intentas llegar a la estacion espacial y no puedes llegar a ella, te pierdes" << endl;
    				color("0", "31", "40");
    				cout << "Presiona Enter para continuar..." << endl;
    				cin.get();
    				final(1);
    			break;
				default:
                	limpiar();
                	color("0", "31", "40");
                	cout << "Error: No hay una opcion segun el numero: (" << seleccion << ") intentelo nuevamente" << endl << endl;
                	cout << "Presiona Enter para continuar...";
                	cin.get();
                	escenario4();
                	return;	
			}
    	break;
    	case 2:
    		switch(seleccion)
    		{
    			case 1:
    				final(1);
    			break;
    			case 2:
    				cout << "Gracias a que desplegaste tu " << inv.nomObjeto << " interceptas la nave y accedes a ella" << endl;
    				cout << "Ingresas las coordenadas de nuestro sistema solar para regresar la nave" << endl;
    				cout << "Despues de cierto tiempo llegas con la nave intacta" << endl;
    				color("0", "31", "40");
    				cout << "Presiona Enter para continuar..." << endl;
    				cin.get();
    				final(4);
    			break;
    			case 3:
    				cout << "Despues de usar tu provision no hay mucho que hacer, una accion sin sentido, decides regresar" << endl;
    				cout << "Te quedas varado en la nave, se quedo sin gasolina" << endl;
    				color("0", "31", "40");
    				cout << "Presiona Enter para continuar..." << endl;
    				cin.get();
    				final(0);
    			break;
				default:
                	limpiar();
                	color("0", "31", "40");
                	cout << "Error: No hay una opcion segun el numero: (" << seleccion << ") intentelo nuevamente" << endl << endl;
                	cout << "Presiona Enter para continuar...";
                	cin.get();
                	escenario4();
                	return;	
			}
    	break;
	}
}

void final(int f)
{
	limpiar();
	cout << "La mision: ";
	misionNombre();
	
	if(f == 0 || f == 1)
	{
		cout << "Ha sido un fracaso" << endl;
		switch(f)
		{
			case 0:
				cout << "Has Muerto, aparece una desolacion para el ser humano" << endl;
				cout << "Despues de poco tiempo la humanidad perece" << endl;
			break;
			case 1:
				cout << "Te retiraste de la mision, fuiste destituido y exiliado, seras remplazado" << endl;
			break;
		}
		
	}
	else
	{
		cout << "Ha sido Completada Exitosamente" << endl;
		switch(f)
		{
			case 2:
				cout << "Has tenido lo suficiente para poder finalizar la mision, buen trabajo" << endl;
				cout << "Al parecer la humanidad tiene una luz de esperanza nuevamente" << endl;
			break;
			case 3:
				cout << "Has hecho un gran trabajo, fuiste una opcion exepcional" << endl;
				cout << "Al parecer la humanidad tiene una luz de esperanza nuevamente" << endl;
			break;
			case 4:
				cout << "Debido a tu trabajo, seras premiado por una mision ejecutada perfectamente" << endl;
				cout << "Al parecer la humanidad tiene una luz de esperanza nuevamente" << endl;
			break;
		}			
	}
	color("7","37","40");
	cout << "----------EL FIN----------" << endl << endl;
	color("0","31","40");
	
	cout << endl << "Presiona Enter para regresar al menu principal..." << endl;
	cin.get();
	menuSeleccion();
}
