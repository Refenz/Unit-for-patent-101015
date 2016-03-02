int a1=0;
int a2=0;
int a3=0;

int b1=0;
int b2=0;
int b3=0;

int c1=0;
int c2=0;
int c3=0;

int m1=0;
int m2=0;
int m3=0;

char w[] = "Let`s Start";
char w1[] = "Ready";
char w2[] = "Finish";

int Ts=10;
int T=1000;
int Tp=400;

int val = 0;
void setup() {

  Serial.begin(9600);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, OUTPUT);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);

}


void loop() {

  if (Serial.available() > 0) {
    val = Serial.read();     //убрать, будет требовать повторный ввод
    Serial.print(w);
    Serial.println();
    digitalWrite(6, HIGH);  
    
    Serial.println(w1);
    delay(T);    
    a1 = digitalRead(3);
    a2 = digitalRead(4); 
    a3 = digitalRead(5); 
    delay(Ts);
    Serial.print(a1);
    Serial.print(" ");
    Serial.print(a2);
    Serial.print(" ");
    Serial.println(a3);  
    Serial.println(w2);
    digitalWrite(6, LOW); 
    delay(T);
    
    digitalWrite(6, HIGH);  
    Serial.println(w1);
    delay(T); 
    b1 = digitalRead(3);
    b2 = digitalRead(4); 
    b3 = digitalRead(5);
    delay(Ts);
    Serial.print(b1);
    Serial.print(" ");
    Serial.print(b2);
    Serial.print(" ");
    Serial.println(b3);
    Serial.println(w2); 
    digitalWrite(6, LOW); 
    delay(T);
    
    digitalWrite(6, HIGH);  
    Serial.println(w1);
    delay(T); 
    c1 = digitalRead(3);
    c2 = digitalRead(4); 
    c3 = digitalRead(5); 
    delay(Ts);
    Serial.print(c1);
    Serial.print(" ");
    Serial.print(c2);
    Serial.print(" ");
    Serial.println(c3);
    Serial.println(w2);
    digitalWrite(6, LOW); 
    delay(T); 
  Serial.println("Done");
  delay(Tp);
  Serial.print("Calculate");
  delay(Tp);
  Serial.print(".");
  delay(Tp);
  Serial.print(".");
  delay(Tp);
  Serial.println(".");
  delay(Tp);
 
    m1=1*a1+2*b1+4*c1;
    m2=1*a2+2*b2+4*c2;
    m3=1*a3+2*b3+4*c3;

    Serial.print("AllResult:");
    Serial.println();
    Serial.print(m1);
    Serial.print(" ");
    Serial.print(m2);
    Serial.print(" ");
    Serial.println(m3);  


    delay(T);
    int mas[3] = {m1, m2, m3};
    int M=0;
    for(int i=0; i<3; i++) {
      M=max(mas[i], M);
    Serial.print("Result:");
    Serial.println(M);}  
    /*    int x;
    x = mas[2];
    Serial.print("x=");
    Serial.println(x);*/
    
  if (m1 == M){
  digitalWrite(6, HIGH);
  delay(Ts);
  digitalRead(3);
  Serial.println("m1");
  }
   if (m2 == M){
  digitalWrite(6, HIGH);
  delay(Ts);
  digitalRead(4);
  Serial.println("m2");
  }
     if (m3 == M){
  digitalWrite(6, HIGH);
  delay(Ts);
  digitalRead(5);
  Serial.println("m3");
  }
  } 

  
}








