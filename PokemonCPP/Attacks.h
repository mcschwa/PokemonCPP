#pragma once
#include <iostream>
#include "Types.h"


using namespace std;
using namespace Types;

namespace Attacks
{
	class Attack
	{
	public:
		string Name;
		Type Kind;
		int Damage;

		Attack()
		{
			Name = "Unset";
		}
		Attack(string _name, Type _kind, int _damage)
		{
			Name = _name;
			Kind = _kind;
			Damage = _damage;
		}
	};

	Attack firePunch("Firepunch", Fire, 35);
	Attack fireSwing("Fireswing", Fire, 25);

	Attack waterPunch("Waterpunch", Water, 35);
	Attack waterSwing("Waterswing", Water, 25);
}