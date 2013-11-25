boolean encendido =false;
int led1=2;
int led2=4; //con esto se inician las variables que se usan en los puertos//

void setup()
{
    pinMode(led1,OUTPUT);
    pinMode(led2,OUTPUT);
    
}

void loop()
{
   encendido = !encendido;
   if (encendido)
   {
       digitalWrite(led1, HIGH);
       digitalWrite(led2, LOW);
   }
   else
    {
       digitalWrite(led1, LOW);
       digitalWrite(led2, HIGH);
    }
        delay(500);
}

    
