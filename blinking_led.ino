void setup() {
 pinMode(13,OUTPUT);
 pinMode(1,OUTPUT);
}
int i=0;
void loop() {
    i++;
    if(i==100){
     exit(0);
   }
   digitalWrite(13,HIGH);
   delay(100);
   digitalWrite(13,LOW);
   delay(100);
   digitalWrite(1,HIGH);
   delay(100);
   digitalWrite(1,LOW);
}
