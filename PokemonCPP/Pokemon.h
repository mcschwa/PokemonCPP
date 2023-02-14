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
		default:
			return "Uh oh :(";
		}
	}

	class Pokemon
	{
	public:
		string Name;
		Type Type;
		int Health;
		int Damage;

		Pokemon(string _name, Pokemons::Type _type, int _health, int _damage)
		{
			Name = _name;
			Type = _type;
			Health = _health;
			Damage = _damage;
		}

		void updateHealth(bool _positive, int _amount)
		{
			if (_positive)
			{
				Health = Health + _amount;
			}
			else
			{
				Health = Health - _amount;
			}
		}
	};
}