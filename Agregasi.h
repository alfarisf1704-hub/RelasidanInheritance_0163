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