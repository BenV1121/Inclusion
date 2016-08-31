#include"Header.h"

void modifyDino(Dinosaur &Dino)
{
	scanf_s("%s %d %d %s", Dino.name, 80, &Dino.teeth, &Dino.height, &Dino.diet, 80);
	getchar();
}
