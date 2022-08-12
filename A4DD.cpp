#include "A2DD.h"

class A4DD : public A2DD
{
	private:
		int gz;

public:
	A4DD(int x, int y, int z) : A2DD(x,y),
		gz(z)
	{
	}
};