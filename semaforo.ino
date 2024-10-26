void setup() {
  pinMode(13, OUTPUT); //LED VERMELHO
  pinMode(12, OUTPUT); //LED AMARELO
  pinMode(11, OUTPUT); //LED VERDE
}

void loop() {
  digitalWrite(13, HIGH); //LIGA LED VERMELHO
  delay(6000); //Espera 6 segundos
  digitalWrite(13, LOW); //DESLIGA LED VERMELHO
  
  digitalWrite(12, HIGH); //LIGA LED AMARELO
  delay(2000); //Espera 2 segundos
  digitalWrite(12, LOW); //DESLIGA LED AMARELO

  digitalWrite(11, HIGH); //LIGA LED VERDE
  delay(4000); //Espera 4 segundos
  digitalWrite(11, LOW); //DESLIGA LED VERDE

  digitalWrite(12, HIGH); //LIGA LED AMARELO
  delay(2000); //Espera 2 segundos
  digitalWrite(12, LOW); //DESLIGA LED AMARELO
}
