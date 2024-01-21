//
// Created by burak on 18.01.2024.
//


/*
 * while d�ng�s�
 */

#include <iostream>

using namespace std;


 int main(){

     // WHILE D�NG�S�

     // While �ng�s� e�er while �n i�indeki �art sa�lan�yorsa �ART SA�LANMAYANA DEK �al���r.
        // while d�ng�s�n� �u taslak ile kullanaca��z:
            // while (�art) {
            //     // �art sa�lan�yorsa buras� �ART SA�LANMAYANA DEK �al��acak olan kodlar.
            // }

     // �rnek1:
     //int anahtar = 1;

     // while (anahtar == 1){
     //     cout << "anahtar 1'e e�ittir\n";
     //    }

     /*
      * Bu �rnekte anahtar diye integer bir de�i�ken tan�mlad�k ve de�erini 1 olarak atad�k.
      * while d�ng�s�n�n i�inde anahtar de�i�keninin de�erini kontrol ettik.
      * anahtar de�i�keninin de�eri 1 oldu�u s�rece while d�ng�s� �al���r.
      * Kodumuzun i�inde anahtar de�i�kenini de�i�tirecek bir yap� (�rn: anahtar++, anahtar = 0, anahtar = 5 gibi ) olmad���ndan
      * while d�ng�s� sonsuz d�ng�ye girer (endless loop) ve bu program�m�zda istemedi�imiz bir �eydir.
      */

     // Yukar�daki �rnekte sonsuz d�ng�y� engellemek i�in anahtar de�i�keninin de�erini while d�ng�s�n�n i�inde de�i�tirmemiz gerekiyor.
     int anahtar = 1;
     while (anahtar == 1){
         cout << "anahtar 1'e e�ittir\n";
         anahtar = 0;
     }
     // �kt: anahtar 1'e e�ittir
     // Bu kod �al���rken kodumuzu �al��t�ran program (IDE) ��yle bir okuma yapar:
        // 1-) anahtar ad�nda integer bir de�i�ken tan�mla ve de�erini 1 olarak ata.
        // 2-) Bir while d�ng�s� var ve �al��ma ko�ulu "anahtar de�i�keninin de�erini 1'e e�it mi diye kontrol et".
        // 3-) anahtar de�i�keninin de�eri 1'e e�itse while d�ng�s�n�n i�indeki kodlar� �al��t�r.
        // 4-) while d�ng�s�n�n i�indeki kod anahtar de�i�keninin 1'e e�it oldu�unu ekrana yazd�r.
        // di�er kod ise anahtar de�i�keninin de�erini 0 olarak de�i�tir.
        // 5-) D�ng� i�indeki kodlar bitti�i i�in while d�ng�s�n�n ba��na d�n ve anahtar de�i�keninin de�erini 1'e e�it mi diye kontrol et.
        // 6-) anahtar de�i�keninin de�eri 1'e e�it de�il ��nk� d�ng� i�erisinde 0 olarak de�i�tirdik.
        // 7-) while d�ng�s�n�n i�indeki kodlar� �al��t�rma ve d�ng�den ��k.


     // �rnek2:
     // 1'den 5'e kadar olan say�lar� ekrana yazd�ral�m.
     int sayi = 1;
     while (sayi <= 5){
         cout << sayi << " ";
         sayi++;
     }
     // �kt: 1 2 3 4 5 6 7 8 9 10
     // Bu kod �al���rken kodumuzu �al��t�ran program (IDE) ��yle bir okuma yapar:
         // 1-) sayi ad�nda integer bir de�i�ken tan�mla ve de�erini 1 olarak ata.
         // 2-) Bir while d�ng�s� var ve �al��ma ko�ulu "sayi de�i�keninin de�eri 10'a e�it veya 10'dan k���k m� diye kontrol et".
         // 3-) sayi de�i�keninin de�eri 10'a e�it veya 10'dan k���k oldu�u s�rece while d�ng�s�n�n i�indeki kodlar� �al���r.
         // 4-) while d�ng�s�n�n i�indeki kod (cout) sayi de�i�keninin de�erini ekrana yazd�r.
         // 5-) sayi++ sayi de�i�keninin de�erini 1 artt�r. (sayi de�i�keni 2 oldu)
         // 6-) D�ng� i�indeki kodlar bitti�i i�in while d�ng�s�n�n ba��na d�n ve sayi de�i�keninin de�erini 10'a e�it veya 10'dan k���k m� diye kontrol et.
         // 7-) sayi de�i�keninin de�eri 2 oldu�u i�in while d�ng�s�n�n i�indeki kodlar� �al��t�r.
         // 8-) 4, 5, 6. ad�mlar� tekrarla. (sayi de�i�keni 2 idi 1 artt� 3 oldu)
         // 9-) sayi de�i�keninin de�eri 3 oldu�u i�in while d�ng�s�n�n i�indeki kodlar� �al��t�r.
         // 10-) 4, 5, 6. ad�mlar� tekrarla. (sayi de�i�keni 3 idi 1 artt� 4 oldu)
         // 11-) sayi de�i�keninin de�eri 4 oldu�u i�in while d�ng�s�n�n i�indeki kodlar� �al��t�r.
         // 12-) 4, 5, 6. ad�mlar� tekrarla. (sayi de�i�keni 4 idi 1 artt� 5 oldu)
         // 13-) sayi de�i�keninin de�eri 5 oldu�u i�in (while (sayi<=5 dedi�imiz i�in 5 de dahil)) while d�ng�s�n�n i�indeki kodlar� �al��t�r.
         // 14-) 4, 5, 6. ad�mlar� tekrarla. (sayi de�i�keni 5 idi 1 artt� 6 oldu)
         // 15-) sayi de�i�keninin de�eri 6 oldu�u i�in while d�ng�s�n�n �art�n� (5 den k���k e�it olma) sa�lam�yor ve while d�ng�m�z �al��mayacakt�r.
    cout << "\n------------------------------------\n";

     // �rnek3:
     // Kullan�c�n�n girdi�i 6 tane say�n�n tek mi �ift mi oldu�unu hesaplayan program
         int sayinumara = 1; // sayinumara de�i�keni bu kodda bizim s�n�rlay�c�m�z olacak.
         while (sayinumara <= 6) {
             int sayi2;
             cout << "Hesaplamak istedi�iniz " << sayinumara << ". say�y� giriniz: ";
             cin >> sayi2;
             if(sayi2%2 == 0){
                 cout << "Giri�iniz " << sayinumara << ". say�:" << sayi2 << "�ifttir\n";
             }

             else if (sayi2%2 == 1){
                 cout << "Giri�iniz " << sayinumara << ". say�: " << sayi2 << " tektir\n";
             }
             sayinumara++;

         }

    // �rnek4:
    // Kullan�c� ilk olarak bir �ifre belirleyecek.
    // �ifrenin uzunlu�u 5 karakterden fazla olmak zorunda yoksa kullan�c�ya tekrar �ifre sorulmal�.

    // sonra kullan�c�dan hesab�na giri� yapmas� istenecek e�er �ifre yanl�� ise tekrar sorulacak
    // e�er �ifre do�ru ise ekrana "tebrikler do�ru giri� yapt�n�z yazacak"

    // Kullan�c� kayd�;
    string sifre;

    // Kullan�c�dan �ifreyi al
    cout << "�ifre belirleyiniz (5 karakterden uzun olmal�): ";
    cin >> sifre;
    cout << "\n";

    // �ifre uzunlu�unu kontrol et
        while (sifre.length() <= 5) {
            cout << "�ifreniz 5 karakterden uzun olmal�. Tekrar belirleyiniz: ";
            cin >> sifre;
            cout << "\n";
        }
        // length() fonksiyonu string veri tipindeki de�i�kenlerin uzunlu�unu verir.

    // �ifre tan�mland�
        cout << "�ifre " << sifre << " olarak tan�mland� ve kaydedildi." <<"\n";

    // giri� yapmak;
       string giris_sifre;
       cout << "�ifrenizi giriniz: ";
       cin >> giris_sifre;

    // �ifre do�ru olana dek tekrar sor
       while (giris_sifre != sifre) {
           cout << "�ifreniz yanl��. Tekrar deneyiniz: ";
           cin >> giris_sifre;
       }
    // Kullan�c�n�n giri�i �ifre ile belirledi�i �ifre ayn� olmad��� s�rece while d�ng�s� �al��maya devam eder.
    // Kullan�c� �nce belirledi�i �ifreyle ayn� �ifreyi girdi�inde while d�ng�s�n�n ko�ulu sa�lanmaz ve d�ng�den ��k�l�r.

    // �ifre do�ru ise tebrik et
       cout << "Tebrikler do�ru giri� yapt�n�z." << "\n";


       return 0;
 }