int in1 = 6;
int in2 = 5;
int in3 = 3;
int in4 = 2;

int led1 = A1;
int led2 = A2;
int led3 = A3;
int led4 = A4;
int led5 = A5;

const int trigPin = 9; // Trigger Pin of Ultrasonic Sensor
const int echoPin = 8; // Echo Pin of Ultrasonic Sensor
int buzzerPin = 1;

int range0 = 10;
int range1 = 25;
int range2 = 50;
int range3 = 75;
int range4 = 100;
int range5 = 125;

long duration, distance;

void setup(){
 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT);
 pinMode(led2, OUTPUT);
 pinMode(led3, OUTPUT);
 pinMode(led4, OUTPUT);
 pinMode(buzzerPin, OUTPUT);
 pinMode(in1, OUTPUT);
 pinMode(in2, OUTPUT);
 pinMode(in3, OUTPUT);
 pinMode(in4, OUTPUT);

}

void loop() {
    digitalWrite(trigPin, LOW);
   delayMicroseconds(2);
   digitalWrite(trigPin, HIGH);
   delayMicroseconds(10);
   digitalWrite(trigPin, LOW);
   duration = pulseIn(echoPin, HIGH);
   distance = duration /29 /2;
  
  if(distance <= range5 && distance >= range4){
    digitalWrite(led1, HIGH);    
    tone(buzzerPin, 100,20);
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
    delay(50);
  }
  else if(distance <= range4 && distance >= range3){
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    tone(buzzerPin, 250,20);
 	  digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
 	delay(50);
  }
  else if(distance <= range3 && distance >= range2){
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH);
    tone(buzzerPin, 500,20);
 	  digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
 	delay(50);
  }
  else if(distance <= range2 && distance >= range1){
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, HIGH);
    tone(buzzerPin, 750,20);
 	  digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
 	delay(50);
  }
  else if(distance <= range1 && distance >= range0){
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, HIGH);
    tone(buzzerPin, 1000,20);
 	  digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
 	delay(50);
  }
  else if(distance <= range0){
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
  }
  else{
    digitalWrite(led1, LOW);    
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
 	   digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
 	delay(50);
}
}
