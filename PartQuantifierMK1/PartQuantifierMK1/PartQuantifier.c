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

void menulayer1 (void)
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


}
