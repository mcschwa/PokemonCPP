#pragma once
#include <iostream>

using namespace std;

namespace Types
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
		return Type(rand() % 18);
	}

	string typeToString(Type _type)
	{
		switch (_type)
		{
		case Normal:
			return "Normal";
		case Fire:
			return "Fire";
		case Water:
			return "Water";
		case Grass:
			return "Grass";
		case Flying:
			return "Flying";
		case Fighting:
			return "Fighting";
		case Poison:
			return "Poison";
		case Electric:
			return "Electric";
		case Ground:
			return "Ground";
		case Rock:
			return "Rock";
		case Psychic:
			return "Psychic";
		case Ice:
			return "Ice";
		case Bug:
			return "Bug";
		case Ghost:
			return "Ghost";
		case Steel:
			return "Steel";
		case Dragon:
			return "Dragon";
		case Dark:
			return "Dark";
		case Fairy:
			return "Fairy";
		}
	}
}