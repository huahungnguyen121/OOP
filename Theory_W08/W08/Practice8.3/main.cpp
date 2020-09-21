#include "Header.h"

int main()
{
	Cheetah* a1 = new Cheetah;

	Antelope* a2 = new Antelope;

	Lion* a3 = new Lion;

	Dog* a4 = new Dog;

	Human* a5 = new Human;

	Horse* a6 = new Horse;

	tellWin(a1, a2); //Cheetah and Antelope
	tellWin(a4, a6); //Dog and Horse

	//Avoid memory leak
	delete a1;
	delete a2;
	delete a3;
	delete a4;
	delete a5;
	delete a6;

	return 0;
}