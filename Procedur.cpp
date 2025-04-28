#include <iostream>
using namespace std;

class Hewan
{
private:
    string jeniskelamin;

public:
    string tipe;
    string umur;

    void inputData()
    {
        cout << "Masukkan jenis kelamin Hewan = " << endl;
        cin >> jeniskelamin;
        cout << "Masukkan tipe = " << endl;
        cin >> tipe;
        cout << "Masukkan umur = " << endl;
        cin >> umur;
    }
    void TampilanHewan()
    {
        cout << "jenis kelaminnya adalah " << jeniskelamin << endl;
    }
};

int main()
{
    Hewan Burung;
    Burung.inputData();
    cout << endl;
    cout << "Tipenya adalah = " << Burung.tipe << endl;
    cout << "Umurnya adalah = " << Burung.umur << endl;
    Burung.TampilanHewan();
    cout << endl;
};