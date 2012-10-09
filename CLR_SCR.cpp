#include <iostream>

class menu
{
public:
    static void clear_screen(void);
private:
    int number_of_menu_options;
};

void menu::clear_screen(void)
{
    std::cout << '\033' << "[2J";
}

int main(void)
{
    menu::clear_screen();
}