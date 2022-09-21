#include <LiquidCrystal.h>;

// initialize the library
LiquidCrystal lcd(7,8,9,10,11,12);

byte guna[8] = {
 B01110,
  B11111,
  B11111,
  B01111,
  B01111,
  B01111,
  B01111,
  B01111
};
byte gunb[8] = {
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111
};
byte gunc[8] = {
  B10000,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111
};

byte gund[8] = {
  B10000,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B10000
};
byte gune[8] = {
B00000,
  B00000,
  B11111,
  B11111,
  B11111,
  B11111,
  B00000,
  B00000
};
byte gunf[8] = {
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111
};
byte gung[8] = {
  B10011,
  B11011,
  B00011,
  B11111,
  B11110,
  B00000,
  B00000,
  B00000
};
byte gunh[8] = {
  B00000,
  B00000,
  B00000,
  B11111,
  B11111,
  B00000,
  B00000,
  B00000
};

void setup() 
{
  lcd.begin(16, 2);

  // create a new custom character
  lcd.createChar(0,guna);
lcd.createChar(1,gunb);
 lcd.createChar(2,gunc);
  lcd.createChar(3,gund);
   lcd.createChar(4,gune);
    lcd.createChar(5,gunf);
     lcd.createChar(6,gung);
     lcd.createChar(7,gunh);
        
  
  
lcd.setCursor(1,0);

  // Print a message to the lcd.
  lcd.print("PUBG");
  
  lcd.setCursor(6,0);
  lcd.write(byte(0)); 
  
lcd.setCursor(7,0);
  lcd.write((byte)1);
  
  lcd.setCursor(8,0);
  lcd.write((byte)2);

lcd.setCursor(9,0);
  lcd.write((byte)3);

lcd.setCursor(10,0);
  lcd.write((byte)4);
  
   lcd.setCursor(11,0);
  lcd.write((byte)7);
  
 
lcd.setCursor(7,1);
  lcd.write((byte)5);

lcd.setCursor(8,1);
  lcd.write((byte)6);

  
  
 // lcd.setCursor(11,0);
  //lcd.write((byte)7);
  //lcd.setCursor(12,0);
//lcd.write((byte)8);


  //lcd.write((uint8_t)0);
}


void loop() {
  
lcd.setCursor(11,1);
  lcd.print("pi");

  //lcd.noDisplay();
  //delay(1000);
  // Turn on the display:
  //lcd.display();
 // delay(1000);
}
