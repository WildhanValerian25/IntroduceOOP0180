#include <iostream>
using namespace std;

class Lingkaran
{
public:
    double jari_jari;
    double diameter;

   void InputData(){
    cout << "masukkan jarijari " << endl;
    cin >> jari_jari;
   }

   double hitungLuas()
   {
    return 3.14*jari_jari*jari_jari;
   }
};
int main(){
    Lingkaran bulet;
    bulet.InputData();
    cout << endl;
    cout << "luasnya adalah = " << bulet.hitungLuas() << endl;
    cout << endl;
};