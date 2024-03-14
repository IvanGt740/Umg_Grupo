#include "Persona.cpp"
#include <iostream>

using namespace std;

class Cliente : Persona{
	
	private : string nit; 
	
	public :
		Cliente(){
			
		}
		
		Cliente(string nom, string ape, string dir, int tel, string fecha_n, string n) : Persona(nom,ape,dir,tel,fecha_n){
		nit = n;			
			
		}
	

};
