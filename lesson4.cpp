//
// Created by burak on 19.01.2024.
//

/*
 * FOR D�NG�S�
 */
#include <iostream>
using namespace std;


int main() {

// For d�ng�s� de while d�ng�s� gibi bir d�ng� yap�s�d�r.
// for d�ng�s�nde ko�ul ile birlikte ba�lang�� de�eri ve art�� miktar� da belirtilir.
// For d�ng�s� �u taslak ile kullan�l�r:
/*
for (ba�lang�� de�eri; ko�ul; art�� miktar�) {
     // ko�ul sa�land���nda d�ng� boyunca �al��acak kodlar
 }
 */

// �rnek1:
// 1'den 15'e kadar olan say�lar� ekrana yazd�ral�m.
   int number = 15;

   for (int i = 0; i < number; i++) {
       cout << i << ", ";
   }
    cout << "\n----------------\n";

   // kullan�c�dan say� girmesi istenecek kullan�c�n�n girdi�i say�ya kadar olan �ift say�lar� ekrana yazd�raca��z
    // �rnek: kullan�c� 10 girdi�inde ekrana 0 2 4 6 8 yazacak
    int number1;

    cout << "bir say� giriniz";
    cin >> number1;
    for (int i = 0; i < number1; i+=2) {
        cout << i << " ";
    }
    // kullan�c� 10 say�s�n� girsin
    // i = 0 => 0 < 10 => 0 yazd�r i yi 2 artt�r
    // i = 2 => 2 < 10 => 2 yazd�r i yi 2 artt�r
    // i = 4 => 4 < 10 => 4 yazd�r i yi 2 artt�r
    // i = 6 => 6 < 10 => 6 yazd�r i yi 2 artt�r
    // i = 8 => 8 < 10 => 8 yazd�r i yi 2 artt�r
    // i = 10 => 10 < 10 => 10 YAZDIRMAZ D�NG�DEN �IKAR


// �rnek2:
// girilen say�dan 0 a kadar olan tek say�lar� ekrana "1. tek say� bu 2. tek say� bu �eklinde yazacak for d�ng�s�"
    int number2;
    cout << "bir say� giriniz";
    cin >> number2;
    int j = 1;
    for (int i = 1 ; i < number2; i+=2) {
    cout << "0 dan " << number2 << "'e kadar olan " << j << ". tek say� " << i << "\n";
    j++;
    }
// number2 ad�nda bir de�i�ken tan�mlad�k ve kullan�c�dan bir say� girmesini istedik.
// j ad�nda bir de�i�ken tan�mlad�k ve de�erini 1 olarak atad�k. bu de�i�keni tek say�lar� saymak i�in (1.say�, 2.say�...) kullanaca��z.
// for d�ng�s�n�n i�inde i de�i�kenini 0 olarak tan�mlad�k ve i de�i�keninin de�eri number2 de�i�keninin de�erine e�it olana dek d�ng�y� �al��t�rd�k.
// d�ng� her �al��t���nda i de�i�keninin de�erini 2 artt�rd�k. (i+=2)
// d�ng� her �al��t���nda j de�i�keninin de�erini 1 artt�rd�k. (j++)
// kullan�c� 10 say�s�n� girdi�inde d�ng� �u �ekilde �al���r:
// i = 1 => 1 < 10 => 1 yazd�r. j = 1 => 1. tek say� yazd�r�r. j yi 1 artt�r�r i yi 2 artt�r.
// i = 3 => 3 < 10 => 3 yazd�r. j = 2 => 2. tek say� yazd�r�r. j yi 1 artt�r�r i yi 2 artt�r.
// i = 5 => 5 < 10 => 5 yazd�r. j = 3 => 3. tek say� yazd�r�r. j yi 1 artt�r�r i yi 2 artt�r.
// i = 7 => 7 < 10 => 7 yazd�r. j = 4 => 4. tek say� yazd�r�r. j yi 1 artt�r�r i yi 2 artt�r.
// i = 9 => 9 < 10 => 9 yazd�r. j = 5 => 5. tek say� yazd�r�r. j yi 1 artt�r�r i yi 2 artt�r.
// i = 11 => 11 < 10 => 11 YAZMAZ D�NG�DEN �IKAR.



// �rnek3:
// Kullan�c�dan al�nan say�ya kadar olan say�lar�n toplam�n� ekrana yazd�ral�m.
    int number3;
    int total = 0;
    cout << "bir say� giriniz";
    cin >> number3;
    for (int i = 0; i <= number3; i++) {
        total = total + i;
    }
    cout << "toplam: " << total << "\n";

// Bu �rnekte d���nd���m�zde haf�zada tutaca��m�z iki farkl� veri var
// bunlar kullan�c�n�n girdi�i say� (number3) ve say�lar�n toplam de�eri (total).

// for d�ng�s�n�n i�inde i de�i�kenini 0 olarak tan�mlad�k ve i de�i�keninin de�eri number3 de�i�keninin de�erine e�it olana dek d�ng�y� �al��t�rd�k.
// d�ng� her �al��t���nda total de�i�keninin de�erini i de�i�keninin de�eri ile toplad�k.
// kullan�c� 5 say�s�n� girdi�inde d�ng� �u �ekilde �al���r:
// i = 0 => 0 <= 5 => total = 0 + 0 = 0, total = 0 , i++
// i = 1 => 1 <= 5 => total = 0 + 1 = 1, total = 1 , i++
// i = 2 => 2 <= 5 => total = 1 + 2 = 3, total = 3 , i++
// i = 3 => 3 <= 5 => total = 3 + 3 = 6, total = 6 , i++
// i = 4 => 4 <= 5 => total = 6 + 4 = 10, total = 10 , i++
// i = 5 => 5 <= 5 => total = 10 + 5 = 15, total = 15 , i++
// i = 6 => 6 <= 5 => 6 <= 5 sa�lanmad��� i�in d�ng�den ��kar.
// �kt: toplam: 15



// �rnek4:
// Kullan�c�dan al�nan say�n�n fakt�riyelini ekrana yazd�ral�m.
    int number4;
    int total2 = 1;
    cout << "bir say� giriniz";
    cin >> number4;
    for (int i = 1; i <= number4; i++) {
        total2 = total2 * i;
    }
    cout << "toplam: " << total2 << "\n";

// Bu �rnekte d���nd���m�zde haf�zada tutaca��m�z iki farkl� veri var
// bunlar kullan�c�n�n girdi�i say� (number4) ve say�lar�n �arp�m de�eri (total2).

// for d�ng�s�n�n i�inde i de�i�kenini 1 olarak tan�mlad�k ve i de�i�keninin de�eri number4 de�i�keninin de�erine e�it olana dek d�ng�y� �al��t�rd�k.
// d�ng� her �al��t���nda total2 de�i�keninin de�erini i de�i�keninin de�eri ile �arpt�k.
// kullan�c� 5 say�s�n� girdi�inde d�ng� �u �ekilde �al���r:
// i = 1 => 1 <= 5 => total2 = 1 * 1 = 1, total2 = 1 , i++
// i = 2 => 2 <= 5 => total2 = 1 * 2 = 2, total2 = 2 , i++
// i = 3 => 3 <= 5 => total2 = 2 * 3 = 6, total2 = 6 , i++
// i = 4 => 4 <= 5 => total2 = 6 * 4 = 24, total2 = 24 , i++
// i = 5 => 5 <= 5 => total2 = 24 * 5 = 120, total2 = 120 , i++
// i = 6 => 6 <= 5 => 6 <= 5 sa�lanmad��� i�in d�ng�den ��kar.

return 0;

}