/******************************************************************************
  Arduino LOGO for use with 128x64 OLED by Vin.X.Mod
  This will make a Arduino LOGO Splash Screen for 5 seconds then BLANK screen.
  Press your Arduino's RESET BUTTON to see Splash Screen again.

  Online Image to C Array Converter at: https://lvgl.io/tools/imageconverter
  Adafruit 128x64 OLED Graphic Display: https://www.adafruit.com/product/326

******************************************************************************/

#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);


static const unsigned char PROGMEM image_data_ARDUINOarray[] = { 
  // ARDUINO Logo C-File Array
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x80, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xf0, 0x00, 0x00, 0x07, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xfc, 0x00, 0x00, 0x3f, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0x00, 0x00, 0x7f, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xc0, 0x01, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0xe0, 0x03, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xf0, 0x07, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xff, 0x80, 0x7f, 0xf8, 0x0f, 0xff, 0x00, 0xff, 0xe0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0xfe, 0x00, 0x1f, 0xfc, 0x1f, 0xfc, 0x00, 0x3f, 0xf0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0f, 0xf8, 0x00, 0x07, 0xfe, 0x3f, 0xf0, 0x00, 0x0f, 0xf8, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x03, 0xff, 0x7f, 0xe0, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x1f, 0xe0, 0x00, 0x01, 0xff, 0x7f, 0x80, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x1f, 0xc0, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x01, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x3f, 0xc0, 0x00, 0x00, 0x7f, 0xff, 0x00, 0x38, 0x01, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x3f, 0x80, 0x00, 0x00, 0x3f, 0xfe, 0x00, 0x38, 0x00, 0xfe, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x3f, 0x80, 0x00, 0x00, 0x1f, 0xfc, 0x00, 0x38, 0x00, 0xfe, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x3f, 0x80, 0x00, 0x00, 0x0f, 0xf8, 0x00, 0x38, 0x00, 0xfe, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x3f, 0x01, 0xff, 0xe0, 0x0f, 0xf8, 0x03, 0xff, 0x80, 0xfe, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x3f, 0x01, 0xff, 0xe0, 0x07, 0xf0, 0x03, 0xff, 0x80, 0xfe, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x3f, 0x01, 0xff, 0xe0, 0x0f, 0xf8, 0x03, 0xff, 0x80, 0xfe, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x3f, 0x80, 0xff, 0xe0, 0x0f, 0xf8, 0x03, 0xff, 0x80, 0xfe, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x3f, 0x80, 0x00, 0x00, 0x1f, 0xfc, 0x00, 0x38, 0x00, 0xfe, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x3f, 0x80, 0x00, 0x00, 0x3f, 0xfe, 0x00, 0x38, 0x00, 0xfe, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x3f, 0xc0, 0x00, 0x00, 0x7f, 0xfe, 0x00, 0x38, 0x01, 0xfe, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x1f, 0xc0, 0x00, 0x00, 0x7f, 0xff, 0x00, 0x00, 0x01, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x1f, 0xe0, 0x00, 0x00, 0xff, 0x7f, 0x80, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x01, 0xff, 0x7f, 0xc0, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0f, 0xf8, 0x00, 0x07, 0xfe, 0x3f, 0xf0, 0x00, 0x0f, 0xf8, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0xfc, 0x00, 0x0f, 0xfc, 0x1f, 0xf8, 0x00, 0x1f, 0xf0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0xff, 0x00, 0x3f, 0xf8, 0x0f, 0xfe, 0x00, 0x7f, 0xe0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xf0, 0x07, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0xe0, 0x03, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xc0, 0x01, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0x00, 0x00, 0x7f, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xfe, 0x00, 0x00, 0x3f, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xf8, 0x00, 0x00, 0x0f, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x80, 0x00, 0x00, 0x01, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x01, 0xc1, 0xf8, 0x3e, 0x0e, 0x39, 0xfe, 0x78, 0xc1, 0xe0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x01, 0xe1, 0xfe, 0x3f, 0x8e, 0x39, 0xfe, 0x78, 0xc7, 0xf0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xe1, 0xfe, 0x3f, 0xce, 0x39, 0xfe, 0x7c, 0xc7, 0x78, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xe1, 0xc7, 0x31, 0xce, 0x38, 0x38, 0x7c, 0xce, 0x38, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0x71, 0xc7, 0x30, 0xee, 0x38, 0x38, 0x7e, 0xce, 0x38, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0x71, 0xfe, 0x30, 0xee, 0x38, 0x38, 0x76, 0xce, 0x38, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0x71, 0xfe, 0x30, 0xee, 0x38, 0x38, 0x77, 0xce, 0x38, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0xf9, 0xfc, 0x31, 0xce, 0x38, 0x38, 0x73, 0xce, 0x38, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0xf9, 0xce, 0x31, 0xcf, 0x38, 0x38, 0x73, 0xce, 0x38, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0e, 0x39, 0xce, 0x3f, 0x87, 0xf1, 0xfe, 0x71, 0xc7, 0xf0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0e, 0x19, 0xcf, 0x3f, 0x03, 0xe1, 0xfe, 0x71, 0xc3, 0xe0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};


void setup() {
  Serial.begin(9600);
   if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
}
  
  delay(2000); // Pause for 2 seconds

  display.clearDisplay();  // Clear the buffer

// Displays ARDUINOarray on the screen
  display.drawBitmap(0, 0, image_data_ARDUINOarray, 128, 64, 1);
  display.display();

  delay(5000); // Keeps ARDUINOarray on OLED 5 seconds before Looping  
}


void loop() {
  display.clearDisplay();  // Clear the buffer
  display.display(); //  Clears ARDUINOarray Splash Screen
  // Add whatever you want to LOOP here
}
// End of Arduino Sketch  
