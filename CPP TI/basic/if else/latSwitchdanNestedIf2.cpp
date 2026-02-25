#include <iostream>
using namespace std;

int main()
{
  int level;
  string keteranganLevel;

  // UI PEMILHAN LEVEL
  cout << "Selamat datang di sistem login sekolah! \n \n";

  cout << "Pilih role/level anda! \n";
  cout << "1. Admin \n";
  cout << "2. Guru \n";
  cout << "3. Siswa \n";

  cout << "Silahkan masukan kode nya : ";

  // Pengecekan apakah inputan berupa huruf?
  // Ketika user input huruf di level maka nilai menjadi FALSE. While akan berjalan ketika kondisi true, artinya kita harus membalik logika dengan NOT. Jadi kondisi false tersebut akan menjadi true dan loop akan berjalan.
  while (!(cin >> level))
  {
    // Menhapus eror nya
    cin.clear();
    // mengambil salah satu karakter d
    cin.ignore(1000, '\n');
    cout << "Input harus berupa angka! Masukkan lagi: ";
  }

  // Pemilihan level/role
  bool ulangiInputLevel = true;
  char validasiUlangiInputLevel;
  do
  {
    switch (level)
    {
    case 1:
      cout << "\nRole anda adalah admin! \n";
      keteranganLevel = "admin";
      ulangiInputLevel = false;
      break;
    case 2:
      cout << "\nRole anda adalah guru! \n";
      keteranganLevel = "guru";
      ulangiInputLevel = false;
      break;
    case 3:
      cout << "\nRole anda adalah siswa! \n";
      keteranganLevel = "siswa";
      ulangiInputLevel = false;
      break;
    default:
      cout << "Input anda invalid!, mau ulangi memilih? (y/n): ";
      cin >> validasiUlangiInputLevel;
      if (validasiUlangiInputLevel == 'y')
      {
        ulangiInputLevel = true;
        cin >> level;
      }
      else
      {
        ulangiInputLevel = false;
        cout << "Baiklah, terimakasih telah menggunakan program ini.";
        return 0;
      }
    }
  } while (ulangiInputLevel);

  // Pengecekan password admin
  bool ulangiInputAdmin = true;
  do
  {
    if (keteranganLevel == "admin")
    {
      string password;
      cout << "Silahkan masukan password admin: ";
      cin >> password;

      if (password == "abc1234")
      {
        cout << "Password Benar, Login berhasil! ";
        break;
      }
      else
      {
        cout << "Password Salah! \n \n";

        char validasiUlangiInputAdmin;
        cout << "Apakah anda mau ulangi input? (y/n): ";
        cin >> validasiUlangiInputAdmin;

        if (validasiUlangiInputAdmin == 'y' || validasiUlangiInputAdmin == 'Y')
        {
          ulangiInputAdmin = true;
        }
        else
        {
          ulangiInputAdmin = false;
          cout << "Baiklah, terimakasih telah menggunakan program ini.";

          break;
        }
      }
    }
  } while (ulangiInputAdmin);

  return 0;
}