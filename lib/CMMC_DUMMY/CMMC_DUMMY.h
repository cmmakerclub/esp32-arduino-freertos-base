#ifndef CMMC_DUMMY_H
#define CMMC_DUMMY_H

#include <Arduino.h>
#include <CMMC_Module.h>

#include <Wire.h>

class CMMC_DUMMY: public CMMC_Module {
  protected:
    int counter = 0;
    float temperature;
    float humidity;
    float pressure;
  public:
    CMMC_DUMMY();
    void setup();
    void loop();
    void configLoop();
    void configSetup();
    float getTemperature();

};

#endif
