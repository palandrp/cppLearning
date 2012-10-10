#include <iostream>
#include <string.h>

using namespace std;

class book
{
public:
    book(char *,
         char *,
         int);
    ~book(void);

    void show_book(void);

private:
    char title[64];
    char author[64];
    int  pages;
};

book::book(char *title,
           char *author,
           int  pages)
{
    strcpy(book::title,
           title);
    strcpy(book::author,
           author);
    book::pages = pages;
}

void book::show_book(void)
{
    cout << "Name: "   << title  << endl;
    cout << "Author: " << author << endl;
    cout << "Pages: "  << pages  << endl;
}

class library_card : public book
{
public:
    library_card
}