int rosso = 12;
int giallo = 6;
int bianco = 8;
int verde = 10;

int durata1 = 0;
int durata2 = 0;
int cicli = 0;
int contatore = 0;

void setup() {
  // put your setup code here, to run once:


pinMode(rosso, OUTPUT);
pinMode(giallo, OUTPUT);
pinMode(bianco, OUTPUT);
pinMode(verde, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
Serial.begin(9600);

durata1 = random(1000, 5000);
durata2 = random(1000, 5000);

Serial.println("Dimmi quanti cicli deve fare:"); 
while(Serial.available() == 0) {};
int cicli = Serial.readString().toInt();
Serial.println(cicli);

while(contatore != cicli)
{
digitalWrite(rosso, HIGH);
digitalWrite(giallo, HIGH);
delay(durata1);
digitalWrite(rosso, LOW);
digitalWrite(giallo, LOW);
digitalWrite (bianco, HIGH);
digitalWrite(verde, HIGH);
delay(durata2);
digitalWrite (bianco, LOW);
digitalWrite(verde, LOW);
contatore++;
}
}
