#include <iostream>
#include <string>
using namespace std;

int getOption();
string suffix = "data mahasiswa";

int main(){
    int pilihan = getOption();
    char isContinue;

    enum option{CREATE = 1, READ, UPDATE, DELETE, FINISH};

    while(pilihan != 5){
        switch (pilihan)
        {
        case CREATE:
            cout << "Menambahkan " << suffix << endl;
            break;
        case READ:
            cout << "Menampilkan " << suffix << endl;
            break;
        case UPDATE:
            cout << "Mengubah " << suffix << endl;
            break;
        case DELETE:
            cout << "Menghapus " << suffix << endl;
            break;
        
        default:
            cout << "Pilihan yang anda masukkan tidak dipahami" << endl;
            break;
        }
        
        labelContinue:

        cout << "Lanjutkan ? (y/n) : ";
        cin >> isContinue;
        
        if ((isContinue == 'y') | (isContinue == 'Y'))
        {
            pilihan = getOption();
        }else if((isContinue == 'n') | (isContinue == 'N')){
            break;
        }else{
            goto labelContinue;
        }
        
    }
    cout << "Program selesai" << endl;
    return 0;
}

int getOption(){
    int pilihan;

    system("clear");
    cout << "Program CRUD data mahhasiswa" << endl;
    cout << "============================" << endl;
    cout << "1. Tambah " << suffix << endl;
    cout << "2. Tampilkan "<< suffix << endl;
    cout << "3. Ubah " << suffix << endl;
    cout << "4. Hapus "<< suffix << endl;
    cout << "5. Selesai" << endl;
    cout << "============================" << endl;
    cout << "Pilih [1-5] : ";
    
    cin >> pilihan;
    return pilihan;
}