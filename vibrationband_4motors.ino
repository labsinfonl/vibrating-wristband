/* ---------------------------------------------------------
    Vibration bands code
    created by: Antoine Hogenboom
    on: 16-02-2015
--------------------------------------------------------- */
//Initialisatie van alle variabelen en poorttoewijzing
// button1 zit op D2, button2 op D3 etc
const int button1 = 2;
const int button2 = 3;
const int button3 = 4;
const int button4 = 5;

//Initialisatie van de vibratiemotoren
//vibMotor1 zit op poort 7
const int vibMotor1 =  7;
const int vibMotor2 =  8;
const int vibMotor3 =  9;
const int vibMotor4 =  10;

//Variabelen die de startintensiteit en de toename van intensiteit bepalen.
int intensity = 0;
int increase = 3;   

int intensity2 = 255;
int decrease = 15;

int motorState = 0;
long previousVibeMillis = 0;
long intervalVibe = 30;

//Initialisatie van de status van de knoppen
//Standaard is de knop niet ingedrukt
int buttonState1 = 0;
int buttonState2 = 0;
int buttonState3 = 0;
int buttonState4 = 0;


void setup() {
  //Vertel Arduino welke variabelen input zijn en welke output
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);
  pinMode(button4, INPUT);
  pinMode(vibMotor1, OUTPUT);
  pinMode(vibMotor2, OUTPUT);
  pinMode(vibMotor3, OUTPUT);
  pinMode(vibMotor4, OUTPUT);
}

void loop() {
  //Hier begint de daadwerkelijke actie
  
  //Lees de status van de knoppen uit
  buttonState1 = digitalRead(button1);
  buttonState2 = digitalRead(button2);
  buttonState3 = digitalRead(button3);
  buttonState4 = digitalRead(button4);
  
  //Als knop1 ingedrukt is
  if (buttonState1 == HIGH) {
    //Voer functie langkort() uit
  // harderzachter();
  fitbitalarm();
  }

  //Als knop2 is ingedrukt
  if (buttonState2 == HIGH) {
    iphone();
  }
  
  //Als knop3 is ingedrukt
  if (buttonState3 == HIGH) {
    motortest();
  }
  
  if (buttonState4 == HIGH) {
    //Als knop4 ingedrukt is, zet dan de trilmotor aan
   digitalWrite(vibMotor1, HIGH);
  }
   else
   {
     //En als je de knop loslaat, zet hem dan weer uit
     digitalWrite(vibMotor1, LOW);
   }
  
}


// -----------------------------------------------------------------//
//De diverse functies die aangeroepen worden
void bounce()
{
  digitalWrite(vibMotor1, LOW); 
  delay(100);
  digitalWrite(vibMotor1, HIGH);
  delay(100);
  digitalWrite(vibMotor1, LOW); 
  delay(100);
  digitalWrite(vibMotor1, LOW);
  delay(100);
  digitalWrite(vibMotor1, HIGH);
}


void faster()
{
  digitalWrite(vibMotor2, 0); 
  delay(100);
  digitalWrite(vibMotor2, 255);
  delay(200);
  digitalWrite(vibMotor2, 0);
  delay(150);
  digitalWrite(vibMotor2, 255);
  delay(200);
  digitalWrite(vibMotor2, 0); 
  delay(150);
  digitalWrite(vibMotor2, 255);
  delay(200);
  digitalWrite(vibMotor2,0);
}

void langkort()
{
  digitalWrite(vibMotor1, LOW); 
  delay(1000);
  digitalWrite(vibMotor1, HIGH);
  delay(100);
  digitalWrite(vibMotor1, LOW); 
  delay(1000);
  digitalWrite(vibMotor1, LOW);
  delay(100);
  digitalWrite(vibMotor1, HIGH);
}


void iphone()
{
  analogWrite(vibMotor1, 255);
  delay(320);
  analogWrite(vibMotor1, 0);
  delay(100);
  analogWrite(vibMotor1, 255);
  delay(380);
  analogWrite(vibMotor1, 0);
}

void fitbitalarm()
{
  analogWrite(vibMotor1, 255);
  delay(280);
  analogWrite(vibMotor1, 0);
  delay(70);
   analogWrite(vibMotor1, 255);
  delay(280);
  analogWrite(vibMotor1, 0);
  delay(70);
   analogWrite(vibMotor1, 255);
  delay(280);
  analogWrite(vibMotor1, 0);
  delay(70);
   analogWrite(vibMotor1, 255);
  delay(280);
  analogWrite(vibMotor1, 0);
  delay(70);
  analogWrite(vibMotor1, 255);
  delay(700);
  analogWrite(vibMotor1, 0);
  delay(70);
  analogWrite(vibMotor1, 255);
  delay(280);
  analogWrite(vibMotor1, 0);
  delay(70);
  analogWrite(vibMotor1, 255);
  delay(280);
  analogWrite(vibMotor1, 0);
  delay(70);
  analogWrite(vibMotor1, 255);
  delay(280);
  analogWrite(vibMotor1, 0);
  delay(70);
}

void harderzachter()
{
  analogWrite(vibMotor1, 50);
  delay(300);
  analogWrite(vibMotor1, 100);
  delay(300);
  analogWrite(vibMotor1, 150);
  delay(300);
  analogWrite(vibMotor1, 200);
  delay(300);
  analogWrite(vibMotor1, 255);
  delay(300);
  analogWrite(vibMotor1, 0);
  analogWrite(vibMotor2, 255);
  delay(300);
  analogWrite(vibMotor2, 200);
  delay(300);
  analogWrite(vibMotor2, 150);
  delay(300);
  analogWrite(vibMotor2, 100);
  delay(300);
  analogWrite(vibMotor2, 100);
  delay(300);
  analogWrite(vibMotor2, 50);
  delay(300);
}

void motortest()
{
  analogWrite(vibMotor1, 255);
  delay(500);
  analogWrite(vibMotor1, 0);
  delay(200);
  analogWrite(vibMotor2, 255);
  delay(500);
  analogWrite(vibMotor2, 0);
  delay(200);
  analogWrite(vibMotor3, 255);
  delay(500);
  analogWrite(vibMotor3, 0);
  delay(200);
  analogWrite(vibMotor4, 255);
  delay(500);
  analogWrite(vibMotor4, 0);
  delay(200);
}
  
