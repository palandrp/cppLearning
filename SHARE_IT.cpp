#include <iostream>
#include <string.h>

class book_series
{
public:
    book_series(char *,
                char *,
                float);
    void show_book(void);
    void set_pages(int);

private:
    static int page_count;

    char  title[64];
    char  author[64];
    float price;
};

int book_series::page_count;

void book_series::set_pages(int pages)
{
    page_count = pages;
}

book_series::book_series(char  *title,
                         char  *author,
                         float price)
{
    strcpy(book_series::title, title);
    strcpy(book_series::author, author);
    book_series::price = price;
}

void book_series::show_book(void)
{
    std::cout << "Title: "  << title      << std::endl;
    std::cout << "Author: " << author     << std::endl;
    std::cout << "Price: "  << price      << std::endl;
    std::cout << "Pages: "  << page_count << std::endl;
}

int main(void)
{
    book_series programming("Learn programming on C++",
                                               "Jamsa",
                                                22.95);
    book_series word("Learn work with Word for Windows",
                                                "Wyatt",
                                                 19.95);
    
    word.set_pages(256);
    
    programming.show_book();
    word.show_book();

    std::cout << std::endl << "Change page_count" << std::endl;

    programming.set_pages(512);

    programming.show_book();
    word.show_book();
}