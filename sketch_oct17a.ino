int ldr = A5;
const int ledblanco = 10;
int valor;
int dt = 1000;
void setup(){
    Serial.begin(9600);
    pinMode(ldr, INPUT);
    pinMode(ledblanco, OUTPUT);
    
  
}
 void loop(){

  int valor = analogRead(ldr);
  Serial.println(valor);
  delay(dt);
  

  if(valor>300){
    digitalWrite(ledblanco, HIGH);
 
  }
  if(valor<300){
    digitalWrite(ledblanco, LOW);
 
  }
 }
