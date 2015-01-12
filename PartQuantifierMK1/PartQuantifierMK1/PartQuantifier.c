/*
* Program: Part Quantifier
* Author: Matthew Ferran
* Date Created: 12/19/2014
*
* Discription: This program is an inventory system for keeping track
*			   of the number, location, and use of various parts in 
*			   the shop.
*
* Version: 1
*/

#include "PartQuantifier.h"

void menu_main (void)
{
	char choice = '\0';

	// menu options: update, equipment, tools, raw materials, pipe fittings, road vehicles, electrical, tractors
	printf("Input the number of your choice and press enter\n");
	printf("1.) Electrical\n");
	printf("2.) Equipment\n");
	printf("3.) Pipe Fittings\n");
	printf("4.) Raw Materials\n");
	printf("5.) Road Vehicles\n");
	printf("6.) Tools\n");
	printf("7.) Tractors\n");
	scanf(" %c", &choice);

	switch (choice)
	{
	
	system("CLS");
	printf("User selected: ");	
	case '1':
		printf("Electrical");
	case '2':
		printf("Equipment");
	case '3':
		printf("Pipe Fittings");
	case '4':
		printf("Raw Materials");
	case '5':
		printf("Road Vehicles");
	case '6':
		printf("Tools");
	case '7':
		printf("Tractors");
	}

}

void menu_electrical (void)
{
	char choice = '\0';

	printf("1.) Protection\n");
	printf("2.) Motors\n");
	printf("3.) Wiring\n");
	scanf(" %c", &choice);
}
