// declaring pins for each of the four floors
int emitter1 = A5;
int emitter2 = A4;
int emitter3 = A3;
int emitter4 = A2;

// declaring pins for each of the sixteen rows
int row1 = 0;
int row2 = 1;
int row3 = 2;
int row4 = 3;
int row5 = 4;
int row6 = 5;
int row7 = 6;
int row8 = 7;
int row9 = 8;
int row10 = 9;
int row11 = 10;
int row12 = 11;
int row13 = 12;
int row14 = 13;
int row15 = A0;
int row16 = A1;

//vortex set-up
boolean c1row1ON, c1row2ON, c1row3ON,c1row4ON, c1row5ON, c1row8ON, c1row9ON, c1row12ON, c1row13ON, c1row14ON, c1row15ON, c1row16ON;
boolean c2row1ON, c2row2ON, c2row3ON,c2row4ON, c2row5ON, c2row8ON, c2row9ON, c2row12ON, c2row13ON, c2row14ON, c2row15ON, c2row16ON;
boolean c3row1ON, c3row2ON, c3row3ON,c3row4ON, c3row5ON, c3row8ON, c3row9ON, c3row12ON, c3row13ON, c3row14ON, c3row15ON, c3row16ON;
boolean c4row1ON, c4row2ON, c4row3ON,c4row4ON, c4row5ON, c4row8ON, c4row9ON, c4row12ON, c4row13ON, c4row14ON, c4row15ON, c4row16ON; 

void setup() {

  // declaring each pin above as an output

  pinMode (emitter1, OUTPUT);
  pinMode (emitter2, OUTPUT);
  pinMode (emitter3, OUTPUT);
  pinMode (emitter4, OUTPUT);

  pinMode (row1, OUTPUT);
  pinMode (row2, OUTPUT);
  pinMode (row3, OUTPUT);
  pinMode (row4, OUTPUT);
  pinMode (row5, OUTPUT);
  pinMode (row6, OUTPUT);
  pinMode (row7, OUTPUT);
  pinMode (row8, OUTPUT);
  pinMode (row9, OUTPUT);
  pinMode (row10, OUTPUT);
  pinMode (row11, OUTPUT);
  pinMode (row12, OUTPUT);
  pinMode (row13, OUTPUT);
  pinMode (row14, OUTPUT);
  pinMode (row15, OUTPUT);
  pinMode (row16, OUTPUT);
}

void loop() {

  // naming the functions of the animations that need to be played

  snake();  /////////////

  //tornado(); 

  //innerTornado();

  //singleLED();

  //burst();

  firework(); ////////////

  //pwm();

  //jellyfish();

  wavyLines(); ///////////

  woss(); /////////
  
  //allOn();

  cubeInOut();
}


// this function makes a snake like animation
void snake() {

  digitalWrite(emitter1, LOW);
  digitalWrite(emitter2, LOW);
  digitalWrite(emitter3, LOW);
  digitalWrite(emitter4, LOW);

  // turning each row of LED's on to create a snake pattern with a delay in between
      digitalWrite (row1, HIGH);
      delay (100);
      digitalWrite (row2, HIGH);
      delay (100);
      digitalWrite (row3, HIGH);
      delay (100);
      digitalWrite (row4, HIGH);
      delay (100);
      digitalWrite (row8, HIGH);
      delay (100);
      digitalWrite (row7, HIGH);
      delay (100);
      digitalWrite (row6, HIGH);
      delay (100);
      digitalWrite (row5, HIGH);
      delay (100);
      digitalWrite (row9, HIGH);
      delay (100);
      digitalWrite (row10, HIGH);
      delay (100);
      digitalWrite (row11, HIGH);
      delay (100);
      digitalWrite (row12, HIGH);
      delay (100);
      digitalWrite (row16, HIGH);
      delay (100);
      digitalWrite (row15, HIGH);
      delay (100);
      digitalWrite (row14, HIGH);
      delay (100);
      digitalWrite (row13, HIGH);
      delay (100);


      // turning each LED off in a snake patter with a delay in between
      digitalWrite (row1, LOW);
      delay (100);
      digitalWrite (row2, LOW);
      delay (100);
      digitalWrite (row3, LOW);
      delay (100);
      digitalWrite (row4, LOW);
      delay (100);
      digitalWrite (row8, LOW);
      delay (100);
      digitalWrite (row7, LOW);
      delay (100);
      digitalWrite (row6, LOW);
      delay (100);
      digitalWrite (row5, LOW);
      delay (100);
      digitalWrite (row9, LOW);
      delay (100);
      digitalWrite (row10, LOW);
      delay (100);
      digitalWrite (row11, LOW);
      delay (100);
      digitalWrite (row12, LOW);
      delay (100);
      digitalWrite (row16, LOW);
      delay (100);
      digitalWrite (row15, LOW);
      delay (100);
      digitalWrite (row14, LOW);
      delay (100);
      digitalWrite (row13, LOW);
      delay (100);
}
void tornado() {

  // basically two rows of LED's are always on, when one turns on another turns off.

  digitalWrite (row1, HIGH); // The first row of LED's turn on
  delay (50); // delays so each row turns on in succession

  digitalWrite (row2, HIGH); // the second row of LED's turn on
  delay (50);

  digitalWrite (row3, HIGH); // the third row of LED's turn on
  delay (50);

  digitalWrite (row1, LOW); // the first row of LED's turn off
  delay (50);

  digitalWrite (row4, HIGH); // the fourth row of LED's turn on
}
void innerTornado() {

  // a lot like the outer tornado but using the inner 4 rows of LED's, one row of LED's is always on

  digitalWrite (row6, HIGH); // first row (in the mini circle) lights
  delay (50); // delay between the first and second rows lighting up

  digitalWrite (row7, HIGH); // second row lights up
  delay (50);

  digitalWrite (row6, LOW); // first row turns off

  delay (50);

  digitalWrite (row11, HIGH);
  delay (50);

  digitalWrite (row7, LOW);
  delay (50);

  digitalWrite (row10, HIGH);
  delay (50);

  digitalWrite (row11, LOW);
  delay (50);

  digitalWrite (row10, LOW);
  delay (50);

  digitalWrite (row6, HIGH);

}

