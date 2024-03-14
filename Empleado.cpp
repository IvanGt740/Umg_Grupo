#include "Persona.cpp"
#include <iostream>
//creando el archivo de empleado para git
using namespace std;

class Empleado : Persona{
	
	private : string codigo_empleado, puesto; 
	//constructores
	public :
		Empleado(){
			
		}
		
		Empleado(string nom, string ape, string dir, int tel, string c_e, string pst, string fecha_n) : Persona(nom,ape,dir,tel,fecha_n){
		codigo_empleado = c_e,
		puesto = pst;			
			
		}
	

};
