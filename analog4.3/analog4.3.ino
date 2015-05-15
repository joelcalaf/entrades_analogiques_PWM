const int xiulet = 9; // donar nom al pin 9 de l’Arduino
const int pot0 = A0; // donar nom al pin A0 de l’Arduino
const int pot1 = A1; // donar nom al pin A1 de l’Arduino

int valPot0; // guardar valor del potènciometre
int valPot1;

void setup()
{
  pinMode(xiulet, OUTPUT); // definir el pin 9 com una sortida
}

void loop()
{
  valPot0 = analogRead(pot0); // llegir valor potenciòmetre
  valPot1 = analogRead(pot1);
  
  tone(xiulet, valPot1, valPot0); // xiulet de durada valPot0
  delay(2*valPot0); // esperar valPot0 del xiulet + valPot0 silenci
}
