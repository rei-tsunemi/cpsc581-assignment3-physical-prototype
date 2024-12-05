#include <Servo.h>

#define trigPin 8
#define echoPin 9
#define redPin 11     // Red channel pin
#define greenPin 13    // Green channel pin
#define buzzerPin 7   // Buzzer pin (if used)

long duration;
int distance;
const int thresholdDistance = 50; // Threshold distance in cm

Servo myservo;

int calculateDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;
  return distance;
}

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(redPin, OUTPUT);     // Initialize the red pin as an output
  pinMode(greenPin, OUTPUT);   // Initialize the green pin as an output
  pinMode(buzzerPin, OUTPUT);  // Initialize the buzzer pin (if used)
  myservo.attach(4);
  Serial.begin(9600);

  // Set initial LED state to green (no object detected)
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, HIGH);
}

void loop() {
  int i;
  for (i = 15; i <= 165; i++) {
    myservo.write(i);
    delay(15);
    calculateDistance();

    if (distance < thresholdDistance) {
      digitalWrite(redPin, HIGH);     // Turn red ON
      digitalWrite(greenPin, LOW);    // Turn green OFF
      digitalWrite(buzzerPin, HIGH);  // Turn Buzzer ON (if used)
    } else {
      digitalWrite(redPin, LOW);      // Turn red OFF
      digitalWrite(greenPin, HIGH);   // Turn green ON
      digitalWrite(buzzerPin, LOW);   // Turn Buzzer OFF (if used)
    }

    Serial.print(i);
    Serial.print(",");
    Serial.print(distance);
    Serial.print(".");
  }

  for (i = 165; i >= 15; i--) {
    myservo.write(i);
    delay(15);
    calculateDistance();

    if (distance < thresholdDistance) {
      digitalWrite(redPin, HIGH);     // Turn red ON
      digitalWrite(greenPin, LOW);    // Turn green OFF
      digitalWrite(buzzerPin, HIGH);  // Turn Buzzer ON (if used)
    } else {
      digitalWrite(redPin, LOW);      // Turn red OFF
      digitalWrite(greenPin, HIGH);   // Turn green ON
      digitalWrite(buzzerPin, LOW);   // Turn Buzzer OFF (if used)
    }

    Serial.print(i);
    Serial.print(",");
    Serial.print(distance);
    Serial.print(".");
  }
}