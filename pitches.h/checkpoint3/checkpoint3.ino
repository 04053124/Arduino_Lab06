#include <Keypad.h>
#include "pitches.h"
const byte ROWS=4;
const byte COLS=4;
int duration=200;
const byte Buzzer=13;
const int rhythm=500;
char index;
int SoundLeng;
char song_tone;
char chr;
char *ptr;
char keys[ROWS][COLS]={
 {'F','E','D','C'},
 {'B','3','6','9'},
 {'A','2','5','8'},
 {'0','1','4','7'}
};
byte rowPins[ROWS]={7,8,9,10};
byte colPins[COLS]={3,4,5,6};
int
pitch[]={0,NOTE_C4,NOTE_D4,NOTE_E4,NOTE_F4,NOTE_G4,NOTE_A4,NOTE_B4,
NOTE_C5,NOTE_D5,NOTE_E5,NOTE_F5,NOTE_G5,NOTE_A5,NOTE_B5};

char *morse[]={
  "01","1000","1010","100",
  "0","0010","110","0000",
  "00","0111","101","0100",
  "11","10","111","0110",
  "1101","010","000","1",
  "001","0001","011","1001",
  "1011","1100"};

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS,
COLS);

void setup() {
 pinMode(Buzzer,OUTPUT);
 Serial.begin(9600);
}
void loop() {
 if (Serial.available()){
   chr = Serial.read();
   Serial.print(chr);
   if((chr-'A')>=0 && (chr-'Z')<=0){
     index=chr-'A';
     ptr=morse[index];
    while(*ptr!='\0'){
      if(*ptr=='0'){
        tone(Buzzer,440,100);
        delay(100);
      }
      else {
        tone(Buzzer,440,300);
        delay(300);
      }  
      ptr++;
      delay(100);
    }
    delay(300);
 }
 }
}
