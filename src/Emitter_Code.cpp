#include <Arduino.h>
#include <OOK_look_up_table.h>

//Hello = 8,5,12,12,15
//World = 23,15,18,12,4

  int LED_Driving_pin=7;
  int a[]={H, E, L, L, O, W, O, R, L, D};
  //int a[]={8, 5, 12, 12, 15, 23, 15, 18, 12, 4};
  int b[10][8];

void setup() {
  Serial.begin(9600);
  pinMode(LED_Driving_pin, OUTPUT);
  }

void LED_BIN(){
  for (int i=0; i<10; i++){
    for (int j=0; j<8; j++){
      if(bitRead(a[i],j) == 1){
        digitalWrite(LED_Driving_pin, HIGH);
        delay(100);
      }
      else{
        digitalWrite(LED_Driving_pin, LOW);
        delay(100);
      }
 }
}
}

void loop() {
  
  LED_BIN();
  /*Serial.println("-------------------------");
  for (int i=0; i<10; i++){
      Serial.println(a[i], BIN);
  }
  Serial.println("-------------------------");*/
}


