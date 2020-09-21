#include "Farm.h"

void main()
{
	Farm f;

	cout << "Total milk in farm: " << f.estimateTotalMilk() << " litres" << endl;

	f.clearMem();
}