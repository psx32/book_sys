#include "bookOutput.h"
#include "stephenKingBooks.h"
#include "harryPotterBooks.h"
#include "longmontBooks.h"
#include "bookStructure.h"
#include <iostream>

int main()
{	
		
	int choice{};

	std::cout << "> Enter a number (1-3): ";
	std::cin >> choice;
	
	// Using a switch to choose from
	// from different books
	switch(choice)
	{
		case 1:	// LONGMONT BOOKS
			outputLongmont();
			break;

		case 2: // HARRY POTTER BOOKS
			outputHarryPotter();
			break;
		case 3: // STEPHEN KING BOOKS
			outputStephenKing();
			
	}

	return 0;
}
