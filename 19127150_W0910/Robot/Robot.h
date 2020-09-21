#ifndef _ROBOT_H_
#define _ROBOT_H_
#pragma once

#include <iostream>
#include <string>
#include "random.h"
#include <vector>

using namespace std;

class Robot
{
protected:
	int _HP;
	int _ATK;
	int _DEF;
public:
	virtual string getInfo() = 0;
};

class Alpha : public Robot
{
public:
	string getInfo();
};

class Beta : public Robot
{
public:
	string getInfo();
};

class Gamma : public Robot
{
public:
	string getInfo();
};

class Megatron : public Robot
{
private:
	/*
		Type Of Megatron:
		1: Megatron Alpha + Gamma
		2: Megatron Alpha + Beta
		3: Megatron Gamma + Beta
		4: Megatron Alpha + Beta + Gamma
	*/
	int _detail[3];
	int _type;
	float _HPModifier;
	float _ATKModifier;
	float _DEFModifier;
public:
	Megatron(int type, int robot[]);
	string getInfo();
};

class Combine
{
private:
	vector<Robot*> _robot;
	/*
		Check Type Of Megatron:
		0: Not A Megatron
		1: Megatron Alpha + Gamma
		2: Megatron Alpha + Beta
		3: Megatron Gamma + Beta
		4: Megatron Alpha + Beta + Gamma
	*/
	int checkMegatronType(int robot[]);
public:
	Combine();
	void getRobotInfo();
	void clearMem();
};

#endif