#include "NVP_Parser.h"

String Serialin;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

}

void loop() {
    //char str[] ="\n\#var1=red|var2=green|var3=up|var5=down|time=123443291|key=xmskwirrrr3";

Serialin=Serial.readStringUntil('\n');

//NVP.NVPparser("var1=red|var2=green|var3=up|var4=down|RPW=50|RFQ=100|time=123443291|key=left");
NVP.NVPparser(Serialin);


Serial.print("RFQ = ");
Serial.println(RFQ);
Serial.print("RPW = ");
Serial.println(RPW);

}


