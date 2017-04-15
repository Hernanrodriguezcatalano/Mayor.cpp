// Mayor.cpp : Defines the entry point for the console application.
//
/*
Mayor.cpp
Hernan Rodriguez
1505397
15/4/2017
Se ingresan 2 numeros y se imprime en pantalla cual de los dos es mayor
*/

#include "stdafx.h"
#include "iostream"
int main()
{
	{
		float a, b, mayor;                         //Declaracion de las variables 	

		std::cin >> a;							   //Ingreso de datos
		std::cin >> b;

		if (a>b)                                   //Se comparan los valores ingresados 
		{
			mayor = a;
		}
		else if (a<b)
		{
			mayor = b;
		}

	}
}