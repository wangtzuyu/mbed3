#include "mbed.h"


AnalogOut Aout(DAC0_OUT);

AnalogIn Ain(A0);

float ADCdata;


int main(){

  while(1){

    ADCdata = Ain;

    Aout = ADCdata;

    wait(2);
    //wait(0.2);
    //wait(0.02);
    //wait(0.002);

  }

}
