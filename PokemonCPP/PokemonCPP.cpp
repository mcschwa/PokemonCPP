#include <iostream>
#include <stdlib.h>
#include "Pokemons.h"
#include "Types.h"
#include "Attacks.h"

using namespace std;
using namespace Pokemons;
using namespace Types;
using namespace Attacks;

int main()
{
	Pokemon Charmender("Charmender", Fire, 40, new Type[2] {Water, Fire}, new Type[2] {Fire, Flying}, new Attack[2] {firePunch, fireSwing});
	Pokemon Watermon("Watermon", Water, 40, new Type[2] {Fire, Fire}, new Type[2] {Water, Flying}, new Attack[2] {waterPunch, waterSwing});

	Charmender.attackEnemy(Watermon, Charmender.pickAttack());

	return 1;
}
