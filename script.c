#include <LiquidCrystal.h>

LiquidCrystal lcd(8, 9, 10, 11, 12, 13);

char ArrSHOW[5];

void setup()
{
    lcd.begin(16, 2);
}

void loop()
{
    lcd.print("Density in")
    lcd.setCursor(0, 1);
    lcd.print("(Gauss):");

    String RESULT = String((analogRead(A0)-515)/3.76);
    RESULT.toCharArray(ArrSHOW, 5);

    lcd.print(ArrSHOW);
    lcd.print("G   ");
    lcd.setCursor(0, 0);
}
