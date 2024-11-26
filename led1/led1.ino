

int led = 12;
int btn = 7;

void setup(){
  pinMode(led, OUTPUT);
  pinMode(btn, INPUT);
}

void loop(){
  int value = digitalRead(btn);
  if(value == HIGH){
    digitalWrite(led, HIGH);
  } else {
     digitalWrite(led, LOW); 
    }
}
