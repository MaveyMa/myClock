#include <iostream>
#include <string>
#include "myclock.h"
using namespace std;

int main()
{
	MyClock carpeDiem(12, 59, 59, 'A', false);
	carpeDiem.displayTime();
	carpeDiem.tick();
	carpeDiem.displayTime();
	carpeDiem.displayMilitaryTime();


	for (int i = 0; i < 120; i ++)
	{
		carpeDiem.tick();
		carpeDiem.displayTime();
		carpeDiem.displayMilitaryTime();
	}//END FOR

	return 0;
}//END MAIN
