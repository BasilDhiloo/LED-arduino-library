#ifndef tl
#define tl


#if(ARDUINO >= 100)
  #include "arduino.h"
#else 
  #include "Wprogram.h"
#endif


class Lab6Led{
  private:
    int _pin1;
    int _pin2;
    int _pin3;
    int _pin4;
    

  public:
    Lab6Led(int a, int b, int c, int d);
    begin();
    upCount();
    downCount();
    shiftRight();
    shiftLeft();
    allOff();
    dispDigit(int numb, int pin[4]);
  };




#endif
