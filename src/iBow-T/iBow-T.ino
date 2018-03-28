/*********************************************************************

Author: Ayan Pahwa
Project: iBow-T

*********************************************************************/

#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define OLED_RESET 4
Adafruit_SSD1306 display(OLED_RESET);

void setup()   {                
  
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);  // initialize with the I2C addr 0x3C (for the 128x32)

  display.display();
  delay(2000);
  
  display.clearDisplay(); // Clear the buffer.
  testscrolltext(); // Function call to display text

}
void loop() {
  
}

void testscrolltext(void) {
  
  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.setCursor(0,0);
  display.clearDisplay();
  display.println("Ayan Pahwa");
  display.setTextSize(1);
  display.setCursor(32,20);
  display.println(" (SDIoT)");
  display.display();
  delay(1);
  
}
