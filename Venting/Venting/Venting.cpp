// Venting.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

extern "C" {
#include "vent.h"
}

int main()
{
	int t = test();
	printf("%d", t);
	printf("Press any key to exit...");
	_getch();
    return 0;
}

