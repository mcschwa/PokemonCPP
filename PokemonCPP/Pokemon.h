#pragma once
#include <iostream>
#include <array>

using namespace std;

namespace Pokemons
{
	enum Type
	{
		Normal,
		Fire,
		Water,
		Grass,
		Flying,
		Fighting,
		Poison,
		Electric,
		Ground,
		Rock,
		Psychic,
		Ice,
		Bug,
		Ghost,
		Steel,
		Dragon,
		Dark,
		Fairy
	};

	class Attack
	{
	public:
		string Name;
		Type Type;
		int Damage;

		Attack(string _name, Pokemons::Type _type, int _damage)
		{
			Name = _name;
			Type = _type;
			Damage = _damage;
		}
	};

	class Pokemon
	{
	public:
		string Name;
		Type Type;
		int Health;

		Pokemon(string _name, Pokemons::Type _type, int _health)
		{
			Name = _name;
			Type = _type;
			Health = _health;
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