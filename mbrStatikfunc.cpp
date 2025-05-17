#include <iostream>
#include <string>
using namespace std;

class mahasiswa{
    private :
    static int nim;
    public :
    int id;
    string nama;

    void setid();
    void printall();

    static void setnim(int pnim){nim=pnim; /*definisi function*/}
    static int getnim(){return nim;}

    mahasiswa (string pnama):nama(pnama){setid();}

};

int mahasiswa::nim=0;

void mahasiswa::setid(){
    id = ++nim;
}

void mahasiswa::printall(){
    cout << "id  = "<<id <<endl;
    cout << "nama  = "<<nama<<endl;
    cout << endl;
}

int main(){
    mahasiswa mhs1("sridadi");
    mahasiswa mhs2("budi jatmiko");
    mahasiswa::setnim(9);
    mahasiswa mhs3("andi janu");
    mahasiswa mhs4 ("joko wahono");

    mhs1.printall();
    mhs2.printall();
    mhs3.printall();
    mhs4.printall();

    cout << "akses dari luar object  = "<<mahasiswa::getnim()<<endl;

    return 0;
}