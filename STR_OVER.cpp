#include <iostream>
#include <string.h>

class string
{
public:
           string(char *);
    char* operator +(char *);
    char* operator -(char);
    int   operator ==(string);
    void   show_string(void);
           ~string(void);
private:
    char data[256];
};

string::~string(void)
{
    std::cout << ">>Object destroyed." << std::endl;
}

string::string(char *str)
{
    strcpy(data,
           str);
}

char* string::operator +(char *str)
{
    return
        (strcat(data,
                str));
}

char* string::operator -(char letter)
{
    char temp[256];
    int i, j;

    for (i = 0, j = 0; data[i]; i++)

        if(data[i] != letter)

            temp[j++] = data[i];

    temp[j] = '\0';

    return
        (strcpy(data,
                temp));
}

int string::operator ==(string str)
{
    int i;
    for(i = 0; data[i] == str.data[i]; i++)
        if ((data[i] == '\0') && (str.data[i] == '\0'))
            return 1;
    return 0;
}

void string::show_string(void)
{
    std::cout << data << std::endl;
}

int main(void)
{
    string title("Learn programming on C++. ");
    string lesson("Operator overload.");
    string str("Learn programming on C++. ");

    title.show_string();
    //For example:
    //title = title + "I learn!";  //Twice as many objects are created.
    //title + "I learn!";
    //title.show_string();

    lesson.show_string();
    //For example:
    //lesson = lesson - 'o';    //Twice as many objects are created.
    lesson - 'o';
    lesson.show_string();

    if(title == lesson)
        std::cout << "title = lesson" << std::endl;
    if(str   == lesson)
        std::cout << "str = lesson"   << std::endl;
    if(title == str)
        std::cout << "title = str"    << std::endl;
}