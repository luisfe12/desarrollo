#include <iostream>
#include <vector>

using namespace std;

void operacion(vector<int> v){
	
	if ((v[1] > v[2])) 
	{
		
		if (v[3] > v[0])
		{
			
			int suma = v[2] + v[3];
			int suma1 = v[0] + v[1];
			if (suma > suma1 && (v[2] > 0) && (v[3] > 0) && (v[0]%2 == 0))
			{
				cout<<"Valores aceitos"<<endl;
			}
			else
			{
				cout<<"Valores nao aceitos"<<endl;
			}
		}

		else
		{
		cout<<"Valores nao aceitos"<<endl;
		}
	}

	else
	{
		cout<<"Valores nao aceitos"<<endl;
	}
}

int main(int argc, char const *argv[])
{
	int A,B,C,D;
	vector<int> v;
	cin>>A;
	v.push_back(A);
	cin>>B;
	v.push_back(B);
	cin>>C;
	v.push_back(C);
	cin>>D;
	v.push_back(D);
	
	operacion(v);
	
	return 0;
}