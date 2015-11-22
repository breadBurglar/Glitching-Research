
int led1 =11;
int led2 = 10;
int ledOn = 13;
char key[] = "SECRET_{414141414141}";

void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(ledOn, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  unsigned long i = 0 ;
  digitalWrite(ledOn, HIGH);
  do{
    delay(1000);
    digitalWrite(led1, HIGH);
    delay(1000);
    digitalWrite(led1, LOW);
    i ++;
  }while (i != 2000000);
  i = 0;
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  while ( i != 2000000){
    delay(10000);
    delay(10000);  
    i ++;
  }
  i = 0;
  while(i != strlen(key)){
    delay(100);
    i++;  
  }
}

//On Arduino 1.6.5
