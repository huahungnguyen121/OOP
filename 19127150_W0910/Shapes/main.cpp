#include "Shape.h"

void main()
{
	vector<Shape*> s;

	Random rng;
	RandomShape rng2;

	int numberOfShapes = 10 + rng.next(11);

	rng2.randomNumberOfShapes(s, numberOfShapes);

	rng2.saveFile("ShapeInfo.txt", s);

	rng2.deleteVectorShape(s);

	rng2.readFile("ShapeInfo.txt", s);

	rng2.print3Largest(s);

	rng2.deleteVectorShape(s);
}