#pragma once
#include "item.h"
#include <iostream>
#include <stdlib.h>
#include <fstream>

class vend {
private:
	item items[5];
public:
	void run();
	void ReadData();
	void WriteData();
};