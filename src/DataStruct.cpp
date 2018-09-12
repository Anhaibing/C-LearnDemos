#include "DataStruct.h"

void initBooks () {
	Books book;

	strcpy (book.title, "Learn C++ Pragrams");
	strcpy (book.auther, "haibing.an");
	strcpy (book.subject, "C++");
	book.bookId = 1047255;

	showBooks (book);
	showBook (&book);
}

//struct used for arg
void showBooks (Books book) {
	cout << "title: " << book.title << endl;
	cout << "auther: " << book.auther << endl;
	cout << "subject: " << book.subject << endl;
	cout << "ID: " << book.bookId << endl;
}

//struct point used for arg
void showBook (Books * book) {
	cout << "title: " << book->title << endl;
	cout << "auther: " << book->auther << endl;
	cout << "subject: " << book->subject << endl;
	cout << "ID: " << book->bookId << endl;
}
