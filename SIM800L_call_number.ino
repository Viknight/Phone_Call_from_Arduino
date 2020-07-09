#include <SoftwareSerial.h>

// Defining Arduino ports //---------- 

// for SIM card
SoftwareSerial gsm(10,11); //RX, TX

// Defining Variables //----------

int _timeout;
String _buffer;
String number = "+91"; //-> add your number


void ShowSerialData()
{
 while(gsm.available()!=0)
   Serial.write(gsm.read());
}


void setup() {
  Serial.begin(9600);
  gsm.begin(9600);
  pinMode(LDR, INPUT);
  
 _buffer.reserve(50);
  Serial.println("System Started...");
  sim.begin(9600);
  delay(1000);

}

void loop() {

    callNumber();
    delay(100000);
    
}

String _readSerial() {
  _timeout = 0;
  while  (!sim.available() && _timeout < 12000  )
  {
    delay(13);
    _timeout++;
  }
  if (sim.available()) {
    return sim.readString();
  }
}

void callNumber() {
  sim.print (F("ATD"));
  sim.print (number);
  sim.print (F(";\r\n"));
  _buffer = _readSerial();
  Serial.println(_buffer);
}
