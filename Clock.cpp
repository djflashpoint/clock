#include "Clock.h"
using namespace std::literals;
int main()
	{
		while (true)
			{
				time_t now = time(NULL);
				std::cout << R"(					HELLO! THE CURRENT DATE AND TIME IS: )" << '\n';
				std::cout << R"(						)" << (ctime(&now));
				std::this_thread::sleep_for(1s);
				system("clear");
			}
	}
