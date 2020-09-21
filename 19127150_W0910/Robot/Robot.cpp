#include "Robot.h"
Random rng;

string Alpha::getInfo()
{
	return "Alpha, Alpha, Alpha: no combination";
}

Combine::Combine()
{
	for (int i = 0; i < 3; i++)
	{
		int temp[3];

		for (int j = 0; j < 3; j++)
			temp[j] = rng.next(3);

		if (this->checkMegatronType(temp) == 0)
		{
			if (temp[0] == 0)
			{
				this->_robot.push_back(new Alpha);
				continue;
			}

			if (temp[0] == 1)
			{
				this->_robot.push_back(new Beta);
				continue;
			}

			if (temp[0] == 2)
			{
				this->_robot.push_back(new Gamma);
				continue;
			}
		}

		if (this->checkMegatronType(temp) == 1)
		{
			this->_robot.push_back(new Megatron(1, temp));
			continue;
		}

		if (this->checkMegatronType(temp) == 2)
		{
			this->_robot.push_back(new Megatron(2, temp));
			continue;
		}

		if (this->checkMegatronType(temp) == 3)
		{
			this->_robot.push_back(new Megatron(3, temp));
			continue;
		}

		if (this->checkMegatronType(temp) == 4)
		{
			this->_robot.push_back(new Megatron(4, temp));
			continue;
		}
	}
}

void Combine::getRobotInfo()
{
	cout << "Robot info:\n\n";
	for (int i = 0; i < this->_robot.size(); i++)
		cout << "No " << i + 1 << ":\n" << this->_robot[i]->getInfo() << endl << endl;
}

void Combine::clearMem()
{
	for (int i = 0; i < this->_robot.size(); i++)
		delete this->_robot[i];

	this->_robot.clear();
}

int Combine::checkMegatronType(int robot[])
{
	for (int i = 0; i < 3; i++)
		if (robot[i] == 0)
		{
			for (int j = 0; j < 3; j++)
				if (robot[j] == 1)
				{
					for (int k = 0; k < 3; k++)
					{
						if (robot[k] == 2)
							return 4;
					}
					return 3;
				}
				else
				{
					for (int k = 0; k < 3; k++)
					{
						if (robot[k] == 2)
							return 1;
					}
					return 0;
				}
		}
	
	for (int i = 0; i < 3; i++)
		if (robot[i] == 1)
		{
			for (int j = 0; j < 3; j++)
				if (robot[j] == 2)
					return 2;
			return 0;
		}

	return 0;
}

