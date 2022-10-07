// the setup routine runs once when you press reset:
int AnalogSensorPin = A0;

void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode(AnalogSensorPin, INPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int integer_value = analogRead(AnalogSensorPin);
  float actual_voltage_value = (float)integer_value*(5.0/(1024-1));

  
  // print out the value you read:
  Serial.print(" Analog Integer Value = ");
  Serial.print(integer_value);
  Serial.print(",  Actual Voltage Value = ");
  Serial.print(actual_voltage_value);
  Serial.println();
  delay(1);        // delay in between reads for stability
}
