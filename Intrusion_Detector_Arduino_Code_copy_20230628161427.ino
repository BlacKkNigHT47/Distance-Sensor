const int trigPin = 9;
const int echoPin = 10;
const int White = 11;
const int Alarm_distance = 30;

float duration, distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(White, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = (duration*.0343)/2;
  Serial.print("Distance: ");
  Serial.println(distance);
  delay(100);

  if (distance < Alarm_distance )
    digitalWrite(White, HIGH);

  if (distance > Alarm_distance)
    digitalWrite(White, LOW);
    
}