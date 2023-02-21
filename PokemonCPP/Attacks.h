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

		Attack();
		Attack(string _name, Type _kind, int _damage)
		{
			Name = _name;
			Kind = _kind;
			Damage = _damage;
		}
	};
}