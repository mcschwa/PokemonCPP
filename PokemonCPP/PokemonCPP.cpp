#include <iostream>
#include "Pokemons.h"
#include "Types.h"
#include "Attacks.h"

using namespace std;
using namespace Pokemons;
using namespace Types;
using namespace Attacks;

int main()
{
	Type weaknesses[2] = { Water, Ground };
	Type resistances[2] = { Fire, Flying };
	Attack AttacksF[2] = { firePunch, fireSwing };
	Attack AttacksW[2] = { waterPunch, waterSwing };

	Pokemon Charmender("Charmender", Fire, 40, weaknesses, resistances, AttacksF);
	Pokemon Watermon("Watermon", Water, 40, resistances, weaknesses, AttacksW);

	while (1==1)
	{
		cout << typeToString(getRandomType()) << endl;
	}

	return 1;
}
