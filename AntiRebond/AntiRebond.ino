bool haut = false;
bool LED = false;
int lecture = 0;
int c = 0;
unsigned long T0; //temps
unsigned long T1;
float dT = 1.0;
void setup() {
  Serial.begin(115200);
  pinMode(A0, INPUT);
}

void loop() {
  lecture = digitalRead(A0);

  if (haut != true && lecture) {
    Serial.println("MONTANT");
    haut = true;
    Serial.println(c);
    LED = !LED;
  }

  if (haut == true && !lecture) {
    Serial.println("DESCENDANT");
    haut = false;
  }
  if (LED) {
    digitalWrite(13, HIGH);
  }
  else {
    digitalWrite(13, LOW);
  }
}



