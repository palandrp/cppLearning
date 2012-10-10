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

book::~book(void)
{
    cout << "Object book destroed." << endl;
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
    library_card(char *,
                 char *,
                 int,
                 char *,
                 int);
    ~library_card(void);

    void show_card(void);

private:
    char catalog[64];
    int  checked_out;
};

library_card::library_card(char *title,
                           char *author,
                           int  pages,
                           char *catalog,
                           int  checked_out)
: book(title,
       author,
       pages)
{
    strcpy(library_card::catalog,
           catalog);

    library_card::checked_out = checked_out;
}

library_card::~library_card(void)
{
    cout << "Object library_card destroed. " << endl;
}

void library_card::show_card(void)
{
    show_book();

    cout     << "Catalog: " << catalog  << endl;

    if(checked_out)
        cout << "Status: checked out. " << endl;
    else
        cout << "Status: free. "        << endl;
}

int main(void)
{
    library_card card("Learning C++.",
                      "Jamsa",
                      272,
                      "101CPP",
                      1);

    card.show_card();
}