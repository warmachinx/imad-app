void setup()
{
    for (int i=0;i<14;i++)
    {
        pinMode(i,OUTPUT);    // PINS0-10 are set as output
    }
    pinMode(8,OUTPUT);    //PIN A0 set as output
    pinMode(9,OUTPUT);   // PIN A1 set as output
    pinMode(10,OUTPUT);   // PIN A2 set as output
    
    digitalWrite(8,HIGH);    //pull up the A0 pin
    digitalWrite(9,HIGH);   // pull up the A1 pin
    digitalWrite(10,HIGH);   // pull up the A2 pin

      /* add setup code here, setup code runs once when the processor starts */

}

void loop()
{
        digitalWrite(8,HIGH);    //layer 1 of cube is grounded
          for (int i=2;i<14;i++)
          {
              digitalWrite(i,HIGH);    //turn ON each LED one after another in layer1
              delay(200);
                delay(200);
                  delay(200);
            digitalWrite(i,LOW);
          }
        digitalWrite(8,LOW);    //layer1 is pulled up
          
          digitalWrite(9,HIGH);   // layer 2 of cube is grounded
          for (int i=2;i<14;i++)
          {
              digitalWrite(i,HIGH);   // turn ON each LED one after another in layer2
                            delay(200);
                            delay(200);
                            delay(200);
              digitalWrite(i,LOW);
          }
        digitalWrite(9,LOW);    // layer2 is pulled up
          
        digitalWrite(10,HIGH);    // layer 3 of cube is grounded
        for (int i=2;i<14;i++)
        {
            digitalWrite(i,HIGH);    // turn ON each LED one after another in layer3
                          delay(200);
                          delay(200);
                          delay(200);
            digitalWrite(i,LOW);
        }
        digitalWrite(10,LOW);    // layer3 is pulled up

}
