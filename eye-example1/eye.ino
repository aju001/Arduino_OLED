


#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);


#include "aju.h"

void setup() {





  Serial.begin(9600);
   if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
}
 
  delay(2000); // Pause for 2 seconds

  display.clearDisplay();  // Clear the buffer

// Displays HELLO on the screen
  display.drawBitmap(0, 0, image_data_WORD_HELLOarray, 128, 64, 1);
  display.display();

  delay(2500); // Pause for 2.5 seconds
  display.clearDisplay();  // Clear the buffer
}

void loop() {
// Use Void Loop to display multipule images

  delay(500); // Pause for half second
  display.clearDisplay();  // Clear the buffer

// Displays EYES_SLEEP on the screen
  display.drawBitmap(0, 0, image_data_EYES_SLEEParray, 128, 64, 1);
  display.display();

  delay(3300); // Pause for 3 seconds
  display.clearDisplay();  // Clear the buffer

// Displays DISTRESSED_EYES on the screen
  display.drawBitmap(0, 0, image_data_DISTRESSED_EYESarray, 128, 64, 1);
  display.display();

  delay(1500); // Pause for 1.5 seconds
  display.clearDisplay();  // Clear the buffer

// Displays EYES_FRONT on the screen
  display.drawBitmap(0, 0, image_data_EYES_FRONTarray, 128, 64, 1);
  display.display();

  delay(1500); // Pause for 1.5 seconds
  display.clearDisplay();  // Clear the buffer

// Displays EYES_RIGHT on the screen
  display.drawBitmap(0, 0, image_data_EYES_RIGHTarray, 128, 64, 1);
  display.display();

  delay(1500); // Pause for 1.5 seconds
  display.clearDisplay();  // Clear the buffer


  // Displays EYES_FRONT on the screen
  display.drawBitmap(0, 0, image_data_EYES_FRONTarray, 128, 64, 1);
  display.display();

  delay(1500); // Pause for 1.5 seconds
  display.clearDisplay();  // Clear the buffer

  // Displays EYES_RIGHT on the screen
  display.drawBitmap(0, 0, image_data_EYES_LEFTarray, 128, 64, 1);
  display.display();

  delay(1500); // Pause for 1.5 seconds
  display.clearDisplay();  // Clear the buffer


  // Displays EYES_FRONT on the screen
  display.drawBitmap(0, 0, image_data_EYES_FRONTarray, 128, 64, 1);
  display.display();

  delay(1500); // Pause for 1.5 seconds
  display.clearDisplay();  // Clear the buffer


  // Displays DISTRESSED_EYES on the screen
  display.drawBitmap(0, 0, image_data_DISTRESSED_EYESarray, 128, 64, 1);
  display.display();

  delay(1500); // Pause for 1.5 seconds
  display.clearDisplay();  // Clear the buffer


////////////////////////////////////////////////////////////////////////////////

 
// Displays EYES_FRONT on the screen
  display.drawBitmap(0, 0, image_data_EYES_FRONTarray, 128, 64, 1);
  display.display();

  delay(1500); // Pause for 1.5 seconds
  display.clearDisplay();  // Clear the buffer

// Displays EYES_RIGHT on the screen
  display.drawBitmap(0, 0, image_data_EYES_RIGHTarray, 128, 64, 1);
  display.display();

  delay(1500); // Pause for 1.5 seconds
  display.clearDisplay();  // Clear the buffer


  // Displays EYES_FRONT on the screen
  display.drawBitmap(0, 0, image_data_EYES_FRONTarray, 128, 64, 1);
  display.display();

  delay(1500); // Pause for 1.5 seconds
  display.clearDisplay();  // Clear the buffer

  // Displays EYES_RIGHT on the screen
  display.drawBitmap(0, 0, image_data_EYES_LEFTarray, 128, 64, 1);
  display.display();

  delay(1500); // Pause for 1.5 seconds
  display.clearDisplay();  // Clear the buffer


  // Displays EYES_FRONT on the screen
  display.drawBitmap(0, 0, image_data_EYES_FRONTarray, 128, 64, 1);
  display.display();

  delay(1500); // Pause for 1.5 seconds
  display.clearDisplay();  // Clear the buffer


  // Displays DISTRESSED_EYES on the screen
  display.drawBitmap(0, 0, image_data_DISTRESSED_EYESarray, 128, 64, 1);
  display.display();

  delay(1500); // Pause for 1.5 seconds
  display.clearDisplay();  // Clear the buffer


////////////////////

// Displays EYES_FRONT on the screen
  display.drawBitmap(0, 0, image_data_EYES_FRONTarray, 128, 64, 1);
  display.display();

  delay(1500); // Pause for 1.5 seconds
  display.clearDisplay();  // Clear the buffer

// Displays EYES_RIGHT on the screen
  display.drawBitmap(0, 0, image_data_EYES_RIGHTarray, 128, 64, 1);
  display.display();

  delay(1500); // Pause for 1.5 seconds
  display.clearDisplay();  // Clear the buffer


  // Displays EYES_FRONT on the screen
  display.drawBitmap(0, 0, image_data_EYES_FRONTarray, 128, 64, 1);
  display.display();

  delay(1500); // Pause for 1.5 seconds
  display.clearDisplay();  // Clear the buffer

  // Displays EYES_RIGHT on the screen
  display.drawBitmap(0, 0, image_data_EYES_LEFTarray, 128, 64, 1);
  display.display();

  delay(1500); // Pause for 1.5 seconds
  display.clearDisplay();  // Clear the buffer


  // Displays EYES_FRONT on the screen
  display.drawBitmap(0, 0, image_data_EYES_FRONTarray, 128, 64, 1);
  display.display();

  delay(1500); // Pause for 1.5 seconds
  display.clearDisplay();  // Clear the buffer


  // Displays DISTRESSED_EYES on the screen
  display.drawBitmap(0, 0, image_data_DISTRESSED_EYESarray, 128, 64, 1);
  display.display();

  delay(1500); // Pause for 1.5 seconds
  display.clearDisplay();  // Clear the buffer


///////////////////////////////////////////////////////////////////////////////////////////////

  
   // Displays WHAT on the screen
  display.drawBitmap(0, 0, image_data_WHAT_WORDarray, 128, 64, 1);
  display.display();

  delay(1500); // Pause for 1.5 seconds
  display.clearDisplay();  // Clear the buffer

  // Draw 19 EYES_MAD bitmap on the screen
  display.drawBitmap(0, 0, image_data_EYES_MADarray, 128, 64, 1);
  display.display(); 

  delay(2000); // Pause for 2 seconds
  display.clearDisplay();


  // Displays BYE on the screen
  display.drawBitmap(0, 0, image_data_WORD_BYEarray, 128, 64, 1);
  display.display();

  delay(2500); // Pause for 2.5 seconds
  display.clearDisplay();  // Clear the buffer


// Displays EYES_SLEEP on the screen
  display.drawBitmap(0, 0, image_data_EYES_SLEEParray, 128, 64, 1);
  display.display();

  delay(10000); // Pause for 10 seconds
  display.clearDisplay();  // Clear the buffer
}
// End of Arduino Sketch  
