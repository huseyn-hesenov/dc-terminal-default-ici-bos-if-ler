#include "DualVNH5019MotorShield.h"
#define button1 4
#define button2 2
#define button3 3
#define button4 5
#define sensorPin A0
int sensorMeasureDistance=0; //"sm"
int boyu; //insanin boyu "sm"
const int terminalYerMesafesi=200; //"sm" measure between terminal and ground is constant
int Position=0;
DualVNH5019MotorShield md;//Use default pins
void setup() {     
md.init();

}
void loop() { 
  sensorMeasureDistance = analogRead(sensorPin) * 1;//read sesnor value
  boyu=terminalYerMesafesi-sensorMeasureDistance;
  int buttonvalue1=digitalRead(button1);//read button value(1 or 0)
  int buttonvalue2=digitalRead(button2);
  int buttonvalue3=digitalRead(button3);
  int buttonvalue5=digitalRead(button5);
  //Serial.print(buttonvalue);
  Serial.println( sensorMeasureDistance);
  delay(500);
if(buttonvalue1 || buttonvalue2 || buttonvalue3 || buttonvalue4==1){
 
  }
//Heigh-> 150 <=> 170
if(boyu>=150 && boyu<=170){
  if(Position==0){
    
  }
  else if(Position==50000){

  }
  else if(Position==70000){

  }}
//Heigh-> 171 <=> 188
if(boyu>=171 && boyu<=188){
  if(Position==0){

  }
  else if(Position==30000){

  }
  else if(Position==70000){

  }}
//Heigh-> 190 <=> 195
if(boyu>=190 &&boyu<=195){
  if(Position==0){

  }
  else if(Position=30000){

  }
  else if(Position==50000){
 
  }}}
