#include <Arduino.h>
/**
 * @file main.ino
 * @brief Embedded Touch Detection System using TTP223
 * @author RUDRAKSHA SHARMA (Git- rudraksha-sh )
 * @date 2026-01-25
 *
 * @details
 * Reads digital touch input from TTP223 sensor
 * and displays structured output via Serial Monitor.
 */

// TODO 1:
#define TOUCHPIN 2

// TODO 2: Create variable to store touch state
int touchState = 0;

void setup() {

    // TODO 3: Initialize Serial communication (9600 baud rate)
    Serial.begin(9600);

    // TODO 4: Configure touch pin as INPUT
    pinMode(TOUCHPIN, INPUT);

    // TODO 5: Print system initialization message
    Serial.println("TTP223 Touch Detection System Initialized");
}

void loop() {

    // TODO 6: Read digital value from touch sensor
    touchState = digitalRead(TOUCHPIN);

    // TODO 7: If touch detected (HIGH)
    if (touchState == HIGH) {
        Serial.println("Touch Detected");
    } else {
        Serial.println("No Touch");
    }

    // TODO 8: Add small delay (200–500ms)
    delay(300);
}