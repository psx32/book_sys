#include "bookStructure.h"

void harryPotterBookA()
{
	// Class Object
	bookStructure bookInfoObj;

	// Class attributes
	int bookPrice{ bookInfoObj.bookPrice(1001) }; 	// Book price
	int bookID{ bookInfoObj.bookID(10001)};		// Book ID

	// Class attribute output
	bookInfoObj.bookTitle("HARRY POTTER AND THE CURSED CHILD");
	bookInfoObj.bookAuthor("~JK Growling~");

	std::cout << "Book Price: " << bookPrice << '\n';
	std::cout << "Book ID: " << bookID << '\n';
}

void harryPotterBookB()
{
	// Class Object
	bookStructure bookInfoObj;

	// Class attribute
	int bookPrice{ bookInfoObj.bookPrice(562) };	// Book price
	int bookID{ bookInfoObj.bookID(10011) };	// Book ID

	// Class attribute output
	bookInfoObj.bookTitle("HARRY POTTER AND THE DEATHLY HALLOWS");
	bookInfoObj.bookAuthor("~JK Grownling~");

	std::cout << "Book Price: " << bookPrice << '\n';
	std::cout << "Book ID: " << bookID << '\n';
}

void harryPotterBookC()
{
	// Class Object
	bookStructure bookInfoObj;

	// Class attribute
	int bookPrice{ bookInfoObj.bookPrice(319) };	// Book Price
	int bookID{ bookInfoObj.bookID(10111) };	// Book ID

	// Class attributes output
	bookInfoObj.bookTitle("HARRY POTTER AND THE PHILOSOPHER'S STONE");
	bookInfoObj.bookAuthor("~JK Grownling~");

	std::cout << "Book Price: " << bookPrice << '\n';
	std::cout << "Book ID: " << bookID << '\n';


}
