#include "A2DD.h"

class A3DD : public A2DD
{
	private:
		int gz;

public:
	A3DD(int x, int y, int z) : A2DD(x,y),
		gz(z)
	{
	}
};