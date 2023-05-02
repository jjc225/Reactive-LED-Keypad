#include <Audio.h> // Teensy, used for DSP and 
#include <FastLED.h> //FastLED, used for the WS2812B

// Define LED strip parameters
#define NUM_LEDS 30         // The number of LEDs in the strip
#define DATA_PIN 7          // The data pin connected to the LED strip
#define LED_TYPE WS2812B    // The type of LED strip (e.g., WS2812B)
#define COLOR_ORDER GRB     // The color order of the LED strip (e.g., GRB)

CRGB leds[NUM_LEDS];       // Array to store the LED colors

// Create audio objects
AudioInputUSB           usbAudioInput;
AudioAnalyzePeak        peakLeft, peakRight;
AudioConnection         patchCord1(usbAudioInput, 0, peakLeft, 0);
AudioConnection         patchCord2(usbAudioInput, 1, peakRight, 0);

void setup() {
  // Initialize the audio library to 12 Blocks
  AudioMemory(12);

  // Initialize the FastLED library
  FastLED.addLeds<LED_TYPE, DATA_PIN, COLOR_ORDER>(leds, NUM_LEDS).setCorrection(TypicalLEDStrip);
  FastLED.setBrightness(64);  // Set the initial brightness (0-255)
}

void loop() {
  // Check if new audio peaks are available
    // Get the amplitude of both channels
    float amplitudeLeft = peakLeft.read();
    float amplitudeRight = peakRight.read();

    // Calculate the average amplitude
    float amplitude = (amplitudeLeft + amplitudeRight) / 2.0;

    // Map the amplitude to LED brightness
    int brightness = (int)map(amplitude * 1000, 0, 1000, 0, 255);

    // Set the LED color and brightness
    for (int i = 0; i < NUM_LEDS; i++) {
      leds[i] = CRGB::Blue; // Set the color of the LEDs
      leds[i].fadeToBlackBy(255 - brightness);
    }

    // Update the LEDs
    FastLED.show();
}
