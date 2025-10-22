class Semaforo {
  int verm;
  int amar;
  int verde;
  
  public:
    Semaforo(int R, int Y, int G) {
      verm = R;
      amar = Y;
      verde = G;
    
      pinMode(verm, OUTPUT);
      pinMode(amar, OUTPUT);
      pinMode(verde, OUTPUT);
    }

    void alternarCores() {
      
      digitalWrite(verm, HIGH);
      digitalWrite(amar, LOW);
      digitalWrite(verde, LOW);
      delay(3000); 

      
      digitalWrite(verm, LOW);
      digitalWrite(amar, LOW);
      digitalWrite(verde, HIGH);
      delay(3000);

      
      digitalWrite(verm, LOW);
      digitalWrite(amar, HIGH);
      digitalWrite(verde, LOW);
      delay(1000);
    }

};

Semaforo sem(2, 4, 7);

void setup() {
  Serial.begin(9600);
}

void loop() {
  sem.alternarCores();
}
