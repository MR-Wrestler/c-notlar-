//
// Created by burak on 19.01.2024.
//

/*
 * FONKS�YON OLU�TURMA
 */
#include <iostream>
using namespace std;

// Fonksiyonlar programlama dillerinde tekrar tekrar kullan�labilen kod bloklar�d�r.
// Fonksiyon olu�turmadaki as�l ama� kod tekrar�n� �nlemektir.
// Kod tekrar� olmamas� hem zamandan hem de kullan�lacak bellekten tasarruf etmemizi sa�lar.

// Fonksiyon tan�mlama
// Fonksiyon tan�mlamak i�in �u tasla�� kullanaca��z:
// d�n��_de�eri_tipi fonksiyon_ad�(parametre1, parametre2, ...){
//     // fonksiyonun yapaca�� i�lemler
//     return d�n��_de�eri;
// }

// d�n��_de�eri_tipi: fonksiyonun �al��t�r�lmas� sonucunda d�nd�rece�i de�erin tipini belirtir.
// �rne�in toplama fonksiyonu yazaca��z ve bu fonksiyonun d�n�� de�eri tipi integer olacak.

// fonksiyon_ad�: fonksiyonun ad�n� belirtir. Fonksiyon ad� yaz�l�rken de�i�ken ad� yaz�l�rken kullan�lan kurallar ge�erlidir.

// parametre1, parametre2, ...: fonksiyonun i�inde kullanaca��m�z de�i�kenlerdir. Fonksiyonun i�inde kullanaca��m�z de�i�kenlerin de�erlerini fonksiyonu �a��r�rken belirleriz.
// �rne�in toplama fonksiyonu yazaca��z ve bu fonksiyonun i�inde kullanaca��m�z 2 tane integer de�i�ken olacak.

// return d�n��_de�eri: fonksiyonun �al��mas� sonucunda d�nd�rece�i de�eri belirtir.
// �rne�in toplama fonksiyonu yazaca��z bu fonksiyonun d�n�� de�eri toplama i�leminin sonucu olacak.

// �rnek1;
// Girilen 2 de�erin toplam�n� d�nd�ren fonksiyon
int topla(int number1, int number2){
    int toplam = number1 + number2;
    // toplama fonksiyonunu �a��rd���m�zda ekrana yazd�rmak i�in fonksiyon i�ine �u kodu yazabiliriz:
    // cout << toplam << "\n";
    return toplam;
}
// ilk olarak topla fonksiyonunu tan�mlayaca��z fonksiyonun ��kt�s�n�n ne olaca��n� belirledik iki say�y� toplad���m�zda integer bir de�er elde ederiz.
// o y�zden fonksiyonun d�n�� de�eri tipini integer olarak belirledik.
// Fonksiyonun ad�n� topla olarak belirledik.
// Fonksiyonun i�inde kullanaca��m�z parametrelerin adlar�n� sayi1 ve sayi2 olarak belirledik.
// Fonksiyonun sonu� i�lemini (number1 ve number2 yi toplamay�) toplam ad�nda bir de�i�kene atad�k.
// Fonksiyonun sonucunu return toplam; ile d�nd�rd�k. Return ifadesi ile bu fonksiyonun sonucunu d�nd�rm�� olduk.





// Taban ve �s de�erlerini al�p taban�n �ss�n� hesaplayan fonksiyon.
int kuvvetHesapla(int taban, int us) {
    int sonuc = 1.0;

    // �s de�eri 0 olana kadar �arpma i�lemi yapma
    while (us > 0) {
        sonuc = sonuc * taban;
        us--;
    }
    /*
     * taban = 2, us = 3
     * sonuc = 1
     * sonuc = 2 �s = 2
     * sonuc = 4 �s = 1
     * sonuc = 8 �s = 0
     */
    return sonuc;
}
// taban de�erine d�n�� de�eri tipini integer olarak belirledik.
// Bu fonksiyonda taban ve us ad�nda iki parametre tan�mlad�k.
// Kuvvet hesaplama i�leminin sonucunu tutacak olan sonuc ad�nda bir de�i�ken atad�k.
// while d�ng�s� ile us de�eri 0 olana kadar taban de�i�kenini sonuc de�i�keni ile �arpt�k.
// while d�ng�s� bitti�inde sonuc de�i�keni taban�n �ss� olmu� olacak.
// sonuc de�i�kenini return sonuc; ile d�nd�rd�k.
// Kodun d�ng� ile olan mant���n� anlamak i�in yukar�daki yorum sat�rlar�na bakabilirsiniz. Kendiniz de farkl� de�erler verip deneyebilirsiniz.





string bigFinder(int sayi1, int sayi2, int sayi3){
    int bigNumber;
    if (sayi1 > sayi2 && sayi1 > sayi3){
        bigNumber = sayi1;
    }

    else if (sayi2 > sayi1 && sayi2 > sayi3){
        bigNumber = sayi2;
    }

    else if (sayi3 > sayi1 && sayi3 > sayi2){
        bigNumber = sayi3;
    }

    return ("en b�y�k say�: " + to_string(bigNumber));
    // to_string fonksiyonu ile integer de�erleri string de�erlere �evirebiliriz.
}

int main() {

topla(3,2);
// �kt:
// �rne�in main fonksiyonu i�inde topla fonksiyonunu �a��rd�k ard�ndan 3 ve 2 de�erleri girdik.
// Topla fonksiyonu �al��t�, 3 ve 2 de�erlerini toplad� ve sonucu return toplam; ile d�nd�rd�.
// Fonksiyon sonucunun 5 oldu�unu haf�zas�nda tuttu ama biz ekrana yazd�rmas� ile ilgili bir komut vermedik.

cout << topla(3,2) << "\n";
// �kt:5
// Bu kod �al��t���nda ekrana 5 yazd�racak. ��nk� topla fonksiyonu 3 ve 2 de�erlerini toplad� sonucu return toplam; ile d�nd�rd�.
// ve mainde biz o d�nen sonucu ekrana yaz�drmas� i�in cout << topla(3,2) << "\n"; kodunu yazd�k.


cout << kuvvetHesapla(5,4) << "\n";
// �kt: 625

int number1,number2;
cout << "L�tfen taban giriniz: ";
cin >> number1;

cout << "L�tfen �s giriniz: ";
cin >> number2;

cout << "kuvvet hesapland�: " <<  kuvvetHesapla(number1,number2) << "\n";



cout << bigFinder(5,4,3) << "\n";
// �kt: en b�y�k say�: 5

cout << "-----------------------\n";


// i� i�e fonksiyonlar (nested functions)
cout << topla(kuvvetHesapla(2,3), kuvvetHesapla(5,2));
// �kt: 33
// topla(8,25) = 33
// Bir fonksiyonun ��kt�s�n� ba�ka bir fonksiyonun parametrelerine atayabiliriz.


    return 0;
}