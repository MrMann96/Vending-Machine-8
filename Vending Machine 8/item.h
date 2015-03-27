#pragma once
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

class item {
private:
	int qty;
	float price;
	int totalsold;
	float profit;
	string name;
public:
	item();
	int getqty();
	float getprice();
	int gettotalsold();
	float getprofit();
	string getname();

	void setqty(int v);
	void setprice(int v);
	void settotalsold(int v);
	void setprofit(int v);
	void setname(int v);
};