#include <iostream>
#include <string>
#include "Clothes.cpp"
using namespace std;


class ClothesData {
	Clothes listClothes[100];
	ClothesData() {
		listClothes[0].setSellerID("mbc");
		listClothes[0].setName("hat");
		listClothes[0].setCompany("chulsoo");
		listClothes[0].setPrice(2000);
		listClothes[0].setQuantity(1);
	}


};