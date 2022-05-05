//Fichier main.cpp
//Version 1.0
//Branche release
#include <stdio.h>;
#include <string>;
#include <string.h>;
#include"Tvect.h";
#include"Cvecteur.h";



int main() {
	//test
	printf_s("Version 1.0 du programme Cpp\n");
	printf_s("Test");
	//Type structure
	vecteur tvect;
	tvect.n_x = 0;
	tvect.n_y = 0;
	tvect.n_z = 0;

	initVecteur(&tvect, 5 , 2 , 9);

	//Type classe objet
	Cvecteur cVect;
	cVect.m_nx = 0; //doit être mis en public pour pouvoir l'écrire sous cette forme (voir Cvecteur.h)
	cVect.m_ny = 0;
	cVect.m_nz = 0;

	cVect.initVect(8, 3, 9);//fonction init est membre de la classe donc doit être apeler de cette manière
	
	return 0;
}