Megatron::Megatron(int type, int robot[])
{
	this->_type = type;

	if (this->_type == 1)
	{
		this->_HPModifier = 2;
		this->_ATKModifier = 2;
		this->_DEFModifier = 1;
		int count = 0;
		for (int i = 0; i < 3; i++)
			if (robot[i] == 0)
				count++;
		if (count == 2)
		{
			this->_ATK = 150 * 2 + 100;
			this->_DEF = 50 * 2 + 100;
			this->_HP = 100 * 2 + 100;
		}
		else
		{
			this->_ATK = 100 * 2 + 150;
			this->_DEF = 100 * 2 + 50;
			this->_HP = 100 * 2 + 100;
		}
		for (int i = 0; i < 3; i++)
			this->_detail[i] = robot[i];
		return;
	}

	if (this->_type == 2)
	{
		this->_HPModifier = 1;
		this->_ATKModifier = 1.5;
		this->_DEFModifier = 2;
		int count = 0;
		for (int i = 0; i < 3; i++)
			if (robot[i] == 1)
				count++;
		if (count == 2)
		{
			this->_ATK = 50 * 2 + 100;
			this->_DEF = 150 * 2 + 100;
			this->_HP = 150 * 2 + 100;
		}
		else
		{
			this->_ATK = 100 * 2 + 50;
			this->_DEF = 100 * 2 + 150;
			this->_HP = 100 * 2 + 150;
		}
		for (int i = 0; i < 3; i++)
			this->_detail[i] = robot[i];
		return;
	}

	if (this->_type == 3)
	{
		this->_HPModifier = 3;
		this->_ATKModifier = 1;
		this->_DEFModifier = 1.2;
		int count = 0;
		for (int i = 0; i < 3; i++)
			if (robot[i] == 0)
				count++;
		if (count == 2)
		{
			this->_ATK = 150 * 2 + 50;
			this->_DEF = 50 * 2 + 150;
			this->_HP = 100 * 2 + 150;
		}
		else
		{
			this->_ATK = 50 * 2 + 150;
			this->_DEF = 150 * 2 + 50;
			this->_HP = 150 * 2 + 100;
		}
		for (int i = 0; i < 3; i++)
			this->_detail[i] = robot[i];
		return;
	}

	if (this->_type == 4)
	{
		this->_HPModifier = 7;
		this->_ATKModifier = 7;
		this->_DEFModifier = 7;
		this->_ATK = 150 + 50 + 100;
		this->_DEF = 50 + 150 + 100;
		this->_HP = 100 + 150 + 100;
		for (int i = 0; i < 3; i++)
			this->_detail[i] = robot[i];
		return;
	}

	//error case
	for (int i = 0; i < 3; i++)
		this->_detail[i] = 0;
	this->_ATK = 0;
	this->_DEF = 0;
	this->_HP = 0;
	this->_HPModifier = 1;
	this->_ATKModifier = 1;
	this->_DEFModifier = 1;
}

string Megatron::getInfo()
{
	string result = "";

	for (int i = 0; i < 3; i++)
	{
		if (i != 0)
			result += ", ";

		if (this->_detail[i] == 0)
		{
			result += "Alpha";
			continue;
		}

		if (this->_detail[i] == 1)
		{
			result += "Beta";
			continue;
		}

		if (this->_detail[i] == 2)
		{
			result += "Gamma";
			continue;
		}

		if (i == 2)
			break;
	}

	if (this->_type == 1)
	{
		result = result + ": Megatron with double HP and double ATK.\nMegatron status:\nATK = " + to_string((int)(this->_ATK * this->_ATKModifier));
		result = result + "\nDEF = " + to_string((int)(this->_DEF * this->_DEFModifier));
		result = result + "\nHP = " + to_string((int)(this->_HP * this->_HPModifier));
		return result;
	}

	if (this->_type == 2)
	{
		result = result + ": Megatron with ATK x1.5 and double DEF.\nMegatron status:\nATK = " + to_string((int)(this->_ATK * this->_ATKModifier));
		result = result + "\nDEF = " + to_string((int)(this->_DEF * this->_DEFModifier));
		result = result + "\nHP = " + to_string((int)(this->_HP * this->_HPModifier));
		return result;
	}

	if (this->_type == 3)
	{
		result = result + ": Megatron with HP x3 and DEF x1.2.\nMegatron status:\nATK = " + to_string((int)(this->_ATK * this->_ATKModifier));
		result = result + "\nDEF = " + to_string((int)(this->_DEF * this->_DEFModifier));
		result = result + "\nHP = " + to_string((int)(this->_HP * this->_HPModifier));
		return result;
	}

	if (this->_type == 4)
	{
		result = result + ": Megatron with HP, ATK, DEF x7.\nMegatron status:\nATK = " + to_string((int)(this->_ATK * this->_ATKModifier));
		result = result + "\nDEF = " + to_string((int)(this->_DEF * this->_DEFModifier));
		result = result + "\nHP = " + to_string((int)(this->_HP * this->_HPModifier));
		return result;
	}
}

string Beta::getInfo()
{
	return "Beta, Beta, Beta: no combination";
}

string Gamma::getInfo()
{
	return "Gamma, Gamma, Gamma: no combination";
}
