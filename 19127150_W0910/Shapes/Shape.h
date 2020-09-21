#ifndef _SHAPE_H_
#define _SHAPE_H_

#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include "random.h"
#include "tokenizer.h"

#define PI 3.14

using namespace std;

class Shape
{
public:
	virtual string getShapeInfo() = 0;
	virtual float calcArea() = 0;
};

class Circle : public Shape
{
private:
	int _radius;
public:
	Circle();
	Circle(int radius);
	string getShapeInfo();
	float calcArea();
};

class Square : public Shape
{
private:
	int _edge;
public:
	Square();
	Square(int edge);
	string getShapeInfo();
	float calcArea();
};

class Rectangle : public Shape
{
private:
	int _length;
	int _width;
public:
	Rectangle();
	Rectangle(int length, int width);
	string getShapeInfo();
	float calcArea();
};

class Triangle : public Shape
{
private:
	int _edge1;
	int _edge2;
	int _edge3;
public:
	Triangle();
	Triangle(int edge1, int edge2, int edge3);
	string getShapeInfo();
	float calcArea();
};

class RandomShape
{
private:
	Random _rng;
public:
	void randomNumberOfShapes(vector<Shape*> &s, int numberOfShapes);
	void saveFile(string filename, vector<Shape*> &s);
	void deleteVectorShape(vector<Shape*>& s);
	void readFile(string filename, vector<Shape*>& s);
	void print3Largest(vector<Shape*>& s);
};

#endif