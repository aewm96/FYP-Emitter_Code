#include <Arduino.h>
#include <OOK_look_up_table.h>

int LED_Driving_pin=7;

//Hello = 8,5,12,12,15
//World = 23,15,18,12,4

void setup() {
  Serial.begin(9600);
  pinMode(LED_Driving_pin, OUTPUT);
  }

void loop() {



  //digitalWrite(LED_Driving_pin, HIGH);
  //delay();
  //digitalWrite(LED_Driving_pin, LOW);
  //delay();
}
/*
void BDC(){
  int a[]={H, E, L, L, O, W, O, R, L, D};
  int b[]={};

for (int i=0; a[].length; i++){
  b[i]=a[i]%2;
}
}*/
