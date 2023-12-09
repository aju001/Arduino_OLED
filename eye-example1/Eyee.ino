#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

int touch = 3;
void mad();

#define SCREEN_WIDTH  128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64  // OLED display height, in pixels

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

#include "aju.h"

void setup() {
  pinMode(touch, INPUT);
  Serial.begin(9600);
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    for (;;)
      ;
  }

  delay(0);              // Pause for 2 seconds
  display.clearDisplay(); // Clear the buffer

  // Displays HELLO on the screen
  display.drawBitmap(0, 0, image_data_WORD_HELLOarray, 128, 64, 1);
  display.display();

  delay(2500);           // Pause for 2.5 seconds
  display.clearDisplay(); // Clear the buffer
}

void drawImage(const unsigned char *image_data, int width, int height) {
  display.drawBitmap(0, 0, image_data, width, height, 1);
  display.display();
  delay(1500);           // Pause for 1.5 seconds
  display.clearDisplay();
}



void checkAndDisplay(const unsigned char *image_data, int width, int height) {
  drawImage(image_data, width, height);
  if (digitalRead(touch) == 1) {
    display.drawBitmap(0, 0, image_data_EYES_MADarray, 128, 64, 1);
    display.display(); 

    //delay(2000); // Pause for 2 seconds
    display.clearDisplay();
    while (digitalRead(touch) == 1) {
      // Wait until the touch is released
    }
    return;
  }
}

void loop() {
  checkAndDisplay(image_data_EYES_SLEEParray, 128, 64);
  delay(3500);
  checkAndDisplay(image_data_EYES_FRONTarray, 128, 64);
  checkAndDisplay(image_data_EYES_RIGHTarray, 128, 64);
  checkAndDisplay(image_data_EYES_FRONTarray, 128, 64);
  checkAndDisplay(image_data_EYES_LEFTarray, 128, 64);
}
