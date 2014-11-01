#include<iostream>
#include <sys/types.h>
#include <sys/stat.h>
#include "Magick++.h"
#include<fstream>
#include<sstream>
#include<string.h>
using namespace std;
using namespace Magick;

class BinaryImage{
private:
	char label;
	char r[32 * 32];
	char b[32 * 32];
	char g[32 * 32];
public:
        BinaryImage();
	void read(ifstream & ifs);
	char * asPixels(char stream[]);
	int getLabel();
		
};
