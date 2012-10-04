#include <iostream>
#include <time.h>	//For runtime functions
using namespace std;

int main(void)
{
	time_t system_time;
	system_time = time(NULL);
	cout << "System time now: " << ctime(&system_time) << endl;
}