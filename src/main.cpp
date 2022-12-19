#include <Arduino.h>

#define BLUE_LED_PIN 33
#define GREEN_LED_PIN 32
#define RED_LED_PIN 26

#define UV_LIGHT_PIN 8
#define IR_LIGHT_PIN 2
#define WHITE_LIGHT_PIN 4

#define RAIN_CTL_PIN 0
#define AERATION_CTL_PIN 16
#define IRRIGATION_CTL_PIN 17
#define VENTILATION_CTL_PIN 5

#define AIR_HEAT_CTL 18
#define WATER_HEAT_CTL 19

int state = 0;

void setup() 
{
  pinMode(RED_LED_PIN, OUTPUT);
  pinMode(GREEN_LED_PIN, OUTPUT);
  pinMode(BLUE_LED_PIN, OUTPUT);
  pinMode(RAIN_CTL_PIN, OUTPUT);
  pinMode(AERATION_CTL_PIN, OUTPUT);
  pinMode(IRRIGATION_CTL_PIN, OUTPUT);
  pinMode(VENTILATION_CTL_PIN, OUTPUT);

  Serial.begin(115200);
}

bool digitalsOn = false;

void loop() 
{
  switch (state)
  {
    case 0:
      digitalWrite(RED_LED_PIN, LOW);   // turn the LED off by making the voltage LOW
      digitalWrite(GREEN_LED_PIN, LOW);  // turn the LED on (HIGH is the voltage level)
      digitalWrite(BLUE_LED_PIN, LOW);  // turn the LED on (HIGH is the voltage level)
      state++;
      break;
    case 1:
      digitalWrite(RED_LED_PIN, HIGH);   // turn the LED off by making the voltage LOW
      digitalWrite(GREEN_LED_PIN, LOW);  // turn the LED on (HIGH is the voltage level)
      digitalWrite(BLUE_LED_PIN, LOW);  // turn the LED on (HIGH is the voltage level)
      state++;
      break;
    case 2:
      digitalWrite(RED_LED_PIN, HIGH);   // turn the LED off by making the voltage LOW
      digitalWrite(GREEN_LED_PIN, HIGH);  // turn the LED on (HIGH is the voltage level)
      digitalWrite(BLUE_LED_PIN, LOW);  // turn the LED on (HIGH is the voltage level)
      state++;
      break;
    case 3:
      digitalWrite(RED_LED_PIN, HIGH);   // turn the LED off by making the voltage LOW
      digitalWrite(GREEN_LED_PIN, HIGH);  // turn the LED on (HIGH is the voltage level)
      digitalWrite(BLUE_LED_PIN, HIGH);  // turn the LED on (HIGH is the voltage level)
      state++;
      break;
    case 4:
      digitalWrite(RED_LED_PIN, LOW);   // turn the LED off by making the voltage LOW
      digitalWrite(GREEN_LED_PIN, HIGH);  // turn the LED on (HIGH is the voltage level)
      digitalWrite(BLUE_LED_PIN, HIGH);  // turn the LED on (HIGH is the voltage level)
      state++;
      break;
    case 5:
      digitalWrite(RED_LED_PIN, LOW);   // turn the LED off by making the voltage LOW
      digitalWrite(GREEN_LED_PIN, LOW);  // turn the LED on (HIGH is the voltage level)
      digitalWrite(BLUE_LED_PIN, HIGH);  // turn the LED on (HIGH is the voltage level)
      state++;
      break;
    case 6:
      digitalWrite(RED_LED_PIN, LOW);   // turn the LED off by making the voltage LOW
      digitalWrite(GREEN_LED_PIN, LOW);  // turn the LED on (HIGH is the voltage level)
      digitalWrite(BLUE_LED_PIN, LOW);  // turn the LED on (HIGH is the voltage level)
      state++;
      break;
    case 7:
      digitalWrite(RED_LED_PIN, LOW);   // turn the LED off by making the voltage LOW
      digitalWrite(GREEN_LED_PIN, LOW);  // turn the LED on (HIGH is the voltage level)
      digitalWrite(BLUE_LED_PIN, HIGH);  // turn the LED on (HIGH is the voltage level)
      state++;
      break;
    case 8:
      digitalWrite(RED_LED_PIN, LOW);   // turn the LED off by making the voltage LOW
      digitalWrite(GREEN_LED_PIN, HIGH);  // turn the LED on (HIGH is the voltage level)
      digitalWrite(BLUE_LED_PIN, HIGH);  // turn the LED on (HIGH is the voltage level)
      state++;
      break;
    case 9:
      digitalWrite(RED_LED_PIN, HIGH);   // turn the LED off by making the voltage LOW
      digitalWrite(GREEN_LED_PIN, HIGH);  // turn the LED on (HIGH is the voltage level)
      digitalWrite(BLUE_LED_PIN, HIGH);  // turn the LED on (HIGH is the voltage level)
      state++;
      break;
    case 10:
      digitalWrite(RED_LED_PIN, HIGH);   // turn the LED off by making the voltage LOW
      digitalWrite(GREEN_LED_PIN, HIGH);  // turn the LED on (HIGH is the voltage level)
      digitalWrite(BLUE_LED_PIN, LOW);  // turn the LED on (HIGH is the voltage level)
      state++;
      break;
    case 11:
      digitalWrite(RED_LED_PIN, HIGH);   // turn the LED off by making the voltage LOW
      digitalWrite(GREEN_LED_PIN, LOW);  // turn the LED on (HIGH is the voltage level)
      digitalWrite(BLUE_LED_PIN, LOW);  // turn the LED on (HIGH is the voltage level)
      state=0;
      break;
  }

  if(digitalsOn)
  {
      digitalWrite(RAIN_CTL_PIN, LOW);
      digitalWrite(AERATION_CTL_PIN, LOW);
      digitalWrite(IRRIGATION_CTL_PIN, LOW);
      digitalWrite(VENTILATION_CTL_PIN, LOW);
      digitalsOn = false;
  }
  else
  {
      digitalWrite(RAIN_CTL_PIN, HIGH);
      digitalWrite(AERATION_CTL_PIN, HIGH);
      digitalWrite(IRRIGATION_CTL_PIN, HIGH);
      digitalWrite(VENTILATION_CTL_PIN, HIGH);
      digitalsOn = true;
  }
  Serial.print("off");
  delay(1000);      
}