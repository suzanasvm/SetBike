//Criado por Suzana Mota 2018
//Declarando variavéis dos leds e botoes
int ledDireita = 9;
int botaoDireita = 7;

int ledEsquerda = 8;
int botaoEsquerda = 6;

int estadoBotaoDireita = 0;
int estadoBotaoEsquerda = 0;

void setup()
{
  pinMode(ledDireita, OUTPUT);
  pinMode(ledEsquerda, OUTPUT);
  
  pinMode(botaoDireita, INPUT);
  pinMode(botaoEsquerda, INPUT);
}

void loop()
{
  estadoBotaoDireita = digitalRead(botaoDireita); 
  estadoBotaoEsquerda = digitalRead(botaoEsquerda); 
  
  //Se o botao da direita for ligado
  if(estadoBotaoDireita == HIGH){
    digitalWrite(ledDireita, HIGH);
    delay(500); 
    digitalWrite(ledDireita, LOW);
    delay(500); 
  }
  
   //Se o botao da esquerda for ligado
  if(estadoBotaoEsquerda == HIGH){
    digitalWrite(ledEsquerda, HIGH);
    delay(500); 
    digitalWrite(ledEsquerda, LOW);
    delay(500); 
  }
}
