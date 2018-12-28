#include <stdio.h>
#include "hesap.h"

int topla(int x, int y){
	return x+y;
}

int cikar(int x, int y){
	return x-y;
}

int carp(int x, int y){
	return x*y;
}

float bol(float x, float y){
	return (float)(x/y);
}

void yazdir(int sonuc){
	printf("Sonuç : %d\n", sonuc);
}

void floatYazdir(float sonuc){
	printf("Sonuç : %.2f\n", sonuc);
}