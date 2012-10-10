#include <iostream>
#include <string.h>

using namespace std;

class computer_screen
{
public:
    computer_screen(char *,
                    long,
                    int,
                    int);
    ~computer_screen();

    void show_screen(void);

private:
    char type[32];
    long colors;
    int  x_resolution;
    int  y_resolution;
};

computer_screen::computer_screen(char *type,
                                 long colors,
                                 int x_res,
                                 int y_res)
{
    strcpy(computer_screen::type,
           type);

    computer_screen::colors       = colors;
    computer_screen::x_resolution = x_res;
    computer_screen::y_resolution = y_res;
}

computer_screen::~computer_screen(void)
{
    cout << "Debug >> Object computer_screen destroed. ";
    cout << endl;
}

void computer_screen::show_screen(void)
{
    cout << "Screen type: " << type   << endl;
    cout << "Colors: "      << colors << endl;
    cout << "Resolution: "  << x_resolution;
    cout << " на "          << y_resolution;
    cout << endl;
}

class mother_board
{
public:
    mother_board(int,
                 int,
                 int);
    ~mother_board(void);

    void show_mother_board(void);

private:
    int processor;
    int speed;
    int RAM;
};

mother_board::mother_board(int processor,
                           int speed,
                           int RAM)
{
    mother_board::processor = processor;
    mother_board::speed     = speed;
    mother_board::RAM       = RAM;
}

mother_board::~mother_board(void)
{
    cout << "Debug >> Object mother_board destroed. ";
    cout << endl;
}

void mother_board::show_mother_board(void)
{
    cout << "Processor: " << processor          << endl;
    cout << "Friquency: " << speed     << "GHz" << endl;
    cout << "RAM: "       << RAM       << "Gb"  << endl;
}

class computer :
      public computer_screen,
      public mother_board
{
public:
    computer(char *,
             int,
             float,
             char *,
             long,
             int,
             int,
             int,
             int,
             int);
    ~computer(void);

    void show_computer(void);

private:
    char  name[64];
    int   hard_disk;
    float floppy;
};

computer::computer(char  *name,
                   int   hard_disk,
                   float floppy,
                   char  *screen,
                   long  colors,
                   int   x_res,
                   int   y_res,
                   int   processor,
                   int   speed,
                   int   RAM)

: computer_screen(screen,
                  colors,
                  x_res,
                  y_res),

  mother_board(processor,
               speed,
               RAM)
{
    strcpy(computer::name,
           name);

    computer::hard_disk = hard_disk;
    computer::floppy    = floppy;
}

computer::~computer(void)
{
    cout << "Debug >> Object computer destroed. " << endl;
}

void computer::show_computer(void)
{
    cout << "Name: "       << name              << endl;
    cout << "Hard disk "   << hard_disk << "Gb" << endl;
    cout << "Floppy disk " << floppy    << "Mb" << endl;

    show_mother_board();
    show_screen();
}

class work_station : public computer
{
public:
    work_station(char *,
                 char *,
                 int,
                 float,
                 char *,
                 long,
                 int,
                 int,
                 int,
                 int,
                 int);
    ~work_station(void);

    void show_work_station(void);

private:
    char operating_system[64];
};

work_station::work_station(char  *operating_system,
                           char  *name,
                           int   hard_disk,
                           float floppy,
                           char  *screen,
                           long  colors,
                           int   x_res,
                           int   y_res,
                           int   processor,
                           int   speed,
                           int   RAM)
: computer(name,
           hard_disk,
           floppy,
           screen,
           colors,
           x_res,
           y_res,
           processor,
           speed,
           RAM)
{
    strcpy(work_station::operating_system,
           operating_system);
}

work_station::~work_station(void)
{
    cout << "Debug >> Object work_station destroed. ";
    cout << endl;
}

void work_station::show_work_station(void)
{
    cout << "Operating system: " << operating_system;
    cout << endl;

    show_computer();
}

int main(void)
{
    work_station my_pc( "Win7",
                        "D41LT663",
                        200,
                        1.44,
                        "TFT",
                        32000000,
                        1920,
                        1780,
                        686,
                        3,
                        4 );

    my_pc.show_work_station();
}