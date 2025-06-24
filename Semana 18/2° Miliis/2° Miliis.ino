#define intervalo 1000
#define pin_botao 2
unsigned long anterior = 0;
bool estado = 0;

void setup() {
  pinMode(9, OUTPUT);
  pinMode(pin_botao, INPUT_PULLUP);
}

void loop() {
  unsigned long tempo_atual = millis();
  if ((tempo_atual - anterior) >= intervalo) {
    estado = !estado;
    digitalWrite(13, estado);
    anterior = tempo_atual;
  }
  bool botao = !digitalRead(pin_botao);
  if (botao == 1) {

  } 
}
