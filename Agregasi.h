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
}