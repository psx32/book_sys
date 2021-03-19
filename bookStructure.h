/* - Book structure / builder - 
 * ----------------------------
 * What will be used when we
 * add new books to the book-
 * shop system*/

#include <string>
#include <iostream>

#ifndef BOOKSTRUCTURE_H
#define BOOKSTRUCTURE_H

class bookStructure
{
public:

	// Book Title
	void bookTitle(std::string title) 
	{ 
		std::cout << "Book Title: " << title << '\n'; 
	}
	// Book Author
	void bookAuthor(std::string author)
	{
		std::cout << "Book Author: " << author << '\n';
	}
	
	int bookID(int ID) { return ID; }		// Book ID
	int bookPrice(int price) { return price; }	// Book Price

};

#endif
