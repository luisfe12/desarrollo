#include <iostream>
 
using namespace std;
 
int main() {
 
    int cant_dias;
    cin>>cant_dias;
    int year, month, day;
    
    month = cant_dias / 30;
    day = cant_dias % 365;
    day = (day % 30);
    year = (cant_dias / 365);
    month =  (cant_dias % 365)/30;
    
    cout<<year<<" ano (s)"<<endl;
    cout<<month<<" mes (es)"<<endl;
    cout<<day<<" dia (s)"<<endl;
    return 0;
}