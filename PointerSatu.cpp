#include <iostream>
using namespace std;

class mahasiswa{
    public:
    int nim;
    void showNim(){
        cout << "No Induk = " << nim << endl;
    }
};

int main (){

    mahasiswa mhs; //Membuat object mhs
    mhs.nim = 5;
    mhs.showNim(); //Member akses operator

    mahasiswa &refMhs = mhs; //Pointer Reference refMhs
    refMhs.nim = 2; //Member acceses operator
    mhs.showNim();
}