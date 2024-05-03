// controle van 6 valven en een Lcd scherm
// lcd scherm --> 8, 9, 10, 11, 12, 13
// valven --> gpio 2, 3, 4, 5, 6

#include <LiquidCrystal.h>

// en = 13
// rs = 12
// d4 = 11, d5 = 10, d6 = 9, d7 = 8

const int rs = 12, en = 13, d4 = 8, d5 = 9, d6 = 10, d7 = 11;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);


void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("hello, O2 filter!");
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
  // print the number of seconds since reset:
  lcd.print(millis() / 1000);  
}
