#include "mbed.h"

// Define the pin for the button
DigitalIn buttonPin(PC_13);

// Create an InterruptIn object using the button pin
InterruptIn buttonInterrupt(PC_13);

// Callback function for button press
void buttonPressed() {
    printf("Button pressed\n");
}

int main() {
    // Attach the callback function to the button interrupt
    buttonInterrupt.fall(&buttonPressed);
    while (1) {
    }
}
