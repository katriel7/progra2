boolean encendido =false;
int led1=13;
int led2=12; //con esto se inician las variables que se usan en los puertos//
int led3=11;
int pushButton=2;

void setup()
{
  Serial.begin(9600);
  pinMode(pushButton,INPUT);
}

void loop ()
{
  int buttonState=digitalRead(pushButton);
  Serial.println(buttonState);
  delay(1);
}  

void setup()
{
    pinMode(led1,OUTPUT);
    pinMode(led2,OUTPUT);
    pinMode(led3,OUTPUT);
    
}

void loop()
{
   encendido = !encendido;
   if (encendido)
   {
       digitalWrite(led1, HIGH);
       digitalWrite(led2, LOW);
       digitalWrite(led3, HIGH);
   }
   else
    {
       digitalWrite(led1, LOW);
       digitalWrite(led2, HIGH);
       digitalWrite(led3, LOW);
    }
        delay(800);
}

    
