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

#ifndef PARTQUANTIFER_H
#define PARTQUANTIFER_H
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>


// Data Types

typedef struct node
{
	char item[15];		// Item name
	int number;			// Number of the part in the shop
	char location[10];	// location of the part in the shop (Shelf [Blue A3] <== means blue wall, bottom shelf, third bin)
	FILE * itemdisc;	// ptr to a txt file containing the discription of the item. (is this what you meant Wedge?)
	struct node * next_ptr;  

} Node;


// Function Prototypes



#endif // !PARTQUANTIFER_H


//create a million little files for each item discription?
//pros: The discriptions would each be seperate entities, and would be easy to edit and veiw (maybe)
//cons: the discription would be in a file, in a list, in a struct

//would the list be lost if the computer died? The list of structs needs to persist between executions of the program, otherwise it will be useless.