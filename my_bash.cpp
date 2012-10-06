/**
    Created with Sublime Text 2.
    User: kimdo
    Date: 06.10.12
    Time: 23:15
    Description: This small program - a pattern of the shell. 
    It still needs work, but is able to parse the commands, 
    and it even has a small manual.
 */

 /*
    BAGS: Parameters fails to parse. In the input line, it 
    seems that every word is terminated by NULL.
 */

/*
    TODO: Need another way to enter the line.
*/

#include <iostream>

using namespace std;

//Begin of Q-util
void param_analysis(char *string, 
                    int  *param_1, 
                    int  *param_2, 
                    int  *param_3)
{
    for(int i = 0; *string != '\0'; string++, i++)
    {
        if(string[i] == '-')
        {
            switch(string[++i])
            {
                case 'A'    : 
                {
                    while(string[i] != '\0')
                    {
                        i++;
                        if(string[i] != ' ')
                        {
                            *param_1 = (int)*string;
                            break;
                        }
                    } break;
                }
                case 'B'    :
                {
                    while(string[i] != '\0')
                    {
                        i++;
                        if(string[i] != ' ')
                        {
                            *param_2 = (int)*string;
                            break;
                        }
                    } break;

                }
                case 'C'    :
                {
                    while(string[i] != '\0')
                    {
                        if(string[i] != ' ')
                        {
                            *param_3 = (int)*string;
                            break;
                        }
                    } break;

                }
                default     :
                    cout << "Used syntax for ";
                    cout << "the parameters: -Ax -By -Cz ";
                    cout << endl;
                    cout << "Enter \'man\' for help. ";
                    cout << endl;
            }
        }
    }
}

void q_parser(char *string)
{
    int param_1 = 0;
    int param_2 = 0;
    int param_3 = 0;

    switch(*string)
    {
        case 'Q'    :
        {
            param_analysis(string, 
                           &param_1,
                           &param_2,
                           &param_3);
            
            cout << "Your param is " 
                 << param_1 << " " 
                 << param_2 << " " 
                 << param_3;
            break;
        }
        default     :
            cout << "-my_bash: ";
            cout << string;
            cout << ": command not found";
    }
}
//End of Q-util

void man()
{
    cout << endl;
    cout << "my_bash"                                       << endl;
    cout << "======="                                       << endl;
    cout << "Program my_bash can run one util named \"Q\""  << endl;
    cout << "if you enter \"Q\" in terminal, you also need" << endl;
    cout << "input the parameters: -A, -B, -C."             << endl;
    cout << "Q util can give you back your param in output."<< endl;
    cout << " "                                             << endl;
    cout << "Parameters:"                                   << endl;
    cout << " -A    can get number from 0 to 9"             << endl;
    cout << " -B    can get number from 0 to 9"             << endl;
    cout << " -C    can get number from 0 to 9"             << endl;
    cout << " "                                             << endl;
    cout << "Examples:"                                     << endl;
    cout << " Q -A 5 -B 6 -C 7"                             << endl;
    cout << " Q -A2 -B5 -C9"                                << endl;
}

int main(void)
{
    char string[] = "0";

    for(;;)
    {
        cout << endl;
        cout << "my_bash: ";
        cin  >> string;

        cout << "Debug: string is: " << string; //for debug only

        cout << endl;

        if(*string == 'q')
            break;

        else if(*string == 'm')
            man();

        else
            q_parser(string);
    }
}





