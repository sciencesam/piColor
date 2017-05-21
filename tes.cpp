#include "CImg.h"
#include <cstdio>
#include <math.h>
#define sizy 15
using namespace cimg_library;
unsigned char Hue(unsigned char r, unsigned char g, unsigned char b);
int main() {
  CImg<unsigned char> base("color.bmp"), mask("layer.bmp");
  //CImg<unsigned char> sam(sizy,sizy,1,3); 
  /*char i,j;
  for(i=0; i<sizy, i++){
    for(j=0; j<sizy;j++){

    }
  }*/
  //Cimg<unsigned char> sam(base.width(), base.height())
  //sam = base.get_RGBtoHSL();
  std::printf("width:%d, height:%d\n", base.width(), base.height());
  //base.blur(2.5);
  CImgDisplay base_disp(base,"Base"), mask_disp(mask,"Mask");
  while (!base_disp.is_closed() && !mask_disp.is_closed()  ) {
    base_disp.wait();
    mask_disp.wait();
    //sam_disp.wait();
  }
  return 0;
}
/*unsigned char Hue(unsigned char r, unsigned char g, unsigned char b){
  unsigned char R,G,B;
  R=r/255
}*/