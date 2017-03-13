const byte LED=13;
char val;

void setup()
{
Serial.begin(9600);
Serial.println("Hello,");
}

void loop(){
  if(Serial.available()){
    val = Serial.read();
    if(val=='1'){
      digitalWrite(LED, HIGH);
      Serial.print("LED ON\n");
    } else if (val=='0'){
     digitalWrite(LED, LOW);
     Serial.print("LED OFF\n");
  }
}
}

