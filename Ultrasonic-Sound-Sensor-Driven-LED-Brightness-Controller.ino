const int ledPin = 5;
const int ultrasonicTrigPin = 2;
const int ultrasonicEchoPin = 3;
const int soundSensorPin = A0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(ultrasonicTrigPin, OUTPUT);
  pinMode(ultrasonicEchoPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  long duration, distance;
  int soundLevel;
  
  digitalWrite(ultrasonicTrigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(ultrasonicTrigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(ultrasonicTrigPin, LOW);
  
  duration = pulseIn(ultrasonicEchoPin, HIGH);
  distance = (duration / 2) / 29.1;
  
  soundLevel = analogRead(soundSensorPin);
  
  int brightness = map(distance, 0, 100, 180, 0);
  brightness = constrain(brightness, 0, 255);
  
  int soundInfluence = map(soundLevel, 0, 1023, 0, 255);
  
  int finalBrightness = (brightness + soundInfluence) / 2;
  
  analogWrite(ledPin, finalBrightness);
  
  Serial.print("Distance:");
  Serial.print(distance);
  Serial.print("\tSoundLevel:");
  Serial.print(soundLevel);
  Serial.print("\tLED_Brightness:");
  Serial.println(finalBrightness);
  
  delay(500);
}
