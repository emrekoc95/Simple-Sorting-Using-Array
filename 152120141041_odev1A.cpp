#include <iostream>
using namespace std;



void minmax(int *dizi, int boyut) {

	// for döngüleriyle ayný fonksiyon içinde dizinin minimum ve maksimum deðerleri hesaplanýyor //
	// Sonrasýnda minimum ve maksimum deðerleri ekrana yazdýrýlýyor //
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
	
	// Dizi bubble sort algoritmasýna göre küçükten büyüðe büyük sayý geçici bir deðerle bir ileriye alýnarak sýralanýyor //
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

	// Kullanýcýdan kaçýncý sýradaki deðer isteniyorsa o sayý alýnýyor. //

	cout << "k degerini giriniz: ";
	cin >> k;
	
	// O sayý ekrana yazdýrýlýyor. //
	
	cout << endl;
	cout << "En kucuk " << k << ". deger :" << dizi[k - 1] << endl;

}

void enbuyuk(int *dizi, int boyut, int k)
{
	// Dizi bubble sort algoritmasýna göre küçükten büyüðe büyük sayý geçici bir deðerle bir ileriye alýnarak sýralanýyor //
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

	// Kullanýcýdan kaçýncý sýradaki deðer isteniyorsa o sayý alýnýyor. //
	
	cout << "k degerini giriniz: ";
	cin >> k;
	
	// O sayý ekrana yazdýrýlýyor. //
	
	cout << endl;
	cout << "En buyuk " << k << ". deger :" << dizi[boyut-k] << endl;

}
	


int main() {

	// Dizinin boyut sayýsý, sayaç olan i, sýralamada kullanýlacak k ve secenek icin a tanýmlanýyor. //
	
	int boyut;
	int i;
	int k = 0;
	char a;

	// Dizinin boyut sayýsý kullanýcýdan alýnýyor ve dinamik dizi oluþturuluyor. //
	
	cout << "Dizi boyutunu giriniz." << endl;
	cin >> boyut;
	
	int* dizi = new int[boyut];


	// Dizinin deðerleri for döngüsüyle kullanýcýdan alýnýyor. //
	
	for (i = 0; i < boyut; i++) {

		cout << "dizi[" << i << "] degerini giriniz." << endl;
		cin >> dizi[i];
	}

	
	
	// Dizinin deðerleri for döngüsüyle yazdýrýlýyor. //


	cout << "dizi[" << boyut-1 << "] :  {";
	cout << dizi[0] ;

	
	
	
	for (i = 1; i < boyut; i++) {

		cout << ",";
		cout << dizi[i] ;
	}



	cout << "} " << endl << endl;



	// Yapýlacak iþlemler için kullanýcýdan seçenek alýnýyor. //
	// Seçilen seçeneðe göre fonksiyon çaðýrýlýyor. //
	
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