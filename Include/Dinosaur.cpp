#include"Header.h"
#include<cstdio>

Dinosaur makeDino()
{
	Dinosaur Dino;

	printf("Please describe your dinosaur (Name, how many teeth, height (feet), diet): \n");
	scanf_s("%s %d %d %s", Dino.name, 80, &Dino.teeth, &Dino.height, &Dino.diet, 80);
	getchar();

	return Dino;
}

void printDino(const Dinosaur &Dino)
{
	printf("Name: %s\n Teeth: %d\n Height: %d ft\n Diet: %s-vore\n", Dino.name, Dino.teeth, Dino.height, Dino.diet);
	getchar();
}