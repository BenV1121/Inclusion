#pragma once
#include<iostream>

struct Dinosaur
{
	char name[80];
	int teeth;
	int height;
	char diet[80];
};

Dinosaur makeDino();
void printDino(const Dinosaur &Dino);
void modifyDino(Dinosaur &Dino);