//-anak
#ifndef ANAK_H
#define ANAK_H

class anak
{
public:
    string nama;
    anak(string pNama) : nama(pNama)
    {
        cout << "anak\"" << nama << "\" ada \n";
    }
    ~anak()
    {
        cout << "anak\"" << nama << "\" tidak ada \n";
    }
};
#endif

//-ibu
#ifndef IBU_H
#define IBU_H
#include <vector>

class ibu
{
public:
    string nama;
    vector<anak *> daftar_anak;

    ibu(string pNama) : nama(pNama)
    {
        cout << "ibu\"" << nama << "\" ada \n";
    }
    ~ibu()
    {
        cout << "ibu\"" << nama << "\" tidak ada \n";
    }
    void tambahAnak(anak *);
    void cetakAnak();
};

void ibu::tambahAnak(anak *pAnak)
{
    daftar_anak.push_back(pAnak);
}

void ibu::cetakAnak()
{
    cout << "Daftar Anak Dari Ibu\"" << this->nama << "\":\n";
    /*for (auto& a  daftar_anak){
    cout << a->nama<<"\n";
    }*/

    for (int i = 0; i < daftar_anak.size(); i++)
    {
        cout << daftar_anak[i]->nama << endl;
    }
    cout << endl;
}
#endif

//-flie main dari agregasi

#include <iostream>
using namespace std;

#include "anak.h"
#include "ibu.h"

int main()
{
    ibu *varIbu = new ibu("dini");
    ibu *varIbu2 = new ibu("");
    anak *varAnak1 = new anak("tono");
    anak *varAnak2 = new anak("rini");
    anak *varAnak3 = new anak("dewi");

    varIbu->tambahAnak(varAnak1);
    varIbu->tambahAnak(varAnak2);
    varIbu2->tambahAnak(varAnak3);
    varIbu2->tambahAnak(varAnak1);

    varIbu->cetakAnak();
    varIbu2->cetakAnak();

    delete varIbu;
    delete varIbu2;
    delete varAnak1;
    delete varAnak2;
    delete varAnak3;

    system("pause");
    return 0;
}