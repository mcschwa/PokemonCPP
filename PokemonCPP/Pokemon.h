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

	Type getRandomType()
	{
		return Type(rand() % 10);
	}

	string typeToString(Type _type)
	{
		switch (_type)
		{
		case Pokemons::Normal:
			return "Normal";
		case Pokemons::Fire:
			return "Fire";
		case Pokemons::Water:
			return "Water";
		case Pokemons::Grass:
			return "Grass";
		case Pokemons::Flying:
			return "Flying";
		case Pokemons::Fighting:
			return "Fighting";
		case Pokemons::Poison:
			return "Poison";
		case Pokemons::Electric:
			return "Electric";
		case Pokemons::Ground:
			return "Ground";
		case Pokemons::Rock:
			return "Rock";
		case Pokemons::Psychic:
			return "Psychic";
		case Pokemons::Ice:
			return "Ice";
		case Pokemons::Bug:
			return "Bug";
		case Pokemons::Ghost:
			return "Ghost";
		case Pokemons::Steel:
			return "Steel";
		case Pokemons::Dragon:
			return "Dragon";
		case Pokemons::Dark:
			return "Dark";
		case Pokemons::Fairy:
			return "Fairy";
		}
	}

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