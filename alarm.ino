void setup() {

pinMode(8,OUTPUT);

Serial.begin(9600);

}

void loop() {

int i;

int q=analogRead(A4);

Serial.println(q);

if(q\>750) {

/\* for(i=0;i\<1;i=i+1) {

tone(8,1000);

delay(800);

noTone(8);

delay(500);

}\*/

tone(8,1000);

}else{

noTone(8);

}

}
