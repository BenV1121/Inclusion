// benjamin.vongtawan@students.aie.edu.au
#include<iostream>
#include<cstdio>

struct Dinosaur 
{
	char name[80];
	int teeth;
	int height;
	char diet[80];
};

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

void modifyDino(Dinosaur &Dino)
{
	scanf_s("%s %d %d %s", Dino.name, 80, &Dino.teeth, &Dino.height, &Dino.diet, 80);
	getchar();
}

void main()
{
	const int array_size = 20;
	Dinosaur dino[array_size];
	for(int i = 0; i < array_size; ++i)
	{
		dino[i] = makeDino();
		printDino(dino[i]);
		modifyDino(dino[i]);
		printDino(dino[i]);
	}
	getchar();
}
