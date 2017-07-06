int switchPin [] = {1, 2, 3, 4, 5, 6, 7, 8};
int timer = 200;

int numThings = 8;

void setup() {

  Serial.begin(9600);

  for (int thisPin = 0; thisPin < 8; thisPin++) {
    pinMode(switchPin[thisPin], OUTPUT);
  }
}

void loop() {

  //Print out all the states of the Switches
  Serial.print("Switch[");
  for (int thisPin = 0; thisPin < numThings; thisPin++) {
    int x = random(0, 100);
    if (x < 49) {
      digitalWrite(switchPin[thisPin], HIGH);
      Serial.print("H");
      Serial.print(", ");

    }
    else if (x >= 40) {
      digitalWrite(switchPin[thisPin], LOW);
      Serial.print("L");
      Serial.print(", ");
      delay(timer);

    }



  }

  Serial.print("]  ");
  Serial.println(" ");


}

void basicTest() {

  for (int thisPin = 0; thisPin < numThings; thisPin++) {

    digitalWrite(switchPin[thisPin], HIGH);
    Serial.print("H");
    Serial.print(", ");
    delay(timer);

  }

  Serial.print("]  ");
  Serial.println(" ");

  for (int thisPin = 0; thisPin < numThings; thisPin++) {

    digitalWrite(switchPin[thisPin], LOW);
    Serial.print("L");
    Serial.print(", ");
    delay(timer);

  }

  Serial.print("]  ");
  Serial.println(" ");




}



void randomPattern() {

  Serial.print("Switch[");
  for (int thisPin = 0; thisPin < numThings; thisPin++) {
    int x = random(0, 100);
    if (x < 49) {
      digitalWrite(switchPin[thisPin], HIGH);
      Serial.print("H");
      Serial.print(", ");

    }
    else if (x >= 40) {
      digitalWrite(switchPin[thisPin], LOW);
      Serial.print("L");
      Serial.print(", ");
      delay(timer);

    }



  }

  Serial.print("]  ");
  Serial.println(" ");
}


