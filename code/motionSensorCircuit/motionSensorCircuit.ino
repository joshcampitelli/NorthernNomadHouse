const int trigPin = 5; 
const int echoPin = 4; 
long duration; 
int distance;

void setup() { 
 pinMode(trigPin, OUTPUT); 
 pinMode(echoPin, INPUT);
 pinMode(0, OUTPUT);
 Serial.begin(115200); 
}

void loop() { 
 digitalWrite(trigPin, LOW); 
 delayMicroseconds(2); 
 digitalWrite(trigPin, HIGH); 
 delayMicroseconds(10); 
 digitalWrite(trigPin, LOW);
  
 //Read in data from the sensor
 duration = pulseIn(echoPin, HIGH); 
 
 //Distance is CM
 distance = duration * 0.034 / 2;

 //Display the distance in the output terminal
 Serial.println(distance);

 //Checking if the sensor detected motion within a certain distance
 if (distance < 35) {
    digitalWrite(0, HIGH);
    delay(5000);
  } else {
    digitalWrite(0, LOW);
    delay(500);
  }
} 
