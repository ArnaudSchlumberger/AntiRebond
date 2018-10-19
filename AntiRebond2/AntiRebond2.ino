bool etat = false, dernierEtat = false;
unsigned long temps, tempsRebnd = 10;

void setup() {
  pinMode(13, OUTPUT);
  pinMode(A0, INPUT);
  temps = millis() - tempsRebond;
}

}

void loop() {
  dernierEtat = etat;
  etat = digitalRead(A0);
  if (!dernierEtat && etat && millis - temps >= tempsRebond) {
    digitalWrite(13, !digitalRead(13));
  }

}
