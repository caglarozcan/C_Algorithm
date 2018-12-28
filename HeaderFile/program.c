#include <stdio.h>
#include "hesap.h" //aynı dizinde bulunduğu için bu şekilde çağrılabilir.

int main(){
	int sayi1, sayi2;
	char islem, baskaislem;
	
	do{
		printf("Yapılacak işlem [+|-|*|/] -> ");
		scanf("%s", &islem);
	
		printf("Birinci sayı -> ");
		scanf("%d", &sayi1);
		
		printf("İkinci sayı -> ");
		scanf("%d", &sayi2);
		
		switch(islem){
			case '+':
				yazdir(topla(sayi1, sayi2));
				break;
			case '-':
				yazdir(cikar(sayi1, sayi2));
				break;
			case '/':
				floatYazdir(bol((float)sayi1, (float)sayi2));
				break;
			case '*':
				yazdir(carp(sayi1, sayi2));
				break;
			default:
				printf("!!Hatalı işlem!!\n");
				break;
		}
		
		printf("Başka işlem yapmak istiyor musun? [E/H] -> ");
		scanf("%s", &baskaislem);
		
	}while(baskaislem == 'e' || baskaislem == 'E');
	
	return 0;
}