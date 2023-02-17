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
	fstream fileHandler;

	class Pokemon
	{
	public:
		string Name;
		Type Kind;
		int Health;
		Type* Weaknesses;
		Type* Resistances;
		Attack* Attacks;

		Pokemon();
		Pokemon(string _name, Type _kind, int _health, Type _weaknesses[], Type _resistances[])
		{
			Name = _name;
			Kind = _kind;
			Health = _health;
			Weaknesses = _weaknesses;
			Resistances = _resistances;
		}
		
		/*
			SETTERS
		*/
		void setName(string _name = "")
		{
			string randomNames[3] = { "1", "2", "3" };

			if (_name != "")
			{
				Name = _name;

				return;
			}

			Name = randomNames[rand() % 3];
		}

		void setType(Type _kind)
		{
			Kind = _kind;
		}

		void setRandomType()
		{
			Kind = getRandomType();
		}

		void setWeaknesses()
		{

		}

		void setResistances()
		{

		}

		/*
			CHECKERS
		*/
		bool checkWeaknesses(Type _kind)
		{
			for (int i = 0; i < sizeof(*Weaknesses) / sizeof(int); i++)
			{
				if (*Weaknesses == _kind)
				{
					return true;
				}
				Weaknesses++;
			}
			return false;
		}

		bool checkResistances(Type _kind)
		{
			for (int i = 0; i < sizeof(*Resistances) / sizeof(int); i++)
			{
				if (*Weaknesses == _kind)
				{
					return true;
				}
				Resistances++;
			}
			return false;
		}

		bool checkHealth()
		{
			if (Health <= 0)
			{
				return false;
			}

			return true;
		}

		/*
			ACTIONS
		*/
		void attackEnemy(Pokemon& _reciever, Attack _attack)
		{
			int actualDamage = 30;

			if (checkResistances(Kind))
			{
				actualDamage /= 0.75;
			}
			if (checkWeaknesses(Kind))
			{
				actualDamage *= 1.75;
			}

			_reciever.updateHealth('-', actualDamage);

			return;
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
	};

	Pokemon createRandomPokemon()
	{
		Type randomW[3];
		Type randomR[3];
		Pokemon randomPokemon;
		randomPokemon.setName();
		randomPokemon.setRandomType();

		return randomPokemon;
	}
}