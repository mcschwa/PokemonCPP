#pragma once
#include <iostream>
#include "Types.h"
#include "Attacks.h"

using namespace std;
using namespace Types;
using namespace Attacks;

namespace Pokemons
{
	class Pokemon
	{
	public:
		string Name;
		Type Kind;
		Type Weaknesses[1];
		Type Resistances[1];
		int Health;

		Pokemon(string _name, Type _kind, Type _weaknesses[], Type _resistances[], int _health)
		{
			Name = _name;
			Kind = _kind;
			Health = _health;

			for (int i = 0; i < sizeof(_weaknesses); i++)
			{
				Weaknesses[i] = _weaknesses[i];
			}

			for (int i = 0; i < sizeof(_resistances); i++) 
			{
				Resistances[i] = _resistances[i];
			}
		}

		bool checkHealth()
		{
			if (Health <= 0)
			{
				return false;
			}

			return true;
		}
		void updateHealth(char _operator, int _amount)
		{
			switch (_operator) 
			{
			case '+':
				Health = Health + _amount;
				break;
			case '-':
				Health = Health - _amount;
				break;
			case '*':
				Health = Health * _amount;
				break;
			case '/':
				Health = Health / _amount;
				break;
			}
		}

		void attackEnemy(Pokemon &_reciever)
		{
			_reciever.Health = _reciever.Health - 5;
		}

	};
}