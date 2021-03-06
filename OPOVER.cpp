#include <iostream>
#include <string.h>

class string
{
public:
         string(char *);
    void operator +(char *);
    void operator -(char);
    void show_string(void);
         ~string(void);
private:
    char data[256];
};

string::~string(void)
{
    std::cout << "Object destroyed." << std::endl;
}

string::string(char *str)
{
    strcpy(data,
           str);
}

void string::operator +(char *str)
{
    strcat(data,
           str);
}

void string::operator -(char letter)
{
    char temp[256];
    int i, j;

    for (i = 0, j = 0; data[i]; i++)
        if(data[i] != letter)
            temp[j++] = data[i];

    temp[j] = '\0';

    strcpy(data,
           temp);
}

void string::show_string(void)
{
    std::cout << data << std::endl;
}

int main(void)
{
    string title("Learn programming on C++. ");
    string lesson("Operator overload.");

    title.show_string();
    title + "I learn!";
    title.show_string();

    lesson.show_string();
    lesson - 'o';
    lesson.show_string();
}