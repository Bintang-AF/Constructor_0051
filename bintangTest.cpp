#include <iostream>
using namespace std;


class mahasiswa{
    private:
        static int jumlahMhs;

    public:
        string nama;


        mahasiswa(string pnama){
            nama = pnama;
            ++jumlahMhs;
            cout << "mahasiswa dibuat"<< nama << endl;
        }

        ~mahasiswa(){
            --jumlahMhs;
            cout << "nama terhapus"<< endl;
        }
        static void setjumlah(int pjumlah){
            jumlahMhs = pjumlah;
        }


        static int getjumlahMhs(){
            return jumlahMhs;
        }
};

int mahasiswa::jumlahMhs = 0;


int main(){
    cout << "jumlah mahasiswa: "<< mahasiswa::getjumlahMhs() <<endl;

    mahasiswa mhs1(" andi");
    mahasiswa mhs2(" lulu");
    cout << "jumlah mahasiswa: "<< mahasiswa::getjumlahMhs() <<endl;
    mahasiswa::setjumlah(5);
    {
        mahasiswa mhs3(" husna");
        cout << "jumlah mahasiswa: "<< mahasiswa::getjumlahMhs() <<endl;

    }
    cout << "jumlah mahasiswa: "<< mahasiswa::getjumlahMhs() <<endl;
    return 0;
}

//construktor = sebuah member yang memberikan nilai default/awal