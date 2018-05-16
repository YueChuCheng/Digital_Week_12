
const int buttonPin=2;
const int ledPin=13;

int buttonstatus=0;
int pushButton = 2;


void setup() {
  // put your setup code here, to run once:
pinMode(ledPin,OUTPUT);
pinMode(buttonPin,INPUT);
 digitalWrite(buttonPin,HIGH);
   // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // make the pushbutton's pin an input:
  pinMode(pushButton, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
buttonstatus=digitalRead(buttonPin);

if(buttonstatus==HIGH){

  digitalWrite(ledPin,HIGH);
}
else{
  
  digitalWrite(ledPin,LOW);
  
  
  }
  // read the input pin:
  int buttonState = digitalRead(pushButton);
  // print out the state of the button:
  Serial.println(buttonState);
  delay(1);        // delay in between reads for stability

}
