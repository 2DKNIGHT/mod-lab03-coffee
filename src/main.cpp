#include "Automata.h"
#include <string.h>

using namespace std;
int main() {
	Automata first = Automata();
	first.On();
	first.AddCoin(500);
	int _position = 1;
	first.ChoiceMenu(_position);
	first.Cook();
	first.Finish(_position);
	bool correct = false;
	if (1 == first.GetState())
	{
		correct = true;
		cout << correct;
	}
	else cout << correct;
}