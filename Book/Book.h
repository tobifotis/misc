#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>

using namespace std;

class Book
{
private:
    string author;
    string title;
    string genre;
    int numPages;

public:
    Book(string author, string title, string genre, int numPages);
    string getAuthor() const;
    string getTitle() const;
    string getGenre() const;
    int getNumPages() const;
    void printBookDetails() const;
};

#endif