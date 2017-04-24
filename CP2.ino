#include <Keypad.h>
#include "pitches.h"
const byte ROWS=4;
const byte COLS=4;
int duration=200;
const byte Buzzer= 2;
const int rhythm=500;
char index;
int SoundLeng;
char song_tone;
char ch;
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

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS,
COLS);

void setup() {
 pinMode(Buzzer,OUTPUT);
 Serial.begin(9600);
}
void loop() {
 char key = keypad.getKey();
 if(key!=NO_KEY){
 switch(key){
 case '0':
 tone(Buzzer,NOTE_B5,duration);
 break;
 case '1':
 tone(Buzzer,NOTE_C4,duration);
 break;
 case '2':
 tone(Buzzer,NOTE_D4,duration);
 break;
 case '3':
 tone(Buzzer,NOTE_E4,duration);
 break;
 case '4':
 tone(Buzzer,NOTE_F4,duration);
 break;
 case '5':
 tone(Buzzer,NOTE_G4,duration);
 break;
 case '6':
 tone(Buzzer,NOTE_A4,duration);
 break;
 case '7':
 tone(Buzzer,NOTE_B4,duration);
 break;
 case '8':
 tone(Buzzer,NOTE_C5,duration);
 break;
 case '9':
 tone(Buzzer,NOTE_D5,duration);
 break;
 case 'A':
 tone(Buzzer,NOTE_E5,duration);
 break;
 case 'B':
 tone(Buzzer,NOTE_F5,duration);
 break;
 case 'C':
 tone(Buzzer,NOTE_G5,duration);
 break;
 case 'D':
 tone(Buzzer,NOTE_A5,duration);
 break;
 case 'E':
 tone(Buzzer,NOTE_B5,duration);
 break;
 case 'F':
 tone(Buzzer,NOTE_B5,duration);
 break;
 }
 }
}
