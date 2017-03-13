 


void setup() { 
Serial.begin(9600); 

}

void loop() 
{ 
float sensorValue = 0; 
float sensorVoltage = 0; 

for(int i=1 ; i<6;i++ ) 
{ 
sensorValue = analogRead(A1); 
sensorValue = 0.7* sensorValue + 0.3* analogRead(A0); 
sensorVoltage = (sensorValue * 5) /1024; 
//Databuffer[i] = sensorVoltage ; 
}
//Serial.print("sensorVoltage = ");
//Serial.println(sensorVoltage); 
//Serial.print("sensorValue = "); 
//Serial.println(sensorValue);
//delay(3000); 

for(int i=0 ; i<5;i++ )
{
//Databuffer[i] = Databuffer[i+1];
//a+=Databuffer[i];
Serial.println(sensorVoltage); 
} 
}



