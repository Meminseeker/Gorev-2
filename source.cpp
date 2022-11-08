//C++ varsayılan ayarda Türkçe karakter yazdırmıyor. Destekleyen standart kütüphaneyi eklememiz gerekiyor.

#include <locale.h> // veya C++ için <clocale>
#include <iostream>
//#inlude <clocale>

int main() {
  setlocale(LC_ALL, "Turkish");
//  printf("Türkçe karakter yazdırmak için örnek kod\n");
//  printf("setlocale fonksiyonu olmadan çalıştırınca ekrana saçmasapan bir yazı bastırır.\n");

//  arrays for the corresponding names of the indexes
  std::string birler[] = {"", "bir", "iki", "üç", "dört", "beş", "altı", "yedi", "sekiz", "dokuz"};
  std::string onlar[] = {"", "on", "yirmi", "otuz", "kırk", "elli", "altmış", "yetmiş", "seksen", "doksan"};

  int x; std::cin >> x;
  std::string sayi = "";

  for (int i=0; i<3; i++){
      int n = x % 10;
      x /= 10;

      switch (i){
          case 0:
              sayi = birler[n] + sayi;
              break;
          case 1:
              sayi = onlar[n] + sayi;
              break;
          case 2:
              switch (n){
                  case 0:
                      break;
                  case 1:
                      sayi = "yüz" + sayi;
                      break;
                  default:
                      sayi = birler[n] + "yüz" + sayi;
              }
          default:
              break;
      }
  }
  std::cout << sayi << std::endl;

  return 0;
}
