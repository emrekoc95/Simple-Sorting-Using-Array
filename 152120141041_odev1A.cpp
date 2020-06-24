#include <iostream>
using namespace std;



void minmax(int *dizi, int boyut) {

	// for d�ng�leriyle ayn� fonksiyon i�inde dizinin minimum ve maksimum de�erleri hesaplan�yor //
	// Sonras�nda minimum ve maksimum de�erleri ekrana yazd�r�l�yor //
	// O(2(boyut-1))
	
	int i = 0;
	int min = dizi[i];
	int a = 0;
	
	for (i = 0; i < boyut ; i++) {
		
		if (dizi[i] < min) {

			min = dizi[i];
			a = i;
		
		}
	}

	cout << "min -> dizi [" << a << "] = " << min << endl;

	i = 0;
	int b = 0;
	int max = dizi[i];

	for (i = 0; i < (boyut); i++) {

		if (dizi[i] > max) {

			max = dizi[i];
			b = i;

		}
	}

	
	cout << "max -> dizi [" << b << "] = " << max << endl;


}

void enkucuk(int *dizi, int boyut, int k)
{
	
	// Dizi bubble sort algoritmas�na g�re k���kten b�y��e b�y�k say� ge�ici bir de�erle bir ileriye al�narak s�ralan�yor //
	// O((boyut-i-1)^(boyut-2)
	int i, j, temp;
	
	
	for (i = 1; i < boyut; i++)
	{
		for (j = 0; j < boyut - i; j++)
		{

			if (dizi[j] > dizi[j + 1])
			{
				temp = dizi[j + 1];
				dizi[j + 1] = dizi[j];
				dizi[j] = temp;
			}
		}
	}

	// Kullan�c�dan ka��nc� s�radaki de�er isteniyorsa o say� al�n�yor. //

	cout << "k degerini giriniz: ";
	cin >> k;
	
	// O say� ekrana yazd�r�l�yor. //
	
	cout << endl;
	cout << "En kucuk " << k << ". deger :" << dizi[k - 1] << endl;

}

void enbuyuk(int *dizi, int boyut, int k)
{
	// Dizi bubble sort algoritmas�na g�re k���kten b�y��e b�y�k say� ge�ici bir de�erle bir ileriye al�narak s�ralan�yor //
	// O((boyut-i-1)^(boyut-2)
	int i, j, temp;
	
	for (i = 1; i < boyut; i++)
	{
		for (j = 0; j < boyut - i; j++)
		{
			if (dizi[j] > dizi[j + 1])
			{
				temp = dizi[j + 1];
				dizi[j + 1] = dizi[j];
				dizi[j] = temp;
			}
		}
	}

	// Kullan�c�dan ka��nc� s�radaki de�er isteniyorsa o say� al�n�yor. //
	
	cout << "k degerini giriniz: ";
	cin >> k;
	
	// O say� ekrana yazd�r�l�yor. //
	
	cout << endl;
	cout << "En buyuk " << k << ". deger :" << dizi[boyut-k] << endl;

}
	


int main() {

	// Dizinin boyut say�s�, saya� olan i, s�ralamada kullan�lacak k ve secenek icin a tan�mlan�yor. //
	
	int boyut;
	int i;
	int k = 0;
	char a;

	// Dizinin boyut say�s� kullan�c�dan al�n�yor ve dinamik dizi olu�turuluyor. //
	
	cout << "Dizi boyutunu giriniz." << endl;
	cin >> boyut;
	
	int* dizi = new int[boyut];


	// Dizinin de�erleri for d�ng�s�yle kullan�c�dan al�n�yor. //
	
	for (i = 0; i < boyut; i++) {

		cout << "dizi[" << i << "] degerini giriniz." << endl;
		cin >> dizi[i];
	}

	
	
	// Dizinin de�erleri for d�ng�s�yle yazd�r�l�yor. //


	cout << "dizi[" << boyut-1 << "] :  {";
	cout << dizi[0] ;

	
	
	
	for (i = 1; i < boyut; i++) {

		cout << ",";
		cout << dizi[i] ;
	}



	cout << "} " << endl << endl;



	// Yap�lacak i�lemler i�in kullan�c�dan se�enek al�n�yor. //
	// Se�ilen se�ene�e g�re fonksiyon �a��r�l�yor. //
	
	cout << "Hangi secenek ? (a: min/max, b: k. en buyuk, c: k. en kucuk)" << endl ;
	cin >> a;
	cout << endl;

	
	if (a == 'a') {
	
		minmax(dizi, boyut);

	}

	if (a == 'b') {

		enbuyuk(dizi, boyut, k);

	}

	if (a == 'c') {

		enkucuk(dizi, boyut, k);

	}
	


	// Program sonu //


	system("pause");
}