void firework() {
  int time = 100;

  digitalWrite (row1, LOW);
  digitalWrite (row2, LOW);
  digitalWrite (row3, LOW);
  digitalWrite (row4, LOW);
  digitalWrite (row5, LOW);
  digitalWrite (row6, LOW);
  digitalWrite (row7, LOW);
  digitalWrite (row8, LOW);
  digitalWrite (row9, LOW);
  digitalWrite (row10, LOW);
  digitalWrite (row11, LOW);
  digitalWrite (row12, LOW);
  digitalWrite (row13, LOW);
  digitalWrite (row14, LOW);
  digitalWrite (row15, LOW);
  digitalWrite (row16, LOW);
  
  //bottom LED
  digitalWrite (row6, HIGH);
  digitalWrite (emitter2, HIGH);
  digitalWrite (emitter3, HIGH);
  digitalWrite (emitter4, HIGH);
  digitalWrite (emitter1, LOW);
  delay(100);

  //bottom middle LED
  digitalWrite (row6, HIGH);
  digitalWrite (emitter3, HIGH);
  digitalWrite (emitter4, HIGH);
  digitalWrite (emitter1, HIGH);
  digitalWrite (emitter2, LOW);
  delay(time); 

  //top middle LED
  digitalWrite (row6, HIGH);
  digitalWrite (emitter4, HIGH);
  digitalWrite (emitter1, HIGH);
  digitalWrite (emitter2, HIGH);
  digitalWrite (emitter3, LOW);
  delay(time); 

  /*
  //top LED
  digitalWrite (row6, HIGH);
  digitalWrite (emitter1, HIGH);
  digitalWrite (emitter2, HIGH);
  digitalWrite (emitter3, HIGH);
  digitalWrite (emitter4, LOW);
  delay(time);
  */

  //DIMMING EFFECT
  for (int i = 0; i<20; i++){
    digitalWrite (emitter3, HIGH);
    digitalWrite (emitter4, HIGH);
    delay(i);
    
    digitalWrite (row1, HIGH);
    digitalWrite (row2, LOW);
    digitalWrite (row3, HIGH);
    digitalWrite (row5, LOW);
    digitalWrite (row6, HIGH);
    digitalWrite (row7, HIGH);
    digitalWrite (row9, HIGH);
    digitalWrite (row10, LOW);
    digitalWrite (row11, LOW);
    digitalWrite (emitter1, HIGH);
    digitalWrite (emitter2, HIGH);
    digitalWrite (emitter3, HIGH);
    digitalWrite (emitter4, LOW);
    
    delay(20-(i));

    digitalWrite (row1, LOW);
    digitalWrite (row2, HIGH);
    digitalWrite (row3, HIGH);
    digitalWrite (row5, HIGH);
    digitalWrite (row6, LOW);
    digitalWrite (row7, LOW);
    digitalWrite (row9, LOW);
    digitalWrite (row10, HIGH);
    digitalWrite (row11, HIGH);
    digitalWrite (emitter1, HIGH);
    digitalWrite (emitter2, HIGH);
    digitalWrite (emitter3, LOW);
    digitalWrite (emitter4, HIGH);
    
    delay(20-(i));
  }

       ///////////////////////////////////////////////////////////////////

    digitalWrite (row1, LOW);
  digitalWrite (row2, LOW);
  digitalWrite (row3, LOW);
  digitalWrite (row4, LOW);
  digitalWrite (row5, LOW);
  digitalWrite (row6, LOW);
  digitalWrite (row7, LOW);
  digitalWrite (row8, LOW);
  digitalWrite (row9, LOW);
  digitalWrite (row10, LOW);
  digitalWrite (row11, LOW);
  digitalWrite (row12, LOW);
  digitalWrite (row13, LOW);
  digitalWrite (row14, LOW);
  digitalWrite (row15, LOW);
  digitalWrite (row16, LOW);
  
  //bottom LED
  digitalWrite (row16, HIGH);
  digitalWrite (emitter2, HIGH);
  digitalWrite (emitter3, HIGH);
  digitalWrite (emitter4, HIGH);
  digitalWrite (emitter1, LOW);
  delay(100);

  //bottom middle LED
  digitalWrite (row16, HIGH);
  digitalWrite (emitter3, HIGH);
  digitalWrite (emitter4, HIGH);
  digitalWrite (emitter1, HIGH);
  digitalWrite (emitter2, LOW);
  delay(time); 

  //top middle LED
  digitalWrite (row16, HIGH);
  digitalWrite (emitter4, HIGH);
  digitalWrite (emitter1, HIGH);
  digitalWrite (emitter2, HIGH);
  digitalWrite (emitter3, LOW);
  delay(time); 

  /*
  //top LED
  digitalWrite (row16, HIGH);
  digitalWrite (emitter1, HIGH);
  digitalWrite (emitter2, HIGH);
  digitalWrite (emitter3, HIGH);
  digitalWrite (emitter4, LOW);
  delay(time);
  */

  //DIMMING EFFECT
  for (int i = 0; i<30; i++){
    digitalWrite (emitter3, HIGH);
    digitalWrite (emitter4, HIGH);   
    delay(i);
    
    digitalWrite (row11, HIGH);
    digitalWrite (row12, HIGH);
    digitalWrite (row15, HIGH);
    digitalWrite (row16, HIGH);
    digitalWrite (emitter1, HIGH);
    digitalWrite (emitter2, HIGH);
    digitalWrite (emitter3, LOW);
    digitalWrite (emitter4, LOW);
    delay(30-(i));
  }
     

}

void pwm(){
  /*
  int time = 100;
  
  //bottom LED on
  digitalWrite (row6, HIGH);
  digitalWrite (emitter2, HIGH);
  digitalWrite (emitter3, HIGH);
  digitalWrite (emitter4, HIGH);
  digitalWrite (emitter1, LOW);
  
  delay(time);

  //bottom LED off
  digitalWrite (emitter1, HIGH);
  delay(time);
  */


  /*
 Fade
 
 This example shows how to fade an LED on pin 9
 using the analogWrite() function.
 
 This example code is in the public domain.
 */

  // set the brightness of whatever pin is selected:

  for (int i = 0; i<30; i++){
    //digitalWrite(led, LOW);    
    delay(i);
    //digitalWrite(led, HIGH);
    delay(30-(i));
  }                      
}

