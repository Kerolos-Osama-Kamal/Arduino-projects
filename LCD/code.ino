
//Libraries

#include <Adafruit_LiquidCrystal.h>
Adafruit_LiquidCrystal lcd_1(0);

// Define Variable
int tempPin = A2;  //Define The Pin Number of Temprature Sensor
float temp; //Define Variable To Store The Reading of Sensor

void setup(){
  lcd_1.begin(16,2); //Determine LCD
}

void loop(){
  temp = analogRead(tempPin); //Get The Reading Number From Sensor
  temp = temp * 0.48828125; //Multi. It With This Number To Get The Temprature in C
  digitalWrite(4,HIGH); //Light Up The led
  lcd_1.setCursor(0,0); //Set The Start of Typing In (0-Column) (0-Row)
  lcd_1.print("Temprature = "); //Print The Temprature Text In LCD
  lcd_1.setCursor(0,1); //Start For New Line
  lcd_1.print(temp); //Print The Temprature Number
  lcd_1.print(" C"); //Print Text (C)
}