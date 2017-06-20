/*
   Control an LED Cube via wifi
*/
int incomingByte;
int delaySpeed;

// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(9600);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop()
{

  if (Serial.available()) {
    incomingByte = Serial.read();

    if (incomingByte == '1') {
      //ADD ANIMATION 1

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
    else if (incomingByte == '2') {
      //ADD ANIMATION 2

      digitalWrite (row1, HIGH);
      delay (50);

      digitalWrite (row2, HIGH);
      delay (50);

      digitalWrite (row3, HIGH);
      delay (50);

      digitalWrite (row1, LOW);
      delay (50);

      digitalWrite (row4, HIGH);
      delay (50);

      digitalWrite (row2, LOW);
      delay (50);

      digitalWrite (row8, HIGH);
      delay (50);

      digitalWrite (row3, LOW);
      delay (50);

      digitalWrite (row12, HIGH);
      delay (50);

      digitalWrite (row4, LOW);
      delay (50);

      digitalWrite (row16, HIGH);
      delay (50);

      digitalWrite (row8, LOW);
      delay (50);

      digitalWrite (row15, HIGH);
      delay (50);

      digitalWrite (row12, LOW);
      delay (50);

      digitalWrite (row14, HIGH);
      delay (50);

      digitalWrite (row16, LOW);
      delay (50);

      digitalWrite (row13, HIGH);
      delay (50);

      digitalWrite (row15, LOW);
      delay (50);

      digitalWrite (row9, HIGH);
      delay (50);

      digitalWrite (row14, LOW);
      delay (50);

      digitalWrite (row5, HIGH);
      delay (50);

      digitalWrite (row13, LOW);
      delay (50);

      digitalWrite (row1, HIGH);
      delay (50);

      digitalWrite (row9, LOW);
      delay (50);

      digitalWrite (row2, HIGH);

      digitalWrite (row5, LOW);

    }
    else if (incomingByte == '3') {
      //ADD ANIMATION 3
      digitalWrite (row6, HIGH);
      delay (50);

      digitalWrite (row7, HIGH);
      delay (50);

      digitalWrite (row6, LOW);
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
    else if (incomingByte == '4') {
      //ADD ANIMATION 4

      delaySpeed = 5000;
      digitalWrite(13, LOW);
      delay(delaySpeed);
      digitalWrite(13, HIGH);
      delay(delaySpeed);
    }
    else {
      digitalWrite(13, LOW);
    }
  }
}
