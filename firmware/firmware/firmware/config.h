#include "sensors.h"
#include "config.h"

void initSensors() {
    pinMode(DHT_PIN, INPUT);
    pinMode(MQ2_PIN, INPUT);
    pinMode(PIR_PIN, INPUT);
}

void readSensors() {
    temperature = readDHT();
    gasStatus = digitalRead(MQ2_PIN);
    motionDetected = digitalRead(PIR_PIN);
}
