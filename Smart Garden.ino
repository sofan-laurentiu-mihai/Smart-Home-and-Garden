#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define SOIL_MOISTURE_PIN A0   
#define PUMP_PIN 3             
#define MOISTURE_THRESHOLD 45  

LiquidCrystal_I2C lcd(0x27, 16, 2); 

unsigned long lastResetTime = 0;   
const unsigned long RESET_INTERVAL = 10000; 

void setup() {
  Serial.begin(9600);       
  pinMode(SOIL_MOISTURE_PIN, INPUT);
  pinMode(PUMP_PIN, OUTPUT);
  digitalWrite(PUMP_PIN, HIGH); 
  
  lcd.init();                
  lcd.backlight();
  lcd.print("Soil Moisture:");
}

void loop() {
  
  int sensorValue = analogRead(SOIL_MOISTURE_PIN);
  int moisturePercent = map(sensorValue, 1023, 0, 0, 100);

  lcd.setCursor(0, 1);
  lcd.print(moisturePercent);
  lcd.print("%    ");  

 
  Serial.print("Soil Moisture: ");
  Serial.print(moisturePercent);
  Serial.println("%");

  
  if (moisturePercent > MOISTURE_THRESHOLD) {
    digitalWrite(PUMP_PIN, LOW);  
  } else {
    digitalWrite(PUMP_PIN, HIGH); 
  }


  if (millis() - lastResetTime >= RESET_INTERVAL) {
    lastResetTime = millis();

    
    Serial.println("Performing LCD Reset.");
    
    lcd.noBacklight();    
    delay(100);           
    lcd.init();          
    lcd.backlight();      
    lcd.clear();         
    lcd.print("Soil Moisture:");
  }

  delay(1000);
}
