int a3;
int a4;
int a5;
int b3;
int b4;
int b5;
int v;
int z;
int val = 0;


int T=200;

void setup() {

  Serial.begin(9600);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);  
  pinMode(7, OUTPUT);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);

}
void loop() {

  if (Serial.available() > 0) {
  a3=digitalRead(3);
  a4=digitalRead(4);
  a5=digitalRead(5);
  
  
  delay(T);
  int mas[3]={
    a3, a4, a5  };
  z=digitalRead(6);
  Serial.print ("z=");
  Serial.println (z);
  if (z>0) {
    int i;
    for (i = 0; i < 3; i = i + 1) {
      Serial.print (mas[i]);
      Serial.print(" ");
      digitalWrite(7, mas[i]);
      delay(T);
    }
    Serial.println();
  }
   }
}

