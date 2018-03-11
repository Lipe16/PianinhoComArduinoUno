//ESSES VALORES CORRESPONDEM AS NOTAS MUSICAIS
int DO = 262;
int RE = 294;
int MI = 329;
int FA = 349;
int SOL = 392;
int	LA = 440;
int SI = 494;

int notas[7] = {DO, RE, MI, FA, SOL, LA ,SI};

void setup()
{
  for(int i = 1; i<=7; i++ ){
  	pinMode(i, INPUT);
  }
}

void loop()
{
  for(int i=1; i<=7; i++){
    while(digitalRead(i) != HIGH){
    	tone(12, notas[i-1]);
    }
    noTone(12);
  }
}