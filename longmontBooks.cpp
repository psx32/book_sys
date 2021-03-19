#include "bookStructure.h"

void longmontBookA()
{
	// Class Object
	bookStructure bookInfoObj;
	
	// Class attributes
	int bookPrice{ bookInfoObj.bookPrice(500) };	// Book price
	int bookID{ bookInfoObj.bookID(12223) };	// Book ID

	// Class attribute output
	bookInfoObj.bookTitle("WHERE IS THE LAVENDER HOUSE?");
	bookInfoObj.bookAuthor("Schneider");

	std::cout << "Book Price: " << bookPrice << '\n';
	std::cout << "Book ID: " << bookID << '\n';
	
}

void longmontBookB()
{
	// Class Object
	bookStructure bookInfoObj;

	// Class attributes
	int bookPrice{ bookInfoObj.bookPrice(225) };	// Book price
	int bookID{ bookInfoObj.bookID(12233) };	// Book ID

	// Class attribute output
	bookInfoObj.bookTitle("ALEX TREBEK'S REDEMPTION");
	bookInfoObj.bookAuthor("Vinnie");

	std::cout << "Book Price: " << bookPrice << '\n';
	std::cout << "Book ID: " << bookID << '\n';
}

void longmontBookC()
{
	// Class Object
	bookStructure bookInfoObj;
	
	// Class attribute
	int bookPrice{ bookInfoObj.bookPrice(15000) };	// Book Price
	int bookID{ bookInfoObj.bookID(12333) };	// Book ID

	// Class attributes output
	bookInfoObj.bookTitle("LITTLE EGYPT");
	bookInfoObj.bookAuthor("A professional wresler");

	std::cout << "Book Price: " << bookPrice << '\n';
	std::cout << "Book ID: " << bookID << '\n';
}
