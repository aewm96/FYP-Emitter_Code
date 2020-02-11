#include <Arduino.h>
#include <OOK_look_up_table.h>

int LED_Driving_pin=7;

//Hello = 8,5,12,12,15
//World = 23,15,18,12,4
  int a[]={H, E, L, L, O, W, O, R, L, D};
  int b[10][8];
void setup() {
  Serial.begin(9600);
  pinMode(LED_Driving_pin, OUTPUT);
  }

void loop() {
  Serial.println("-------------------------------------------------------------");
  Serial.println("Binary Values of Hello World are as follows");
  Serial.println("-------------------------------------------------------------");

  for (int i=0; i<10; i++){
    Serial.println(a[i]);
    for(int j=0; j<8; j++){
      Serial.print(b[i][j]);
    }
    Serial.println("");
  }
  //digitalWrite(LED_Driving_pin, HIGH);
  //delay();
  //digitalWrite(LED_Driving_pin, LOW);
  //delay();
}

void BDC(){
  for (int i=0; i<10; i++){
    for (int j=0; j<8; j++){
      b[i][j]=(a[i]&(int)pow(2,j))/(int)pow(2,j);
    }
  }
}
