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
	class Pokemons
	{

	};

	class Pokemon : Pokemons
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

		/*
			GETTERS
		*/

		string getName()
		{
			return Name;
		}

		Type getKind()
		{
			return Kind;
		}

		int getHealth()
		{
			return Health;
		}

		Type* getWeaknesses()
		{
			return Weaknesses;
		}

		Type* getResistances()
		{
			return Resistances;
		}

		Attack* getAttacks()
		{
			return Attacks;
		}

		Attack pickAttack()
		{
			srand(time(NULL));
			int randominteger = rand() % sizeof(Attacks) / sizeof(int);

			return Attacks[randominteger];
		}

		/*
			CHECKERS
		*/

		bool checkWeaknesses(Type _weakness)
		{
			for (int i = 0; i < sizeof(Weaknesses) / sizeof(int); i++)
			{
				if (Weaknesses[i] == _weakness)
				{
					return true;
				}
			}

			return false;
		}

		bool checkResistances(Type _resistance)
		{
			for (int i = 0; i < sizeof(Resistances) / sizeof(int); i++)
			{
				if (Resistances[i] == _resistance)
				{
					return true;
				}
			}

			return false;
		}

		void attackEnemy(Pokemon &_enemy, Attack _attack)
		{
			int damage = _attack.Damage;

			cout << "ORIGINAL: " << damage << endl;

			if (_enemy.checkWeaknesses(_attack.Kind))
			{
				damage *= 1.25;
			}

			if (_enemy.checkResistances(_attack.Kind))
			{
				damage /= 0.75;
			}

			cout << "NOW: " << damage;

			_enemy.updateHealth('-', damage);
		}
	};
}