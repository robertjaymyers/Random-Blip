// BlipItOut.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	std::random_device rd;
	std::mt19937 mt(rd());

	while (true)
	{
		std::uniform_int_distribution<int> dist(100, 1100);
		int milliRandom = dist(mt);
		std::this_thread::sleep_for(std::chrono::milliseconds(milliRandom));
		std::cout << "Blip" << std::endl;
	}

    return 0;
}

