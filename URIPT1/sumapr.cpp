#include <iostream>
 
using namespace std;
 
int main() {
 
    int co1, co2, can1, can2;
    double pre1, pre2;
    cin>>co1>>can1>>pre1;
    cin>>co2>>can2>>pre2;
    
    double val1 = double(can1) * pre1;
    double val2 = double(can2) * pre2;
    
    double suma = val1 + val2;
    //cout<<"VALOR A PAGAR: R$ "<<suma<<endl;
    printf("VALOR A PAGAR: R$ %.2f\n",suma);
    return 0;
}