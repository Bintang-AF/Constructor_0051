#include <iostream>
#include <string>
using namespace std;

class dosen;
class staff;
class universitas;


class mahasiswa{
    private :
    int nilai;

    
    public :
    int nim;
    string nama;

    mahasiswa () {nim, nama, nilai;}
    friend void dosen::tampilkannilaipelajar(mahasiswa &x);

};

