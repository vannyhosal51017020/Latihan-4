#include<iostream.h>

 main ()
 { int n, m;
   float l;
 cout<<"Masukkan tanggal kelahiran anda (n) : "; cin>>n;
 cout<<"Masukkan bulan kelahiran anda (m) : "; cin>>m;
 cout<<"Masukkan tahun lahir anda (l), isi 2 digit akhir : ";
 cin>>l;

  n += m;
  cout<<"Nilai n += m "<<n<<endl;
  n -= m;
  cout<<"Nilai n -= m "<<n<<endl;
  n %= m;
  cout<<"Nilai n %= m "<<n<<endl;
  n *= m;
  cout<<"Nilai n *= m "<<n<<endl;
  n /= m;
  cout<<"Nilai 1 /= m "<<1<<endl;
  return (0);
 }
