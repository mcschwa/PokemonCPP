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
	Type weaknessesC[2] = { Water, Water };
	Type resistancesC[2] = { Fire, Flying };
	Type weaknessesW[2] = { Fire, Fire };
	Type resistancesW[2] = { Water, Flying };
	Attack AttacksF[2] = { firePunch, fireSwing };
	Attack AttacksW[2] = { waterPunch, waterSwing };

	Pokemon Charmender("Charmender", Fire, 40, weaknessesC, resistancesC, AttacksF);
	Pokemon Watermon("Watermon", Water, 40, weaknessesW, resistancesW, AttacksW);

	Charmender.attackEnemy(Watermon, Charmender.pickAttack());

	return 1;
}
