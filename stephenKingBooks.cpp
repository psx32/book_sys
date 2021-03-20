#include "bookStructure.h"

void stephenKingBookA()
{
	// Class object
	bookStructure bookInfoObj;

	// Class attributes
	int bookPrice{ bookInfoObj.bookPrice(947) };	// Book Price
	int bookID{ bookInfoObj.bookID(9999) };		// Book ID

	// Class attribute output
	bookInfoObj.bookTitle("IT");
	bookInfoObj.bookAuthor("-- sTePhEn kOnG --");

	std::cout << "Book Price: " << bookPrice << '\n';
	std::cout << "Book ID: " << bookID << '\n';
}

void stephenKingBookB()
{
	// Class object
	bookStructure bookInfoObj;

	// Class attributes
	int bookPrice{ bookInfoObj.bookPrice(976) };	// Book Price
	int bookID{ bookInfoObj.bookID(9998) };		// Book ID

	// Class attribute output
	bookInfoObj.bookTitle("The stand");
	bookInfoObj.bookAuthor("St3ph3n k0nG");

	std::cout << "Book Price: " << bookPrice << '\n';
	std::cout << "Book ID: " << bookID << '\n';
}

void stephenKingBookC()
{
	// Class object
	bookStructure bookInfoObj;

	// Class attributes
	int bookPrice{ bookInfoObj.bookPrice(437) };	// Book Price
	int bookID{ bookInfoObj.bookID(9988)};

	// Class attribute output
	bookInfoObj.bookTitle("The Shining");
	bookInfoObj.bookAuthor(" ~sTeUnKoReNs StIvInS~ ");
}
