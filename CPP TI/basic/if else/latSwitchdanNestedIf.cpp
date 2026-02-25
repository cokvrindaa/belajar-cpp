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

  cin >> level;

  // Pemilihan level/role
  switch (level)
  {
  case 1:
    cout << "\nRole anda adalah admin! \n";
    keteranganLevel = "admin";
    break;
  case 2:
    cout << "\nRole anda adalah guru! \n";
    keteranganLevel = "guru";
    break;
  case 3:
    cout << "\nRole anda adalah siswa! \n";
    keteranganLevel = "siswa";
    break;
  default:
    cout << "Input anda invalid!";
    break;
  }

  // Pengecekan password admin dan level
  if (keteranganLevel == "admin")
  {
    int password;
    cout << "Silahkan masukan password admin: ";
    cin >> password;

    if (password == 1234)
    {
      cout << "Password Benar, Login berhasil! ";
    }
    else
    {
      cout << "Password Salah!";
    }
  }

  return 0;
}