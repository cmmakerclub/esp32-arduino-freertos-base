#include <Arduino.h>
#include <WiFi.h>
#include <rom/rtc.h>
#include <HardwareSerial.h>
#include <CMMC_Module.h>
#include "utils.hpp"

const int MODULE_SIZE = 2; 
CMMC_Module* modules[10]; 
RTC_DATA_ATTR static int rebootCount = -1; 

/* function headers */
void appTask( void * parameter);

void setup() {
  /* Stack size in bytes. */ /* Parameter passed as input of the task */ /* Priority of the task. */
  xTaskCreate(appTask, "appTask", 10000, NULL, 2, NULL); 

  rebootCount++;
  Serial.begin(115200);
}

void loop() {

}

void appTask(void * parameter)
{
    // rtc->setup();
    // pinMode(EXT_WDT_PIN, OUTPUT);
    while (1) {
      // rtc->loop();
      // lcd->loop();
    }
} 