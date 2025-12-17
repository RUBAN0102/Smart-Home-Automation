#include "config.h"
#include "sensors.h"

void setup() {
    Serial.begin(115200);
    initSensors();
    initRelays();
    initLCD();
}

void loop() {
    readSensors();
    updateLCD();
    handleAutomationLogic();
    delay(1000);
}
