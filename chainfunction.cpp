#include <iostream>
using namespace std;
class buku
{
    string judul;

    public :
    buku setjudul(string judul)
    {
        this-> judul = judul;
        return *this; // chain function
    }
    string getjudul()
    {
        return this->judul;
    }

} bukunya ;

int main()
{
    cout << bukunya.setjudul("matematika").getjudul();
    return 0;
} 