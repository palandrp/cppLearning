#include <iostream>
#include <string.h>

using namespace std;


class book
{
public:
    book(char *,
         char *,
         char *);
    ~book(void);

    void show_book(void);

    friend class librarian;

private:
    char title[64];
    char author[64];
    char catalog[64];
};

book::book(char *title,
           char *author,
           char *catalog)
{
    strcpy(book::title,
           title);

    strcpy(book::author,
           author);

    strcpy(book::catalog,
           catalog);
}

book::~book(void)
{
    cout << "Debug >> Object book destroed. ";
    cout << endl;
}

void book::show_book(void)
{
    cout << "Name: "    << title    << endl;
    cout << "Author: "  << author   << endl;
    cout << "Catalog: " << catalog  << endl;
}


class librarian
{
public:
    void change_catalog(book *,
                        char *);

    char *get_catalog(book);

    static char catalog[64];
};

char librarian::catalog[64];

void librarian::change_catalog(book *this_book,
                               char *new_catalog)
{
    strcpy(this_book->catalog,
           new_catalog);
}

char *librarian::get_catalog(book this_book)
{
    strcpy(librarian::catalog,
           this_book.catalog);

    return(librarian::catalog);
}


int main(void)
{
    book programming("Learn C++ programming.",
                     "Jamsa",
                     "P101");

    librarian library;

    programming.show_book();

    library.change_catalog(&programming,
                           "Easy C++ 101");

    programming.show_book();

    cout << "Catalog 1: ";
    cout << library.get_catalog(programming) << endl;
}