#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
void setup() {
 lcd.begin(16,2); //16 Rows 2 Columns
 lcd.setCursor(4,0);
 lcd.print("Bonjour");
 lcd.setCursor(12,0);
 lcd.setCursor(2,1);
 lcd.print("C'est Nathan");
}

void loop() {
}
