/*
    TODO:
    Написать перегружаемые функции для реплейса символа строкой,
                                                строки символом,
                                                строки строкой.
*/

#include <iostream>

using namespace std;

int str_len(char str[])
{
    int symbol = 0;

    for(int i = 0; str[i] != '\0'; i++)
    {
        symbol = i + 1;
    }

    return symbol;
}

int num_let(char str[])
{
    int letters = 0;

    for(int i = 0; str[i] != '\0'; i++)
    {
        switch(str[i])
        {
            case '.'   : break;
            case ','   : break;
            case ' '   : break;
            case '\''  : break;
            case '0'   : break;
            case '1'   : break;
            case '2'   : break;
            case '3'   : break;
            case '4'   : break;
            case '5'   : break;
            case '6'   : break;
            case '7'   : break;
            case '8'   : break;
            case '9'   : break;
            default    : 
                letters++;
        }
    }

    return letters;
}

void output(char str_1[])
{
    cout << "Book: "   << str_1 << endl;
}

void output(char str_1[], 
            char str_2[])
{
    cout << "Book: "   << str_1 << endl;
    cout << "Lesson: " << str_2 << endl;
}

void output(char str_1[], 
            char str_2[], 
            char str_3[])
{
    cout << "Book: "    << str_1 << endl;
    cout << "Lesson: "  << str_2 << endl;
    cout << "Section: " << str_3 << endl;
}

void f_repl_input(char *letter, 
                  char *repl_letter)
{
    cout << "Replace letter: ";
    cin  >> *letter;
    cout << "on: ";
    cin  >> *repl_letter;
}

void f_repl_letters(char letter, 
                    char repl_letter, 
                    char str_1[])
{
    int i = 0;

    while(str_1[i] != '\0')
    {
        if (str_1[i]  == letter)
            str_1[i]  =  repl_letter;
        i++;
    }
}

void f_repl_letters(char letter, 
                    char repl_letter, 
                    char str_1[], 
                    char str_2[])
{
    int i = 0;

    while(str_1[i] != '\0')
    {
        if (str_1[i]  == letter)
            str_1[i]  =  repl_letter;
        i++;
    }

    i = 0;

    while(str_2[i] != '\0')
    {
        if (str_2[i]  == letter)
            str_2[i]  =  repl_letter;
        i++;
    }
}

void f_repl_letters(char letter, 
                    char repl_letter, 
                    char str_1[], 
                    char str_2[], 
                    char str_3[])
{
    int i = 0;

    while(str_1[i] != '\0')
    {
        if (str_1[i]  == letter)
            str_1[i]  =  repl_letter;
        i++;
    }

    i = 0;

    while(str_2[i] != '\0')
    {
        if (str_2[i]  == letter)
            str_2[i]  =  repl_letter;
        i++;
    }

    i = 0;

    while(str_3[i] != '\0')
    {
        if (str_3[i]  == letter)
            str_3[i]  =  repl_letter;
        i++;
    }
}

void f_replace(char str_1[])
{
    char letter      = '\0';
    char repl_letter = '\0';

    f_repl_input(&letter, 
                 &repl_letter);

    f_repl_letters(letter, 
                   repl_letter, 
                   str_1);

    output(str_1);
}

void f_replace(char str_1[], 
               char str_2[])
{
    char letter      = '\0';
    char repl_letter = '\0';

    f_repl_input(&letter, 
                 &repl_letter);

    f_repl_letters(letter, 
                   repl_letter, 
                   str_1, 
                   str_2);

    output(str_1, 
           str_2);
}

void f_replace(char str_1[], 
               char str_2[],
               char str_3[])
{
    char letter      = '\0';
    char repl_letter = '\0';

    f_repl_input(&letter, 
                 &repl_letter);

    f_repl_letters(letter, 
                   repl_letter, 
                   str_1, 
                   str_2, 
                   str_3);

    output(str_1, 
           str_2, 
           str_3);
}

int main(void)
{
    char title[]   = "High mathematica. B2.";
    char lesson[]  = "Pascal's algorithms.";
    char section[] = "Pascal's method.";

    output(title, 
           lesson);

    cout << "Length of first string is "  
         << str_len(title)  << endl;
    cout << "Length of second string is " 
         << str_len(lesson) << endl;

    cout << "Number of letters in first string is "  
         << num_let(title)  << endl;
    cout << "Number of letters in second string is " 
         << num_let(lesson) << endl;

    f_replace(title, 
              lesson, 
              section);
}