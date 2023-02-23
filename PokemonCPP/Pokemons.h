#pragma once
#include <iostream>
#include <fstream>
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
		int Health;
		Type* Weaknesses;
		Type* Resistances;
		Attack* Attacks;

		Pokemon()
		{
			Name = "Unset";
		}
		Pokemon(string _name, Type _kind, int _health, Type _weaknesses[], Type _resistances[], Attack _attacks[])
		{
			Name = _name;
			Kind = _kind;
			Health = _health;
			Weaknesses = _weaknesses;
			Resistances = _resistances;
			Attacks = _attacks;
		}

		/*
			SETTERS
		*/

		void setName(string _name)
		{
			Name = _name;
		}

		void setType(Type _kind)
		{
			Kind = _kind;
		}

		void setHealth(int _health)
		{
			Health = _health;
		}

		void updateHealth(char _operator, int _amount)
		{
			switch (_operator)
			{
			case '+':
				Health += _amount;
				break;
			case '-':
				Health -= _amount;
				break;
			case '*':
				Health *= _amount;
				break;
			case '/':
				Health /= _amount;
				break;
			}
		}

		Attack pickAttack()
		{
			int attackSize = sizeof(Attacks) / sizeof(int);
			int randominteger = 2;

			Attack fix;
			return fix;
		}

		void attackEnemy(Pokemon &_enemy, Attack _attack)
		{

		}
	};
}