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

	Type CharmenderW[3] = { Water, Rock, Electric };
	Type CharmenderR[3] = { Fire, Flying, Ground };
	Pokemon Charmender("Charmender", Fire, 45, CharmenderW, CharmenderR);

}
