
int c = 0;
int c2=255;
void setup() {
  pinMode(3, OUTPUT);
}

void loop() { 
   c = c + 5;
 if(c<=255){ 
             analogWrite(3, c);
             delay(100);
            } 
    if(c>255){
             c2=c2-5;
             analogWrite(3, c2);
             delay(100);
      
      }c==260;


  }
