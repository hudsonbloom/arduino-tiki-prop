int sensor1 = 2;
int sensor2 = 3;
int sensor3 = 4;
int sensor4 = 5;
int sensor5 = 6;

int led1 = 7;
int led2 = 8;
int led3 = 9;
int led4 = 10;
int led5 = 11;

int relay = 12;

bool isSensor1Placed = false;
bool isSensor2Placed = false;
bool isSensor3Placed = false;
bool isSensor4Placed = false;
bool isSensor5Placed = false;

bool hasCrateDropped = false;

void setup() {
  // put your setup code here, to run once:

  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);


  isSensor1Placed = false;
  isSensor2Placed = false;
  isSensor3Placed = false;
  isSensor4Placed = false;
  isSensor5Placed = false;
  
  
  hasCrateDropped = false;
  Serial.begin(9600);

}

void loop() {

  int sensor1Reading = digitalRead(sensor1);
  int sensor2Reading = digitalRead(sensor2);
  int sensor3Reading = digitalRead(sensor3);
  int sensor4Reading = digitalRead(sensor4);
  int sensor5Reading = digitalRead(sensor5);


    hasCrateDropped = false;


  if (sensor1Reading == 0 && isSensor1Placed == false){
    isSensor1Placed = true;
    digitalWrite(led1, HIGH);
    Serial.println("Sensor 1");
  }

  if (sensor1Reading == 1 && isSensor1Placed == true){
    isSensor1Placed = false;
    digitalWrite(led1, LOW);
    Serial.println("Sensor 1 OFF");
  }

  

  if (sensor2Reading == 0 && isSensor2Placed == false){
    isSensor2Placed = true;
    digitalWrite(led2, HIGH);
    Serial.println("Sensor 2");
  } 

  if (sensor2Reading == 1 && isSensor2Placed == true){
    isSensor2Placed = false;
    digitalWrite(led2, LOW);
    Serial.println("Sensor 2 OFF");
  }

  

  if (sensor3Reading == 0 && isSensor3Placed == false){
    isSensor3Placed = true;
    digitalWrite(led3, HIGH);
    Serial.println("Sensor 3");
  } 

  if (sensor3Reading == 1 && isSensor3Placed == true){
    isSensor3Placed = false;
    digitalWrite(led3, LOW);
    Serial.println("Sensor 3 OFF");
  }


  

  if (sensor4Reading == 0 && isSensor4Placed == false){
    isSensor4Placed = true;
    digitalWrite(led4, HIGH);
    Serial.println("Sensor 4");
  } 

  if (sensor4Reading == 1 && isSensor4Placed == true){
    isSensor4Placed = false;
    digitalWrite(led4, LOW);
    Serial.println("Sensor 4 OFF");
  }



  

  if (sensor5Reading == 0 && isSensor5Placed == false){
    isSensor5Placed = true;
    digitalWrite(led5, HIGH);
    Serial.println("Sensor 5");
  } 

  if (sensor5Reading == 1 && isSensor5Placed == true){
    isSensor5Placed = false;
    digitalWrite(led5, LOW);
    Serial.println("Sensor 5 OFF");
  }


  

  if (isSensor1Placed && isSensor2Placed && isSensor3Placed && isSensor4Placed && isSensor5Placed == true){
    hasCrateDropped = true;
    digitalWrite(relay, HIGH);
    Serial.println("Crate has dropped");
  } else {
    digitalWrite(relay, LOW);
  }


}

void flashLights(){
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  delay(100);
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  delay(100);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  delay(100);
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  delay(100);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  delay(100);
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  delay(100);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  delay(100);
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  delay(100);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  delay(100);
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  delay(100);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  delay(100);
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  delay(100);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  delay(100);
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);

}