void jellyfish(){
  //top cubed 4
  
  digitalWrite(row6,HIGH);
  digitalWrite(row7,HIGH);
  digitalWrite(row10,HIGH);
  digitalWrite(row11,HIGH);
  digitalWrite(emitter1,HIGH);
  digitalWrite(emitter2,HIGH);
  

  digitalWrite(row1,HIGH);
  digitalWrite(row4,HIGH);
  digitalWrite(row13,HIGH);
  digitalWrite(row16,HIGH);
  digitalWrite(emitter1,HIGH);

  
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void wavyLines(){
int timeDelay = 30;

for(int i =0; i<12; i++){
  if (i==0){
    for(int j = 0; j< timeDelay; j++){

    c1row15ON = LOW;
    c1row14ON = LOW;
    c1row13ON = LOW;
    c1row9ON = LOW;
    c1row1ON = HIGH;
    c1row5ON = HIGH;
    c1row2ON = LOW;
    c1row3ON = LOW;
    c1row4ON = LOW;
    c1row16ON = HIGH;
    c1row8ON = LOW;
    c1row12ON = HIGH;
    
    digitalWrite(row1,c1row1ON);
    digitalWrite(row2,c1row2ON);
    digitalWrite(row3,c1row3ON);
    digitalWrite(row4,c1row4ON);
    digitalWrite(row5,c1row5ON);
    digitalWrite(row8,c1row8ON);
    digitalWrite(row9,c1row9ON);
    digitalWrite(row12,c1row12ON);
    digitalWrite(row13,c1row13ON);
    digitalWrite(row14,c1row14ON);
    digitalWrite(row15,c1row15ON);
    digitalWrite(row16,c1row16ON);

    digitalWrite(emitter1,LOW);
    digitalWrite(emitter2,HIGH);
    digitalWrite(emitter3,HIGH);
    digitalWrite(emitter4,HIGH);
    delay(1);

    c2row15ON = LOW;
    c2row14ON = LOW;
    c2row13ON = LOW;
    c2row9ON = HIGH;
    c2row1ON = LOW;
    c2row5ON = LOW;
    c2row2ON = LOW;
    c2row3ON = LOW;
    c2row4ON = LOW;
    c2row16ON = LOW;
    c2row8ON = HIGH;
    c2row12ON = LOW;

  digitalWrite(row1,c2row1ON);
    digitalWrite(row2,c2row2ON);
    digitalWrite(row3,c2row3ON);
    digitalWrite(row4,c2row4ON);
    digitalWrite(row5,c2row5ON);
    digitalWrite(row8,c2row8ON);
    digitalWrite(row9,c2row9ON);
    digitalWrite(row12,c2row12ON);
    digitalWrite(row13,c2row13ON);
    digitalWrite(row14,c2row14ON);
    digitalWrite(row15,c2row15ON);
    digitalWrite(row16,c2row16ON);
  
  digitalWrite(emitter1,HIGH);
  digitalWrite(emitter2,LOW);
  digitalWrite(emitter3,HIGH);
  digitalWrite(emitter4,HIGH);
  delay(1);

    c3row15ON = LOW;
    c3row14ON = LOW;
    c3row13ON = HIGH;
    c3row9ON = LOW;
    c3row1ON = LOW;
    c3row5ON = LOW;
    c3row2ON = LOW;
    c3row3ON = LOW;
    c3row4ON = HIGH;
    c3row16ON = LOW;
    c3row8ON = LOW;
    c3row12ON = LOW;
    
  digitalWrite(row1,c3row1ON);
    digitalWrite(row2,c3row2ON);
    digitalWrite(row3,c3row3ON);
    digitalWrite(row4,c3row4ON);
    digitalWrite(row5,c3row5ON);
    digitalWrite(row8,c3row8ON);
    digitalWrite(row9,c3row9ON);
    digitalWrite(row12,c3row12ON);
    digitalWrite(row13,c3row13ON);
    digitalWrite(row14,c3row14ON);
    digitalWrite(row15,c3row15ON);
    digitalWrite(row16,c3row16ON);
  
  digitalWrite(emitter1,HIGH);
  digitalWrite(emitter2,HIGH);
  digitalWrite(emitter3,LOW);
  digitalWrite(emitter4,HIGH);
  delay(1);

    c4row15ON = LOW;
    c4row14ON = HIGH;
    c4row13ON = HIGH;
    c4row9ON = LOW;
    c4row1ON = LOW;
    c4row5ON = LOW;
    c4row2ON = LOW;
    c4row3ON = HIGH;
    c4row4ON = HIGH;
    c4row16ON = LOW;
    c4row8ON = LOW;
    c4row12ON = LOW;  

  digitalWrite(row1,c4row1ON);
    digitalWrite(row2,c4row2ON);
    digitalWrite(row3,c4row3ON);
    digitalWrite(row4,c4row4ON);
    digitalWrite(row5,c4row5ON);
    digitalWrite(row8,c4row8ON);
    digitalWrite(row9,c4row9ON);
    digitalWrite(row12,c4row12ON);
    digitalWrite(row13,c4row13ON);
    digitalWrite(row14,c4row14ON);
    digitalWrite(row15,c4row15ON);
    digitalWrite(row16,c4row16ON);
  
  digitalWrite(emitter1,HIGH);
  digitalWrite(emitter2,HIGH);
  digitalWrite(emitter3,HIGH);
  digitalWrite(emitter4,LOW);
  delay(1);
  }
  }

  else{
    boolean OLDc1row3ON = c1row3ON;
    boolean OLDc1row2ON = c1row2ON;
    boolean OLDc1row1ON = c1row1ON;

      if (c1row3ON == HIGH){
        c1row3ON = LOW;
        c1row2ON = HIGH;
      }
      if (c1row4ON == HIGH){
        c1row4ON = LOW;
        c1row3ON = HIGH;
      }
      if (c1row8ON == HIGH){
        c1row8ON = LOW;
        c1row4ON = HIGH;
      }
      if (c1row12ON == HIGH){
        c1row12ON = LOW;
        c1row8ON = HIGH;
      }
      if (c1row16ON == HIGH){
        c1row16ON = LOW;
        c1row12ON = HIGH;
      }
      if (c1row15ON == HIGH){
        c1row15ON = LOW;
        c1row16ON = HIGH;
      }
      if (c1row14ON == HIGH){
        c1row14ON = LOW;
        c1row15ON = HIGH;
      }
      if (c1row13ON == HIGH){
        c1row13ON = LOW;
        c1row14ON = HIGH;
      }
      if (c1row9ON == HIGH){
        c1row9ON = LOW;
        c1row13ON = HIGH;
      }
      if (c1row5ON == HIGH){
        c1row5ON = LOW;
        c1row9ON = HIGH;
      }
      if (c1row1ON == HIGH){
        c1row1ON = LOW;
        c1row5ON = HIGH;
      }

      if (OLDc1row2ON == HIGH){
          c1row1ON = HIGH;
          if (OLDc1row3ON == LOW){
            c1row2ON = LOW;
          }
      }

      boolean OLDc2row3ON = c2row3ON;
    boolean OLDc2row2ON = c2row2ON;
    boolean OLDc2row1ON = c2row1ON;

      if (c2row3ON == HIGH){
        c2row3ON = LOW;
        c2row2ON = HIGH;
      }
      if (c2row4ON == HIGH){
        c2row4ON = LOW;
        c2row3ON = HIGH;
      }
      if (c2row8ON == HIGH){
        c2row8ON = LOW;
        c2row4ON = HIGH;
      }
      if (c2row12ON == HIGH){
        c2row12ON = LOW;
        c2row8ON = HIGH;
      }
      if (c2row16ON == HIGH){
        c2row16ON = LOW;
        c2row12ON = HIGH;
      }
      if (c2row15ON == HIGH){
        c2row15ON = LOW;
        c2row16ON = HIGH;
      }
      if (c2row14ON == HIGH){
        c2row14ON = LOW;
        c2row15ON = HIGH;
      }
      if (c2row13ON == HIGH){
        c2row13ON = LOW;
        c2row14ON = HIGH;
      }
      if (c2row9ON == HIGH){
        c2row9ON = LOW;
        c2row13ON = HIGH;
      }
      if (c2row5ON == HIGH){
        c2row5ON = LOW;
        c2row9ON = HIGH;
      }
      if (c2row1ON == HIGH){
        c2row1ON = LOW;
        c2row5ON = HIGH;
      }

      if (OLDc2row2ON == HIGH){
          c2row1ON = HIGH;
          if (OLDc2row3ON == LOW){
            c2row2ON = LOW;
          }
      }      


      boolean OLDc3row3ON = c3row3ON;
    boolean OLDc3row2ON = c3row2ON;
    boolean OLDc3row1ON = c3row1ON;

      if (c3row3ON == HIGH){
        c3row3ON = LOW;
        c3row2ON = HIGH;
      }
      if (c3row4ON == HIGH){
        c3row4ON = LOW;
        c3row3ON = HIGH;
      }
      if (c3row8ON == HIGH){
        c3row8ON = LOW;
        c3row4ON = HIGH;
      }
      if (c3row12ON == HIGH){
        c3row12ON = LOW;
        c3row8ON = HIGH;
      }
      if (c3row16ON == HIGH){
        c3row16ON = LOW;
        c3row12ON = HIGH;
      }
      if (c3row15ON == HIGH){
        c3row15ON = LOW;
        c3row16ON = HIGH;
      }
      if (c3row14ON == HIGH){
        c3row14ON = LOW;
        c3row15ON = HIGH;
      }
      if (c3row13ON == HIGH){
        c3row13ON = LOW;
        c3row14ON = HIGH;
      }
      if (c3row9ON == HIGH){
        c3row9ON = LOW;
        c3row13ON = HIGH;
      }
      if (c3row5ON == HIGH){
        c3row5ON = LOW;
        c3row9ON = HIGH;
      }
      if (c3row1ON == HIGH){
        c3row1ON = LOW;
        c3row5ON = HIGH;
      }
      
      if (OLDc3row2ON == HIGH){
          c3row1ON = HIGH;
          if (OLDc3row3ON == LOW){
            c3row2ON = LOW;
          }
      }

      boolean OLDc4row3ON = c4row3ON;
    boolean OLDc4row2ON = c4row2ON;
    boolean OLDc4row1ON = c4row1ON;

      if (c4row3ON == HIGH){
        c4row3ON = LOW;
        c4row2ON = HIGH;
      }
      if (c4row4ON == HIGH){
        c4row4ON = LOW;
        c4row3ON = HIGH;
      }
      if (c4row8ON == HIGH){
        c4row8ON = LOW;
        c4row4ON = HIGH;
      }
      if (c4row12ON == HIGH){
        c4row12ON = LOW;
        c4row8ON = HIGH;
      }
      if (c4row16ON == HIGH){
        c4row16ON = LOW;
        c4row12ON = HIGH;
      }
      if (c4row15ON == HIGH){
        c4row15ON = LOW;
        c4row16ON = HIGH;
      }
      if (c4row14ON == HIGH){
        c4row14ON = LOW;
        c4row15ON = HIGH;
      }
      if (c4row13ON == HIGH){
        c4row13ON = LOW;
        c4row14ON = HIGH;
      }
      if (c4row9ON == HIGH){
        c4row9ON = LOW;
        c4row13ON = HIGH;
      }
      if (c4row5ON == HIGH){
        c4row5ON = LOW;
        c4row9ON = HIGH;
      }
      if (c4row1ON == HIGH){
        c4row1ON = LOW;
        c4row5ON = HIGH;
      }
      
      if (OLDc4row2ON == HIGH){
          c4row1ON = HIGH;
          if (OLDc4row3ON == LOW){
            c4row2ON = LOW;
          }
      }

      /////////////////////////////////////////////////////////////////////////////////
      
      
    for(int j = 0; j< timeDelay; j++){
    
    digitalWrite(row1,c1row1ON);
    digitalWrite(row2,c1row2ON);
    digitalWrite(row3,c1row3ON);
    digitalWrite(row4,c1row4ON);
    digitalWrite(row5,c1row5ON);
    digitalWrite(row8,c1row8ON);
    digitalWrite(row9,c1row9ON);
    digitalWrite(row12,c1row12ON);
    digitalWrite(row13,c1row13ON);
    digitalWrite(row14,c1row14ON);
    digitalWrite(row15,c1row15ON);
    digitalWrite(row16,c1row16ON);

    digitalWrite(emitter1,LOW);
    digitalWrite(emitter2,HIGH);
    digitalWrite(emitter3,HIGH);
    digitalWrite(emitter4,HIGH);
    delay(1);

  digitalWrite(row1,c2row1ON);
    digitalWrite(row2,c2row2ON);
    digitalWrite(row3,c2row3ON);
    digitalWrite(row4,c2row4ON);
    digitalWrite(row5,c2row5ON);
    digitalWrite(row8,c2row8ON);
    digitalWrite(row9,c2row9ON);
    digitalWrite(row12,c2row12ON);
    digitalWrite(row13,c2row13ON);
    digitalWrite(row14,c2row14ON);
    digitalWrite(row15,c2row15ON);
    digitalWrite(row16,c2row16ON);
  
  digitalWrite(emitter1,HIGH);
  digitalWrite(emitter2,LOW);
  digitalWrite(emitter3,HIGH);
  digitalWrite(emitter4,HIGH);
  delay(1);
    
  digitalWrite(row1,c3row1ON);
    digitalWrite(row2,c3row2ON);
    digitalWrite(row3,c3row3ON);
    digitalWrite(row4,c3row4ON);
    digitalWrite(row5,c3row5ON);
    digitalWrite(row8,c3row8ON);
    digitalWrite(row9,c3row9ON);
    digitalWrite(row12,c3row12ON);
    digitalWrite(row13,c3row13ON);
    digitalWrite(row14,c3row14ON);
    digitalWrite(row15,c3row15ON);
    digitalWrite(row16,c3row16ON);
  
  digitalWrite(emitter1,HIGH);
  digitalWrite(emitter2,HIGH);
  digitalWrite(emitter3,LOW);
  digitalWrite(emitter4,HIGH);
  delay(1);
  
  digitalWrite(row1,c4row1ON);
    digitalWrite(row2,c4row2ON);
    digitalWrite(row3,c4row3ON);
    digitalWrite(row4,c4row4ON);
    digitalWrite(row5,c4row5ON);
    digitalWrite(row8,c4row8ON);
    digitalWrite(row9,c4row9ON);
    digitalWrite(row12,c4row12ON);
    digitalWrite(row13,c4row13ON);
    digitalWrite(row14,c4row14ON);
    digitalWrite(row15,c4row15ON);
    digitalWrite(row16,c4row16ON);
  
  digitalWrite(emitter1,HIGH);
  digitalWrite(emitter2,HIGH);
  digitalWrite(emitter3,HIGH);
  digitalWrite(emitter4,LOW);
  delay(1);
    }
  }
}
}

void woss(){
  int timeDelay = 75;
  
  //W

  for (int i = 0; i<timeDelay; i++){
  digitalWrite(row1, LOW);
  digitalWrite(row2, LOW);
  digitalWrite(row3, LOW);
  digitalWrite(row4, LOW);
  digitalWrite(row5, LOW);
  digitalWrite(row6, LOW);
  digitalWrite(row7, LOW);
  digitalWrite(row8, LOW);
  digitalWrite(row9, LOW);
  digitalWrite(row10, LOW);
  digitalWrite(row11, LOW);
  digitalWrite(row12, LOW);
  digitalWrite(row13, LOW);
  digitalWrite(row14, LOW);
  digitalWrite(row15, LOW);
  digitalWrite(row16, LOW);
  
  digitalWrite(row13, HIGH);
  digitalWrite(row16, HIGH);
  digitalWrite(row14, LOW);
  digitalWrite(row15, LOW);  
  digitalWrite(emitter1,HIGH);
  digitalWrite(emitter2,LOW);
  digitalWrite(emitter3,LOW);
  digitalWrite(emitter4,LOW);
  delay(1);

  digitalWrite(row14, HIGH);
  digitalWrite(row15, HIGH);
  digitalWrite(row13, LOW);
  digitalWrite(row16, LOW);
  digitalWrite(emitter1,LOW);
  digitalWrite(emitter2,LOW);
  digitalWrite(emitter3,HIGH);
  digitalWrite(emitter4,HIGH);
  delay(1);      
  }

  digitalWrite(row1, LOW);
  digitalWrite(row2, LOW);
  digitalWrite(row3, LOW);
  digitalWrite(row4, LOW);
  digitalWrite(row5, LOW);
  digitalWrite(row6, LOW);
  digitalWrite(row7, LOW);
  digitalWrite(row8, LOW);
  digitalWrite(row9, LOW);
  digitalWrite(row10, LOW);
  digitalWrite(row11, LOW);
  digitalWrite(row12, LOW);
  digitalWrite(row13, LOW);
  digitalWrite(row14, LOW);
  digitalWrite(row15, LOW);
  digitalWrite(row16, LOW);

  for (int i = 0; i<timeDelay; i++){
  digitalWrite(row9, HIGH);
  digitalWrite(row12, HIGH);
  digitalWrite(row10, LOW);
  digitalWrite(row11, LOW);  
  digitalWrite(emitter1,HIGH);
  digitalWrite(emitter2,LOW);
  digitalWrite(emitter3,LOW);
  digitalWrite(emitter4,LOW);
  delay(1);

  digitalWrite(row10, HIGH);
  digitalWrite(row11, HIGH);
  digitalWrite(row9, LOW);
  digitalWrite(row12, LOW);
  digitalWrite(emitter1,LOW);
  digitalWrite(emitter2,LOW);
  digitalWrite(emitter3,HIGH);
  digitalWrite(emitter4,HIGH);
  delay(1);      
  }

  digitalWrite(row1, LOW);
  digitalWrite(row2, LOW);
  digitalWrite(row3, LOW);
  digitalWrite(row4, LOW);
  digitalWrite(row5, LOW);
  digitalWrite(row6, LOW);
  digitalWrite(row7, LOW);
  digitalWrite(row8, LOW);
  digitalWrite(row9, LOW);
  digitalWrite(row10, LOW);
  digitalWrite(row11, LOW);
  digitalWrite(row12, LOW);
  digitalWrite(row13, LOW);
  digitalWrite(row14, LOW);
  digitalWrite(row15, LOW);
  digitalWrite(row16, LOW);

  for (int i = 0; i<timeDelay; i++){
  digitalWrite(row5, HIGH);
  digitalWrite(row8, HIGH);
  digitalWrite(row6, LOW);
  digitalWrite(row7, LOW);  
  digitalWrite(emitter1,HIGH);
  digitalWrite(emitter2,LOW);
  digitalWrite(emitter3,LOW);
  digitalWrite(emitter4,LOW);
  delay(1);

  digitalWrite(row6, HIGH);
  digitalWrite(row7, HIGH);
  digitalWrite(row5, LOW);
  digitalWrite(row8, LOW);
  digitalWrite(emitter1,LOW);
  digitalWrite(emitter2,LOW);
  digitalWrite(emitter3,HIGH);
  digitalWrite(emitter4,HIGH);
  delay(1);      
  }

  digitalWrite(row1, LOW);
  digitalWrite(row2, LOW);
  digitalWrite(row3, LOW);
  digitalWrite(row4, LOW);
  digitalWrite(row5, LOW);
  digitalWrite(row6, LOW);
  digitalWrite(row7, LOW);
  digitalWrite(row8, LOW);
  digitalWrite(row9, LOW);
  digitalWrite(row10, LOW);
  digitalWrite(row11, LOW);
  digitalWrite(row12, LOW);
  digitalWrite(row13, LOW);
  digitalWrite(row14, LOW);
  digitalWrite(row15, LOW);
  digitalWrite(row16, LOW);

  for (int i = 0; i<timeDelay; i++){
  digitalWrite(row1, HIGH);
  digitalWrite(row4, HIGH);
  digitalWrite(row2, LOW);
  digitalWrite(row3, LOW);  
  digitalWrite(emitter1,HIGH);
  digitalWrite(emitter2,LOW);
  digitalWrite(emitter3,LOW);
  digitalWrite(emitter4,LOW);
  delay(1);

  digitalWrite(row2, HIGH);
  digitalWrite(row3, HIGH);
  digitalWrite(row1, LOW);
  digitalWrite(row4, LOW);
  digitalWrite(emitter1,LOW);
  digitalWrite(emitter2,LOW);
  digitalWrite(emitter3,HIGH);
  digitalWrite(emitter4,HIGH);
  delay(1);      
  }
  

  //O

  for (int i = 0; i<timeDelay; i++){
  digitalWrite(row1, LOW);
  digitalWrite(row2, LOW);
  digitalWrite(row3, LOW);
  digitalWrite(row4, LOW);
  digitalWrite(row5, LOW);
  digitalWrite(row6, LOW);
  digitalWrite(row7, LOW);
  digitalWrite(row8, LOW);
  digitalWrite(row9, LOW);
  digitalWrite(row10, LOW);
  digitalWrite(row11, LOW);
  digitalWrite(row12, LOW);
  digitalWrite(row13, LOW);
  digitalWrite(row14, LOW);
  digitalWrite(row15, LOW);
  digitalWrite(row16, LOW);
  
  digitalWrite(row14, HIGH);
  digitalWrite(row15, HIGH);
  digitalWrite(row13, LOW);
  digitalWrite(row16, LOW); 
  digitalWrite(emitter1,HIGH);
  digitalWrite(emitter2,HIGH);
  digitalWrite(emitter3,HIGH);
  digitalWrite(emitter4,LOW);
  delay(1);

  digitalWrite(row13, HIGH);
  digitalWrite(row16, HIGH);
  digitalWrite(row14, LOW);
  digitalWrite(row15, LOW);
  digitalWrite(emitter1,HIGH);
  digitalWrite(emitter2,LOW);
  digitalWrite(emitter3,LOW);
  digitalWrite(emitter4,HIGH);
  delay(1);

  digitalWrite(row14, HIGH);
  digitalWrite(row15, HIGH);
  digitalWrite(row13, LOW);
  digitalWrite(row16, LOW); 
  digitalWrite(emitter1,LOW);
  digitalWrite(emitter2,HIGH);
  digitalWrite(emitter3,HIGH);
  digitalWrite(emitter4,HIGH);
  delay(1);  
  }

  digitalWrite(row1, LOW);
  digitalWrite(row2, LOW);
  digitalWrite(row3, LOW);
  digitalWrite(row4, LOW);
  digitalWrite(row5, LOW);
  digitalWrite(row6, LOW);
  digitalWrite(row7, LOW);
  digitalWrite(row8, LOW);
  digitalWrite(row9, LOW);
  digitalWrite(row10, LOW);
  digitalWrite(row11, LOW);
  digitalWrite(row12, LOW);
  digitalWrite(row13, LOW);
  digitalWrite(row14, LOW);
  digitalWrite(row15, LOW);
  digitalWrite(row16, LOW);

  for (int i = 0; i<timeDelay; i++){
  digitalWrite(row10, HIGH);
  digitalWrite(row11, HIGH);
  digitalWrite(row9, LOW);
  digitalWrite(row12, LOW);  
  digitalWrite(emitter1,HIGH);
  digitalWrite(emitter2,HIGH);
  digitalWrite(emitter3,HIGH);
  digitalWrite(emitter4,LOW);
  delay(1);

  digitalWrite(row9, HIGH);
  digitalWrite(row12, HIGH);
  digitalWrite(row10, LOW);
  digitalWrite(row11, LOW);  
  digitalWrite(emitter1,HIGH);
  digitalWrite(emitter2,LOW);
  digitalWrite(emitter3,LOW);
  digitalWrite(emitter4,HIGH);
  delay(1);  

  digitalWrite(row10, HIGH);
  digitalWrite(row11, HIGH);
  digitalWrite(row9, LOW);
  digitalWrite(row12, LOW);  
  digitalWrite(emitter1,LOW);
  digitalWrite(emitter2,HIGH);
  digitalWrite(emitter3,HIGH);
  digitalWrite(emitter4,HIGH);
  delay(1);
  }

  digitalWrite(row1, LOW);
  digitalWrite(row2, LOW);
  digitalWrite(row3, LOW);
  digitalWrite(row4, LOW);
  digitalWrite(row5, LOW);
  digitalWrite(row6, LOW);
  digitalWrite(row7, LOW);
  digitalWrite(row8, LOW);
  digitalWrite(row9, LOW);
  digitalWrite(row10, LOW);
  digitalWrite(row11, LOW);
  digitalWrite(row12, LOW);
  digitalWrite(row13, LOW);
  digitalWrite(row14, LOW);
  digitalWrite(row15, LOW);
  digitalWrite(row16, LOW);

  for (int i = 0; i<timeDelay; i++){
  digitalWrite(row6, HIGH);
  digitalWrite(row7, HIGH);
  digitalWrite(row5, LOW);
  digitalWrite(row8, LOW);  
  digitalWrite(emitter1,HIGH);
  digitalWrite(emitter2,HIGH);
  digitalWrite(emitter3,HIGH);
  digitalWrite(emitter4,LOW);
  delay(1);

  digitalWrite(row5, HIGH);
  digitalWrite(row8, HIGH);
  digitalWrite(row6, LOW);
  digitalWrite(row7, LOW);
  digitalWrite(emitter1,HIGH);
  digitalWrite(emitter2,LOW);
  digitalWrite(emitter3,LOW);
  digitalWrite(emitter4,HIGH);
  delay(1);

  digitalWrite(row6, HIGH);
  digitalWrite(row7, HIGH);
  digitalWrite(row5, LOW);
  digitalWrite(row8, LOW);  
  digitalWrite(emitter1,LOW);
  digitalWrite(emitter2,HIGH);
  digitalWrite(emitter3,HIGH);
  digitalWrite(emitter4,HIGH);
  delay(1);
  }

  digitalWrite(row1, LOW);
  digitalWrite(row2, LOW);
  digitalWrite(row3, LOW);
  digitalWrite(row4, LOW);
  digitalWrite(row5, LOW);
  digitalWrite(row6, LOW);
  digitalWrite(row7, LOW);
  digitalWrite(row8, LOW);
  digitalWrite(row9, LOW);
  digitalWrite(row10, LOW);
  digitalWrite(row11, LOW);
  digitalWrite(row12, LOW);
  digitalWrite(row13, LOW);
  digitalWrite(row14, LOW);
  digitalWrite(row15, LOW);
  digitalWrite(row16, LOW);

  for (int i = 0; i<timeDelay; i++){
  digitalWrite(row2, HIGH);
  digitalWrite(row3, HIGH);
  digitalWrite(row1, LOW);
  digitalWrite(row4, LOW);  
  digitalWrite(emitter1,HIGH);
  digitalWrite(emitter2,HIGH);
  digitalWrite(emitter3,HIGH);
  digitalWrite(emitter4,LOW);
  delay(1);

  digitalWrite(row1, HIGH);
  digitalWrite(row4, HIGH);
  digitalWrite(row2, LOW);
  digitalWrite(row3, LOW);
  digitalWrite(emitter1,HIGH);
  digitalWrite(emitter2,LOW);
  digitalWrite(emitter3,LOW);
  digitalWrite(emitter4,HIGH);
  delay(1);    

  digitalWrite(row2, HIGH);
  digitalWrite(row3, HIGH);
  digitalWrite(row1, LOW);
  digitalWrite(row4, LOW);  
  digitalWrite(emitter1,LOW);
  digitalWrite(emitter2,HIGH);
  digitalWrite(emitter3,HIGH);
  digitalWrite(emitter4,HIGH);
  delay(1);
  }

  //S

  for (int i = 0; i<timeDelay; i++){
  digitalWrite(row1, LOW);
  digitalWrite(row2, LOW);
  digitalWrite(row3, LOW);
  digitalWrite(row4, LOW);
  digitalWrite(row5, LOW);
  digitalWrite(row6, LOW);
  digitalWrite(row7, LOW);
  digitalWrite(row8, LOW);
  digitalWrite(row9, LOW);
  digitalWrite(row10, LOW);
  digitalWrite(row11, LOW);
  digitalWrite(row12, LOW);
  digitalWrite(row13, LOW);
  digitalWrite(row14, LOW);
  digitalWrite(row15, LOW);
  digitalWrite(row16, LOW);
  
  digitalWrite(row14, HIGH);
  digitalWrite(row15, HIGH);
  digitalWrite(row13, HIGH);
  digitalWrite(row16, HIGH); 
  digitalWrite(emitter1,HIGH);
  digitalWrite(emitter2,HIGH);
  digitalWrite(emitter3,HIGH);
  digitalWrite(emitter4,LOW);
  delay(1);

  digitalWrite(row13, LOW);
  digitalWrite(row16, HIGH);
  digitalWrite(row14, LOW);
  digitalWrite(row15, HIGH);
  digitalWrite(emitter1,HIGH);
  digitalWrite(emitter2,HIGH);
  digitalWrite(emitter3,LOW);
  digitalWrite(emitter4,HIGH);
  delay(1);

  digitalWrite(row16, LOW);
  digitalWrite(row13, HIGH);
  digitalWrite(row15, LOW);
  digitalWrite(row14, HIGH);
  digitalWrite(emitter1,HIGH);
  digitalWrite(emitter2,LOW);
  digitalWrite(emitter3,HIGH);
  digitalWrite(emitter4,HIGH);
  delay(1);

  digitalWrite(row14, HIGH);
  digitalWrite(row15, HIGH);
  digitalWrite(row13, HIGH);
  digitalWrite(row16, HIGH); 
  digitalWrite(emitter1,LOW);
  digitalWrite(emitter2,HIGH);
  digitalWrite(emitter3,HIGH);
  digitalWrite(emitter4,HIGH);
  delay(1);  
  }

  for (int i = 0; i<timeDelay; i++){
  digitalWrite(row1, LOW);
  digitalWrite(row2, LOW);
  digitalWrite(row3, LOW);
  digitalWrite(row4, LOW);
  digitalWrite(row5, LOW);
  digitalWrite(row6, LOW);
  digitalWrite(row7, LOW);
  digitalWrite(row8, LOW);
  digitalWrite(row9, LOW);
  digitalWrite(row10, LOW);
  digitalWrite(row11, LOW);
  digitalWrite(row12, LOW);
  digitalWrite(row13, LOW);
  digitalWrite(row14, LOW);
  digitalWrite(row15, LOW);
  digitalWrite(row16, LOW);
  
  digitalWrite(row10, HIGH);
  digitalWrite(row11, HIGH);
  digitalWrite(row9, HIGH);
  digitalWrite(row12, HIGH); 
  digitalWrite(emitter1,HIGH);
  digitalWrite(emitter2,HIGH);
  digitalWrite(emitter3,HIGH);
  digitalWrite(emitter4,LOW);
  delay(1);

  digitalWrite(row9, LOW);
  digitalWrite(row12, HIGH);
  digitalWrite(row10, LOW);
  digitalWrite(row11, HIGH);
  digitalWrite(emitter1,HIGH);
  digitalWrite(emitter2,HIGH);
  digitalWrite(emitter3,LOW);
  digitalWrite(emitter4,HIGH);
  delay(1);

  digitalWrite(row12, LOW);
  digitalWrite(row9, HIGH);
  digitalWrite(row11, LOW);
  digitalWrite(row10, HIGH);
  digitalWrite(emitter1,HIGH);
  digitalWrite(emitter2,LOW);
  digitalWrite(emitter3,HIGH);
  digitalWrite(emitter4,HIGH);
  delay(1);

  digitalWrite(row10, HIGH);
  digitalWrite(row11, HIGH);
  digitalWrite(row9, HIGH);
  digitalWrite(row12, HIGH); 
  digitalWrite(emitter1,LOW);
  digitalWrite(emitter2,HIGH);
  digitalWrite(emitter3,HIGH);
  digitalWrite(emitter4,HIGH);
  delay(1);  
  }

  for (int i = 0; i<timeDelay; i++){
  digitalWrite(row1, LOW);
  digitalWrite(row2, LOW);
  digitalWrite(row3, LOW);
  digitalWrite(row4, LOW);
  digitalWrite(row5, LOW);
  digitalWrite(row6, LOW);
  digitalWrite(row7, LOW);
  digitalWrite(row8, LOW);
  digitalWrite(row9, LOW);
  digitalWrite(row10, LOW);
  digitalWrite(row11, LOW);
  digitalWrite(row12, LOW);
  digitalWrite(row13, LOW);
  digitalWrite(row14, LOW);
  digitalWrite(row15, LOW);
  digitalWrite(row16, LOW);
  
  digitalWrite(row6, HIGH);
  digitalWrite(row7, HIGH);
  digitalWrite(row5, HIGH);
  digitalWrite(row8, HIGH); 
  digitalWrite(emitter1,HIGH);
  digitalWrite(emitter2,HIGH);
  digitalWrite(emitter3,HIGH);
  digitalWrite(emitter4,LOW);
  delay(1);

  digitalWrite(row5, LOW);
  digitalWrite(row8, HIGH);
  digitalWrite(row6, LOW);
  digitalWrite(row7, HIGH);
  digitalWrite(emitter1,HIGH);
  digitalWrite(emitter2,HIGH);
  digitalWrite(emitter3,LOW);
  digitalWrite(emitter4,HIGH);
  delay(1);

  digitalWrite(row8, LOW);
  digitalWrite(row5, HIGH);
  digitalWrite(row7, LOW);
  digitalWrite(row6, HIGH);
  digitalWrite(emitter1,HIGH);
  digitalWrite(emitter2,LOW);
  digitalWrite(emitter3,HIGH);
  digitalWrite(emitter4,HIGH);
  delay(1);

  digitalWrite(row6, HIGH);
  digitalWrite(row7, HIGH);
  digitalWrite(row5, HIGH);
  digitalWrite(row8, HIGH); 
  digitalWrite(emitter1,LOW);
  digitalWrite(emitter2,HIGH);
  digitalWrite(emitter3,HIGH);
  digitalWrite(emitter4,HIGH);
  delay(1);  
  }

  for (int i = 0; i<timeDelay; i++){
  digitalWrite(row1, LOW);
  digitalWrite(row2, LOW);
  digitalWrite(row3, LOW);
  digitalWrite(row4, LOW);
  digitalWrite(row5, LOW);
  digitalWrite(row6, LOW);
  digitalWrite(row7, LOW);
  digitalWrite(row8, LOW);
  digitalWrite(row9, LOW);
  digitalWrite(row10, LOW);
  digitalWrite(row11, LOW);
  digitalWrite(row12, LOW);
  digitalWrite(row13, LOW);
  digitalWrite(row14, LOW);
  digitalWrite(row15, LOW);
  digitalWrite(row16, LOW);
  
  digitalWrite(row2, HIGH);
  digitalWrite(row3, HIGH);
  digitalWrite(row1, HIGH);
  digitalWrite(row4, HIGH); 
  digitalWrite(emitter1,HIGH);
  digitalWrite(emitter2,HIGH);
  digitalWrite(emitter3,HIGH);
  digitalWrite(emitter4,LOW);
  delay(1);

  digitalWrite(row1, LOW);
  digitalWrite(row4, HIGH);
  digitalWrite(row2, LOW);
  digitalWrite(row3, HIGH);
  digitalWrite(emitter1,HIGH);
  digitalWrite(emitter2,HIGH);
  digitalWrite(emitter3,LOW);
  digitalWrite(emitter4,HIGH);
  delay(1);

  digitalWrite(row4, LOW);
  digitalWrite(row1, HIGH);
  digitalWrite(row3, LOW);
  digitalWrite(row2, HIGH);
  digitalWrite(emitter1,HIGH);
  digitalWrite(emitter2,LOW);
  digitalWrite(emitter3,HIGH);
  digitalWrite(emitter4,HIGH);
  delay(1);

  digitalWrite(row2, HIGH);
  digitalWrite(row3, HIGH);
  digitalWrite(row1, HIGH);
  digitalWrite(row4, HIGH); 
  digitalWrite(emitter1,LOW);
  digitalWrite(emitter2,HIGH);
  digitalWrite(emitter3,HIGH);
  digitalWrite(emitter4,HIGH);
  delay(1);  
  }

  //S

  for (int i = 0; i<timeDelay-4; i++){
  digitalWrite(row1, LOW);
  digitalWrite(row2, LOW);
  digitalWrite(row3, LOW);
  digitalWrite(row4, LOW);
  digitalWrite(row5, LOW);
  digitalWrite(row6, LOW);
  digitalWrite(row7, LOW);
  digitalWrite(row8, LOW);
  digitalWrite(row9, LOW);
  digitalWrite(row10, LOW);
  digitalWrite(row11, LOW);
  digitalWrite(row12, LOW);
  digitalWrite(row13, LOW);
  digitalWrite(row14, LOW);
  digitalWrite(row15, LOW);
  digitalWrite(row16, LOW);
  
  digitalWrite(row14, HIGH);
  digitalWrite(row15, HIGH);
  digitalWrite(row13, HIGH);
  digitalWrite(row16, HIGH); 
  digitalWrite(emitter1,HIGH);
  digitalWrite(emitter2,HIGH);
  digitalWrite(emitter3,HIGH);
  digitalWrite(emitter4,LOW);
  delay(1);

  digitalWrite(row13, LOW);
  digitalWrite(row16, HIGH);
  digitalWrite(row14, LOW);
  digitalWrite(row15, HIGH);
  digitalWrite(emitter1,HIGH);
  digitalWrite(emitter2,HIGH);
  digitalWrite(emitter3,LOW);
  digitalWrite(emitter4,HIGH);
  delay(1);

  digitalWrite(row16, LOW);
  digitalWrite(row13, HIGH);
  digitalWrite(row15, LOW);
  digitalWrite(row14, HIGH);
  digitalWrite(emitter1,HIGH);
  digitalWrite(emitter2,LOW);
  digitalWrite(emitter3,HIGH);
  digitalWrite(emitter4,HIGH);
  delay(1);

  digitalWrite(row14, HIGH);
  digitalWrite(row15, HIGH);
  digitalWrite(row13, HIGH);
  digitalWrite(row16, HIGH); 
  digitalWrite(emitter1,LOW);
  digitalWrite(emitter2,HIGH);
  digitalWrite(emitter3,HIGH);
  digitalWrite(emitter4,HIGH);
  delay(1);  
  }

  for (int i = 0; i<timeDelay-4; i++){
  digitalWrite(row1, LOW);
  digitalWrite(row2, LOW);
  digitalWrite(row3, LOW);
  digitalWrite(row4, LOW);
  digitalWrite(row5, LOW);
  digitalWrite(row6, LOW);
  digitalWrite(row7, LOW);
  digitalWrite(row8, LOW);
  digitalWrite(row9, LOW);
  digitalWrite(row10, LOW);
  digitalWrite(row11, LOW);
  digitalWrite(row12, LOW);
  digitalWrite(row13, LOW);
  digitalWrite(row14, LOW);
  digitalWrite(row15, LOW);
  digitalWrite(row16, LOW);
  
  digitalWrite(row10, HIGH);
  digitalWrite(row11, HIGH);
  digitalWrite(row9, HIGH);
  digitalWrite(row12, HIGH); 
  digitalWrite(emitter1,HIGH);
  digitalWrite(emitter2,HIGH);
  digitalWrite(emitter3,HIGH);
  digitalWrite(emitter4,LOW);
  delay(1);

  digitalWrite(row9, LOW);
  digitalWrite(row12, HIGH);
  digitalWrite(row10, LOW);
  digitalWrite(row11, HIGH);
  digitalWrite(emitter1,HIGH);
  digitalWrite(emitter2,HIGH);
  digitalWrite(emitter3,LOW);
  digitalWrite(emitter4,HIGH);
  delay(1);

  digitalWrite(row12, LOW);
  digitalWrite(row9, HIGH);
  digitalWrite(row11, LOW);
  digitalWrite(row10, HIGH);
  digitalWrite(emitter1,HIGH);
  digitalWrite(emitter2,LOW);
  digitalWrite(emitter3,HIGH);
  digitalWrite(emitter4,HIGH);
  delay(1);

  digitalWrite(row10, HIGH);
  digitalWrite(row11, HIGH);
  digitalWrite(row9, HIGH);
  digitalWrite(row12, HIGH); 
  digitalWrite(emitter1,LOW);
  digitalWrite(emitter2,HIGH);
  digitalWrite(emitter3,HIGH);
  digitalWrite(emitter4,HIGH);
  delay(1);  
  }

  for (int i = 0; i<timeDelay-4; i++){
  digitalWrite(row1, LOW);
  digitalWrite(row2, LOW);
  digitalWrite(row3, LOW);
  digitalWrite(row4, LOW);
  digitalWrite(row5, LOW);
  digitalWrite(row6, LOW);
  digitalWrite(row7, LOW);
  digitalWrite(row8, LOW);
  digitalWrite(row9, LOW);
  digitalWrite(row10, LOW);
  digitalWrite(row11, LOW);
  digitalWrite(row12, LOW);
  digitalWrite(row13, LOW);
  digitalWrite(row14, LOW);
  digitalWrite(row15, LOW);
  digitalWrite(row16, LOW);
  
  digitalWrite(row6, HIGH);
  digitalWrite(row7, HIGH);
  digitalWrite(row5, HIGH);
  digitalWrite(row8, HIGH); 
  digitalWrite(emitter1,HIGH);
  digitalWrite(emitter2,HIGH);
  digitalWrite(emitter3,HIGH);
  digitalWrite(emitter4,LOW);
  delay(1);

  digitalWrite(row5, LOW);
  digitalWrite(row8, HIGH);
  digitalWrite(row6, LOW);
  digitalWrite(row7, HIGH);
  digitalWrite(emitter1,HIGH);
  digitalWrite(emitter2,HIGH);
  digitalWrite(emitter3,LOW);
  digitalWrite(emitter4,HIGH);
  delay(1);

  digitalWrite(row8, LOW);
  digitalWrite(row5, HIGH);
  digitalWrite(row7, LOW);
  digitalWrite(row6, HIGH);
  digitalWrite(emitter1,HIGH);
  digitalWrite(emitter2,LOW);
  digitalWrite(emitter3,HIGH);
  digitalWrite(emitter4,HIGH);
  delay(1);

  digitalWrite(row6, HIGH);
  digitalWrite(row7, HIGH);
  digitalWrite(row5, HIGH);
  digitalWrite(row8, HIGH); 
  digitalWrite(emitter1,LOW);
  digitalWrite(emitter2,HIGH);
  digitalWrite(emitter3,HIGH);
  digitalWrite(emitter4,HIGH);
  delay(1);  
  }

  for (int i = 0; i<timeDelay-4; i++){
  digitalWrite(row1, LOW);
  digitalWrite(row2, LOW);
  digitalWrite(row3, LOW);
  digitalWrite(row4, LOW);
  digitalWrite(row5, LOW);
  digitalWrite(row6, LOW);
  digitalWrite(row7, LOW);
  digitalWrite(row8, LOW);
  digitalWrite(row9, LOW);
  digitalWrite(row10, LOW);
  digitalWrite(row11, LOW);
  digitalWrite(row12, LOW);
  digitalWrite(row13, LOW);
  digitalWrite(row14, LOW);
  digitalWrite(row15, LOW);
  digitalWrite(row16, LOW);
  
  digitalWrite(row2, HIGH);
  digitalWrite(row3, HIGH);
  digitalWrite(row1, HIGH);
  digitalWrite(row4, HIGH); 
  digitalWrite(emitter1,HIGH);
  digitalWrite(emitter2,HIGH);
  digitalWrite(emitter3,HIGH);
  digitalWrite(emitter4,LOW);
  delay(1);

  digitalWrite(row1, LOW);
  digitalWrite(row4, HIGH);
  digitalWrite(row2, LOW);
  digitalWrite(row3, HIGH);
  digitalWrite(emitter1,HIGH);
  digitalWrite(emitter2,HIGH);
  digitalWrite(emitter3,LOW);
  digitalWrite(emitter4,HIGH);
  delay(1);

  digitalWrite(row4, LOW);
  digitalWrite(row1, HIGH);
  digitalWrite(row3, LOW);
  digitalWrite(row2, HIGH);
  digitalWrite(emitter1,HIGH);
  digitalWrite(emitter2,LOW);
  digitalWrite(emitter3,HIGH);
  digitalWrite(emitter4,HIGH);
  delay(1);

  digitalWrite(row2, HIGH);
  digitalWrite(row3, HIGH);
  digitalWrite(row1, HIGH);
  digitalWrite(row4, HIGH); 
  digitalWrite(emitter1,LOW);
  digitalWrite(emitter2,HIGH);
  digitalWrite(emitter3,HIGH);
  digitalWrite(emitter4,HIGH);
  delay(1);
  }

}

void allOn(){
  digitalWrite(row1, HIGH);
  digitalWrite(row2, HIGH);
  digitalWrite(row3, HIGH);
  digitalWrite(row4, HIGH);
  digitalWrite(row5, HIGH);
  digitalWrite(row6, HIGH);
  digitalWrite(row7, HIGH);
  digitalWrite(row8, HIGH);
  digitalWrite(row9, HIGH);
  digitalWrite(row10, HIGH);
  digitalWrite(row11, HIGH);
  digitalWrite(row12, HIGH);
  digitalWrite(row13, HIGH);
  digitalWrite(row14, HIGH);
  digitalWrite(row15, HIGH);
  digitalWrite(row16, HIGH);
}

void cubeInOut(){
  
}

