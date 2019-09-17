void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{int i;

 for(i=10;i<=13;i++)
{
   if(i!=13)
  {
    digitalWrite(i, HIGH);
  digitalWrite(i+1, HIGH);
  delay(1000);
 digitalWrite(i, LOW);
  digitalWrite(i+1, LOW);
  }

 else
 { digitalWrite(i,HIGH);
    digitalWrite(i-3,HIGH);
    delay(1000);
digitalWrite(i, LOW);
  digitalWrite(i-3, LOW);
 }
  
}
}

