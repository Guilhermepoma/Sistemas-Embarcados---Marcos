#define intervalo 1000
unsigned long anterior = 0;
bool estado = 0;

void setup() {
  pinMode(9, OUTPUT);
}

void loop() {
  unsigned long tempo_atual = millis();
  if ((tempo_atual - anterior) >= intervalo) {
    estado = !estado;
    digitalWrite(13, estado);
    tempo_anterior = tempo_atual;
  }
}
