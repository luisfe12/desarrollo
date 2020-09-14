#include <iostream>
#include <math.h>
using namespace std;


int main(int argc, char const *argv[])
{
	float x1,y1,x2,y2;
	cin>>x1>>y1;
	cin>>x2>>y2;

	x1 = x1 - x2;
	y1 = y1 - y2;
	float distancia;
	distancia = sqrt(pow(x1,2) + pow(y1,2));

	printf("%.4f\n", distancia);
	return 0;
}