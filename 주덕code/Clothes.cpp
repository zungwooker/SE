#include "Clothes.h"


void Clothes::setsellerID(string sellerID) {
	this->sellerID = sellerID;
}
void Clothes::setname(string name) {
	this->name = name;
}
void Clothes::setcompany(string company) {
	this->company = company;
}
void Clothes::setprice(int price) {
	this->price = price;
}
void Clothes::setquantity(int quantity) {
	this->quantity = quantity;
}
void Clothes::setstock(int stock) {
	this->stock = stock;
}
void Clothes::setaveragePurchaseSatisfaction(float averagePurchaseSatisfaction) {
	this->averagePurchaseSatisfaction = averagePurchaseSatisfaction;
}
string Clothes::getsellerID() {
	return this->sellerID;
}
string Clothes::getname() {
	return this->name;
}
string Clothes::getcompany() {
	return this->company;
}
int Clothes::getprice() {
	return this->price;
}
int Clothes::getquantity() {
	return this->quantity;
}
int Clothes::getstock() {
	return this->stock;
}
float Clothes::getaveragePurchaseSatisfaction() {
	return this->averagePurchaseSatisfaction;
}
