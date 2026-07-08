#define RXD2 16
#define TXD2 17

void setup()
{
  Serial.begin(115200);
  Serial2.begin(9600, SERIAL_8N1, RXD2, TXD2);

  Serial.println("Commands:");
  Serial.println("B = Blue ON");
  Serial.println("b = Blue OFF");
  Serial.println("G = Green ON");
  Serial.println("g = Green OFF");
  Serial.println("A = All ON");
  Serial.println("a = All OFF");
  Serial.println("L = Blink");
}

void loop()
{
  if (Serial.available())
  {
    char ch = Serial.read();
    Serial2.write(ch);
    Serial.print("Sent: ");
    Serial.println(ch);
  }
}