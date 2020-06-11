#include <iostream>
using namespace std;

class mahasiswa{
public:
    int nim=1; //inisialisasi
    string nama="default name"; //inisialisasi
    float nilai=0; //inisialsiasi

    void setterNilai (float aNilai){
        nilai=aNilai;
    }
    void printData(){
        cout<<"NIM   \t= "<<nim<<endl;
        cout<<"Nama  \t= "<<nama<<endl;
        cout<<"Nilai \t= "<<nilai<<endl;
    }
};

int main() {
    mahasiswa ana,budi;
    cout<<"==Ana=="<<endl;
    ana.printData();
    cout<<"==Budi==="<<endl;
    budi.printData();

    return 0;
}
