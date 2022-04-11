const int ledPin = 13;

const int ldrPin = A0;
const int ldrPin_b = A1;

void setup() {

  Serial.begin(9600);

  pinMode(ledPin, OUTPUT);

  pinMode(ldrPin, INPUT);
    pinMode(ldrPin_b, INPUT);

}

void loop() {

  int ldrStatus = analogRead(ldrPin);
  int ldrStatus_b = analogRead(ldrPin_b);

  if (ldrStatus <= 70 && ldrStatus_b <= 70) {

    digitalWrite(ledPin, HIGH);

    Serial.print("Its DARK, Turn on the LED : ");

    Serial.println(ldrStatus);
    Serial.println(ldrStatus_b);
    delay(1000);

  } else {

    digitalWrite(ledPin, LOW);

    Serial.print("Its BRIGHT, Turn off the LED : ");

    Serial.println(ldrStatus);
    Serial.println(ldrStatus_b);
    delay(1000);
  }

}
