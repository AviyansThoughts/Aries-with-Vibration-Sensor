// Welcome to Aviyan's Thoughts

int led = 22;
int VibrationSensor = 0;

void setup() {
Serial.begin(115200);
pinMode(led, OUTPUT);
pinMode(VibrationSensor, INPUT);
}

void loop() {
long measurement = vibration();
delay (50);
Serial.println(measurement);
if (measurement > 1500){
      digitalWrite(led, HIGH);
  }

  else {
    digitalWrite(led, LOW);
    }
}

long vibration(){
      long measurement = pulseIn (VibrationSensor, HIGH); //wait for the pin to get high and returns measurement
      return measurement;
  }
