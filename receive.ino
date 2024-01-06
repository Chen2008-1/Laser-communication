void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int out=analogRead(6);
  int k=0;
  int num=0;
  while(k<8){
    out=analogRead(6);
    if(out>250){
      int i=0,b;
      while(out>250){
        out=analogRead(6);
        delay(10);
        i+=10;
      }
      if(i>450){
        Serial.print("1");
        b=1;
      }
      else{
        Serial.print("0");
        b=0;
      }
      num*=2;
      num+=b;
      k++;
    }
    else{
      delay(50);
    }
  }
  Serial.println(char(num));
}
