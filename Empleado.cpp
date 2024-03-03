#include "Persona.cpp"
#include <iostream>

using namespace std;

class Empleado : Persona{
	
	private : string puesto; 
	
	public :
		Empleado(){
			
		}
		
		Empleado(string nom, string ape, string dir, int tel, string pst, string fecha_n) : Persona(nom,ape,dir,tel,fecha_n){
		puesto = pst;			
			
		}
	

};
