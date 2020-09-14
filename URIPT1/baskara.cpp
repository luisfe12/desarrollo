#include <iostream>
#include <math.h>
using namespace std;

void formula(double a, double b, double c){

	double raiz = sqrt(pow(b,2) - 4*a*c);
	double division = 2 * a;
	if (raiz >= 0 && division != 0)
	{
		double Baskara = (-1*(b) + raiz)/division;
		double Baskara1 = (-1*(b) - raiz)/division;

		printf("R1 = %.5f\n",Baskara);
		printf("R1 = %.5f\n",Baskara1);
	}

	else
	{
		cout<<"Impossivel calcular"<<endl;
	}
	
	
	

}

int main(int argc, char const *argv[])
{
	double a,b,c;
	cin>>a>>b>>c;

	formula(a, b, c);
	return 0;
}