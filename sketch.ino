#define TRIG 5
#define ECHO 18
#define IR_SENSOR 19
#define CAP_SENSOR 34
#define SOLENOID 23

long duration;
float distance;

void setup() {
  Serial.begin(115200);

  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  pinMode(IR_SENSOR, INPUT_PULLUP);
  pinMode(SOLENOID, OUTPUT);

  digitalWrite(SOLENOID, LOW);
}

float readUltrasonic() {
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);

  duration = pulseIn(ECHO, HIGH);
  distance = duration * 0.034 / 2;

  return distance;
}

void loop() {

  float ultrasonicValue = readUltrasonic();
  int irValue = digitalRead(IR_SENSOR);
  int capValue = analogRead(CAP_SENSOR);

  Serial.print("Ultrasonic: ");
  Serial.print(ultrasonicValue);
  Serial.print(" | IR: ");
  Serial.print(irValue);
  Serial.print(" | Capacitive: ");
  Serial.println(capValue);

  // 🔴 Bubble Detection Logic
  bool bubbleDetected = false;

  if (ultrasonicValue < 10) {   // simulate micro bubble
    bubbleDetected = true;
  }

  if (irValue == LOW) {         // simulate large bubble
    bubbleDetected = true;
  }

  if (capValue > 2000) {        // simulate opaque fluid bubble
    bubbleDetected = true;
  }

  // 🟢 Control Solenoid
  if (bubbleDetected) {
    Serial.println("⚠ Air Bubble Detected!");
    digitalWrite(SOLENOID, HIGH); // open valve
    delay(3000);                  // removal time
    digitalWrite(SOLENOID, LOW);
    Serial.println("✅ Bubble Removed");
  } else {
    Serial.println("✔ Normal Flow");
  }

  delay(1000);
}