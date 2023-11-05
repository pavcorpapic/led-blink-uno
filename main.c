#include <avr/io.h>
#include <util/delay.h>

#define LED_PIN 5 // Define the pin number for the built-in LED (Pin 13)

int main(void) {
    // Set the LED pin as an output
    DDRB |= (1 << LED_PIN);

    while (1) {
        // Turn the LED on
        PORTB |= (1 << LED_PIN);

        // Wait for 1000 ms (1 second)
        _delay_ms(1000);

        // Turn the LED off
        PORTB &= ~(1 << LED_PIN);

        // Wait for 1000 ms (1 second)
        _delay_ms(1000);
    }

    return 0;
}
