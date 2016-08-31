// benjamin.vongtawan@students.aie.edu.au
#include "Header.h"
#include<cstdio>

void main()
{
	const int array_size = 20;
	Dinosaur dino[array_size];
	for (int i = 0; i < array_size; ++i)
	{
		dino[i] = makeDino();
		printDino(dino[i]);
		modifyDino(dino[i]);
		printDino(dino[i]);
	}
	getchar();
}