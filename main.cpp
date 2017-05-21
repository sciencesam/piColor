#include <cstdlib>
#include <ctime>
#include "CImg.h"
using namespace cimg_library;
int main() {
	std::srand(time(NULL));
	CImg<uint8_t> img("lena.bmp");  // Define a 320x200 color image (3 channels).
	
	img.display("Display my image");
	return 0;
}