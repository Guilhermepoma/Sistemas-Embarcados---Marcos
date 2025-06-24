#define P 8  // aqui definimos os pinos de entrada
#define M1 9
#define M2 10
#define AL 11
#define pin_botao1 2
#define pin_botao2 3
#define pin_botao3 4
#define pin_botao4 5


void setup()
 // aqui ddefinimos se é de entrada ou de saida 
{
  pinMode(P, OUTPUT);
  pinMode(M1, OUTPUT);
  pinMode(M2, OUTPUT);
  pinMode(AL, OUTPUT);
  pinMode(pin_botao1, INPUT);
  pinMode(pin_botao2, INPUT);
  pinMode(pin_botao3, INPUT);
  pinMode(pin_botao4, INPUT);
  Serial.begin(9600);
}

void loop() 
// criamos variaveis
{
  bool A = digitalRead(pin_botao1);
  bool B = digitalRead(pin_botao2);
  bool C = digitalRead(pin_botao3);
  bool D = digitalRead(pin_botao4);

  Serial.println(cont);
// com base na tabela verdade cada botão apertado faz a função pedida
if (A == 0 && B == 0 && C == 0 && D == 0){
  digitalWrite(P, 0);
  digitalWrite(M1, 0);
  digitalWrite(M2, 0);
  digitalWrite(AL, 1);
  } else {
    if (A == 0 && B == 0 && C == 0 && D == 1){
    digitalWrite(P, 0);
    digitalWrite(M1, 1);
    digitalWrite(M2, 0);
    digitalWrite(AL, 1);
    } else {
      if (A == 0 && B == 0 && C == 1 && D == 0){
      digitalWrite(P, 0);
      digitalWrite(M1, 1);
      digitalWrite(M2, 0);
      digitalWrite(AL, 0);
      } else {
        if (A == 0 && B == 0 && C == 1 && D == 1){
        digitalWrite(P, 0);
        digitalWrite(M1, 1);
        digitalWrite(M2, 0);
        digitalWrite(AL, 0);
      } else {
        if (A == 0 && B == 1 && C == 0 && D == 0){
        digitalWrite(P, 1);
        digitalWrite(M1, 0);
        digitalWrite(M2, 0);
        digitalWrite(AL, 0);
      } else {
        if (A == 0 && B == 1 && C == 0 && D == 1){
        digitalWrite(P, 1);
        digitalWrite(M1, 0);
        digitalWrite(M2, 0);
        digitalWrite(AL, 0);
      } else {
        if (A == 0 && B == 1 && C == 1 && D == 1){
        digitalWrite(P, 1);
        digitalWrite(M1, 0);
        digitalWrite(M2, 0);
        digitalWrite(AL, 0);
        }else {
        if (A == 1 && B == 0 && C == 0 && D == 0){
        digitalWrite(P, 0);
        digitalWrite(M1, 1);
        digitalWrite(M2, 1);
        digitalWrite(AL, 0);
        }else {
        if (A == 1 && B == 0 && C == 0 && D == 1){
        digitalWrite(P, 0);
        digitalWrite(M1, 1);
        digitalWrite(M2, 1);
        digitalWrite(AL, 0);
        } else {
        if (A == 1 && B == 1 && C == 1 && D == 1){
        digitalWrite(P, 0);
        digitalWrite(M1, 1);
        digitalWrite(M2, 1);
        digitalWrite(AL, 0);
        }

      }
    }
      }
      }
    }
  }
}
  }
  }
}

