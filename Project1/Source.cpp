#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float a, b, x, h, r, Sx, Yx, res;
	int n, j, k, z;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "n = ";
	cin >> n;
	cout << "h = ";
	cin >> h;
	for (x = a; x <= b+h/2; x += h)
	{
		Sx = 0;
		for (k = 0; k <= n; k++)
		{
			r = 1;
			z = 2 * k + 1;
			for (j = 1; j <= z; j++)
			{
				r = r * j;
			}
			Sx = Sx + (pow(-1, k) * pow(x, z) / r);
		}
		Yx = sin(x);
		res = fabs(Yx - Sx);
		cout << "a = " << x << " b = " << b << "  h = " << h << "  Sx = " << Sx << "  Yx = " << Yx << "  res = " << res << endl;
	}

}
