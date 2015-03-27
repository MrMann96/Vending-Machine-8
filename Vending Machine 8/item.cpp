#include "item.h"
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>

using namespace std;

item::item(){
	qty = 0;
	price = 0;
	totalsold = 0;
	profit = 0;
	name = "Unnamed";
}

int item::getqty(){
	return qty;
}

float item::getprice(){
	return price;
}

int item::gettotalsold(){
	return totalsold;
}

float item::getprofit(){
	return profit;
}

string item::getname(){
	return name;
}

void item::setqty(int v){
	qty = v;
}

void item::setprice(int v){
	price = v;
}

void item::settotalsold(int v){
	totalsold = v;
}

void item::setprofit(int v){
	profit = v;
}

void item::setname(int v){
	name = v;
}