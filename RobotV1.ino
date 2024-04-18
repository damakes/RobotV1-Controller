#include <Servo.h>

Servo panServo;   // create servo object to control pan servo
Servo tiltServo;  // create servo object to control tilt servo

int panPin = 7;   // define pin for pan servo
int tiltPin = 8 ;  // define pin for tilt servo

const int trigPin = 5; // Ultrasonic Sensor HC-SR04
const int echoPin = 4; // Ultrasonic Sensor HC-SR04
long duration; // Ultrasonic Sensor HC-SR04
int distance; // Ultrasonic Sensor HC-SR04

int panAngle = 90;   // current angle of pan servo
int tiltAngle = 90;  // current angle of tilt servo

int pinLB = 12;     // define pin 12 
int pinLF = 3;     // define pin 3 
int pinRB = 13;    // define pin 13 
int pinRF = 11;    // define pin 11 

int val;

void setup() {
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  Serial.begin(9600);     // initialize serial communication
  pinMode(pinLB,OUTPUT);  // set motor pins to output
  pinMode(pinLF,OUTPUT);
  pinMode(pinRB,OUTPUT);
  pinMode(pinRF,OUTPUT);

  panServo.attach(panPin);   // attach pan servo to the appropriate pin
  tiltServo.attach(tiltPin); // attach tilt servo to the appropriate pin
}

void advance() {
  digitalWrite(pinLB,LOW);
  digitalWrite(pinRB, LOW);
  analogWrite(pinLF,255);
  analogWrite(pinRF,255);
}

void stopp() {
  digitalWrite(pinLB,HIGH);
  digitalWrite(pinRB,HIGH);
  analogWrite(pinLF,0);
  analogWrite(pinRF,0);
}

void right() {
  digitalWrite(pinLB,HIGH);
  digitalWrite(pinRB,LOW);
  analogWrite(pinLF, 255);
  analogWrite(pinRF,255);
}

void left() {
  digitalWrite(pinLB,LOW);
  digitalWrite(pinRB,HIGH);
  analogWrite(pinLF, 255);
  analogWrite(pinRF,255);
}

void back() {
  digitalWrite(pinLB,HIGH);
  digitalWrite(pinRB,HIGH);
  analogWrite(pinLF,255);
  analogWrite(pinRF,255);
}

// Control Commands:
// -
// 	'F' : Move Forward.
// 	'B' : Move Backward.
// 	'R' : Turn Right.
// 	'L' : Turn Left.
// 	'S' : Stop Movement.
// 	'P' : Increase pan angle by 5 degrees (MAX 180 degrees).
// 	'p' : Decrease pan angle by 5 degrees (MIN 0 degrees).
// 	'T' : Increase tilt angle by 5 degrees (MAX 180 degrees).
// 	't' : Decrease tilt angle by 5 degrees (MIN 0 degrees).

void loop() {
   // Clears the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2;
  // Prints the distance on the Serial Monitor
  //Serial.print("cm:");
  Serial.println(distance);
  val = Serial.read();
  if (val == 'B') {
    advance();
  } else if (val == 'F') {
    back();
  } else if (val == 'L') {
    left();
  } else if (val == 'R') {
    right();
  } else if (val == 'S') {
    stopp();
  } else if (val == 'P') {
    // increase pan angle by 1 degree
    panAngle = min(180, panAngle + 5);
    panServo.write(panAngle);
  } else if (val == 'p') {
    // decrease pan angle by 1 degree
    panAngle = max(0, panAngle - 5);
    panServo.write(panAngle);
  } else if (val == 'T') {
    // increase tilt angle by 1 degree
    tiltAngle = min(180, tiltAngle + 5);
    tiltServo.write(tiltAngle);
  } else if (val == 't') {
    // decrease tilt angle by 1 degree
    tiltAngle = max(0, tiltAngle - 5);
    tiltServo.write(tiltAngle);
  }
}
