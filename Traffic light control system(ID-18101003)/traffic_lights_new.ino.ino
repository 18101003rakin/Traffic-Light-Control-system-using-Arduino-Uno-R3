//Rakin Mohammad Sifullah
//Email- 18101003@uap-bd.edu
//Student of Computer Science And Engineering
//University of Asia Pacific


//select Arduino pins for 7 segment display
int led1=0;       
int led2=A5;    
int led3=A4;
int led4=A3;      // Conncet a resistor of 330 ohms with each pin
int led5=A2;
int led6=A1;
int led7=A0;

//select Arduino pins for WAY-1
//Way-1
int green1=11;     // connect 220 ohm resistor with LEDs 
int yellow1=12;
int red1=13;

//select Arduino pins for WAY-2
//way-2
int green2=1;     // connect 220 ohm resistor with LEDs 
int yellow2=2;
int red2=3;

//select Arduino pins for WAY-3
//way-3
int green3=10;     // connect 220 ohm resistor with LEDs 
int yellow3=9;
int red3=8;

void setup() {
 //declare 7 segment pins for output 
 pinMode(led1, OUTPUT);  
 pinMode(led2, OUTPUT);
 pinMode(led3, OUTPUT);
 pinMode(led4, OUTPUT);
 pinMode(led5, OUTPUT);
 pinMode(led6, OUTPUT);
 pinMode(led7, OUTPUT);
 
 //set selected pin for output
 pinMode(green1, OUTPUT);
 pinMode(yellow1, OUTPUT);
 pinMode(red1, OUTPUT);
 
 pinMode(green2, OUTPUT);
 pinMode(yellow2, OUTPUT);
 pinMode(red2, OUTPUT);
 
 pinMode(green3, OUTPUT);
 pinMode(yellow3, OUTPUT);
 pinMode(red3, OUTPUT);
 

}

void loop() {
  //green signal enable for way-1. way-2 and way-3 stay red
 //9 
 digitalWrite(led1, HIGH);
 digitalWrite(led2, HIGH);
 digitalWrite(led3, HIGH);
 digitalWrite(led4, HIGH);
 digitalWrite(led5, LOW);
 digitalWrite(led6, HIGH);
 digitalWrite(led7, HIGH);
 
 digitalWrite(green1, HIGH);
 digitalWrite(yellow1, LOW);
 digitalWrite(red1, LOW);
 
 digitalWrite(green2, LOW);
 digitalWrite(yellow2, LOW);
 digitalWrite(red2, HIGH);
 
 digitalWrite(green3, LOW);
 digitalWrite(yellow3, LOW);
 digitalWrite(red3, HIGH);
 
 delay(500);
 

 //8
 digitalWrite(led1, HIGH);
 digitalWrite(led2, HIGH);
 digitalWrite(led3, HIGH);
 digitalWrite(led4, HIGH);
 digitalWrite(led5, HIGH);
 digitalWrite(led6, HIGH);
 digitalWrite(led7, HIGH);
  
 
 digitalWrite(green1, HIGH);
 digitalWrite(yellow1, LOW);
 digitalWrite(red1, LOW);
 
 digitalWrite(green2, LOW);
 digitalWrite(yellow2, LOW);
 digitalWrite(red2, HIGH);
 
 digitalWrite(green3, LOW);
 digitalWrite(yellow3, LOW);
 digitalWrite(red3, HIGH);
 
 delay(500);

 //7
 digitalWrite(led1, HIGH);
 digitalWrite(led2, HIGH);
 digitalWrite(led3, HIGH);
 digitalWrite(led4, LOW);
 digitalWrite(led5, LOW);
 digitalWrite(led6, LOW);
 digitalWrite(led7, LOW);
  
 digitalWrite(green1, HIGH);
 digitalWrite(yellow1, LOW);
 digitalWrite(red1, LOW);
 
 digitalWrite(green2, LOW);
 digitalWrite(yellow2, LOW);
 digitalWrite(red2, HIGH);
 
 digitalWrite(green3, LOW);
 digitalWrite(yellow3, LOW);
 digitalWrite(red3, HIGH);
 
 delay(500);

 //6
 digitalWrite(led1,HIGH);
 digitalWrite(led2, LOW);
 digitalWrite(led3, HIGH);
 digitalWrite(led4, HIGH);
 digitalWrite(led5, HIGH);
 digitalWrite(led6, HIGH);
 digitalWrite(led7, HIGH);
 
  
 digitalWrite(green1, HIGH);
 digitalWrite(yellow1, LOW);
 digitalWrite(red1, LOW);
 
 digitalWrite(green2, LOW);
 digitalWrite(yellow2, LOW);
 digitalWrite(red2, HIGH);
 
 digitalWrite(green3, LOW);
 digitalWrite(yellow3, LOW);
 digitalWrite(red3, HIGH);
 
 delay(500);

 //5
 digitalWrite(led1, HIGH);
 digitalWrite(led2, LOW);
 digitalWrite(led3, HIGH);
 digitalWrite(led4, HIGH);
 digitalWrite(led5, LOW);
 digitalWrite(led6, HIGH);
 digitalWrite(led7, HIGH);
  
 
 digitalWrite(green1, HIGH);
 digitalWrite(yellow1, LOW);
 digitalWrite(red1, LOW);
 
 digitalWrite(green2, LOW);
 digitalWrite(yellow2, LOW);
 digitalWrite(red2, HIGH);
 
 digitalWrite(green3, LOW);
 digitalWrite(yellow3, LOW);
 digitalWrite(red3, HIGH);
 
 delay(500);

 //4
 digitalWrite(led1, LOW);
 digitalWrite(led2, HIGH);
 digitalWrite(led3, HIGH);
 digitalWrite(led4, LOW);
 digitalWrite(led5, LOW);
 digitalWrite(led6, HIGH);
 digitalWrite(led7, HIGH);
  
  
 digitalWrite(green1, HIGH);
 digitalWrite(yellow1, LOW);
 digitalWrite(red1, LOW);
 
 digitalWrite(green2, LOW);
 digitalWrite(yellow2, LOW);
 digitalWrite(red2, HIGH);
 
 digitalWrite(green3, LOW);
 digitalWrite(yellow3, LOW);
 digitalWrite(red3, HIGH);
 
 delay(500);

 //3
 digitalWrite(led1,HIGH);
 digitalWrite(led2, HIGH);
 digitalWrite(led3, HIGH);
 digitalWrite(led4, HIGH);
 digitalWrite(led5, LOW);
 digitalWrite(led6, LOW);
 digitalWrite(led7, HIGH);
  
  
 digitalWrite(green1, HIGH);
 digitalWrite(yellow1, LOW);
 digitalWrite(red1, LOW);
 
 digitalWrite(green2, LOW);
 digitalWrite(yellow2, LOW);
 digitalWrite(red2, HIGH);
 
 digitalWrite(green3, LOW);
 digitalWrite(yellow3, LOW);
 digitalWrite(red3, HIGH);
 
 delay(500);

 //2
  digitalWrite(led1, HIGH);
 digitalWrite(led2, HIGH);
 digitalWrite(led3, LOW);
 digitalWrite(led4, HIGH);
 digitalWrite(led5, HIGH);
 digitalWrite(led6, LOW);
 digitalWrite(led7, HIGH);
  
 
 digitalWrite(green1, HIGH);
 digitalWrite(yellow1, LOW);
 digitalWrite(red1, LOW);
 
 digitalWrite(green2, LOW);
 digitalWrite(yellow2, LOW);
 digitalWrite(red2, HIGH);
 
 digitalWrite(green3, LOW);
 digitalWrite(yellow3, LOW);
 digitalWrite(red3, HIGH);
 
 delay(500);

 //1
  digitalWrite(led1, LOW);
 digitalWrite(led2, HIGH);
 digitalWrite(led3, HIGH);
 digitalWrite(led4, LOW);
 digitalWrite(led5, LOW);
 digitalWrite(led6, LOW);
 digitalWrite(led7, LOW);
  
  
 digitalWrite(green1, HIGH);
 digitalWrite(yellow1, LOW);
 digitalWrite(red1, LOW);
 
 digitalWrite(green2, LOW);
 digitalWrite(yellow2, LOW);
 digitalWrite(red2, HIGH);
 
 digitalWrite(green3, LOW);
 digitalWrite(yellow3, LOW);
 digitalWrite(red3, HIGH);
 
 delay(500);
 
 //0
 digitalWrite(led1, HIGH);
 digitalWrite(led2, HIGH);
 digitalWrite(led3, HIGH);
 digitalWrite(led4, HIGH);
 digitalWrite(led5, HIGH);
 digitalWrite(led6, HIGH);
 digitalWrite(led7, LOW);
 
 
 digitalWrite(green1, HIGH);
 digitalWrite(yellow1, LOW);
 digitalWrite(red1, LOW);
 
 digitalWrite(green2, LOW);
 digitalWrite(yellow2, LOW);
 digitalWrite(red2, HIGH);
 
 digitalWrite(green3, LOW);
 digitalWrite(yellow3, LOW);
 digitalWrite(red3, HIGH);
 
 delay(500);



// enable yellow light for way-1 and way-2; way-3 stay red
//Yellow light
  //4
 digitalWrite(led1, LOW);
 digitalWrite(led2, HIGH);
 digitalWrite(led3, HIGH);
 digitalWrite(led4, LOW);
 digitalWrite(led5, LOW);
 digitalWrite(led6, HIGH);
 digitalWrite(led7, HIGH);
 
 digitalWrite(green1, LOW);
 digitalWrite(yellow1, HIGH);
 digitalWrite(red1, LOW);
 
 digitalWrite(green2, LOW);
 digitalWrite(yellow2, HIGH);
 digitalWrite(red2, LOW);
 
 digitalWrite(green3, LOW);
 digitalWrite(yellow3, LOW);
 digitalWrite(red3, HIGH);
 
 delay(500);

 //3
  digitalWrite(led1, HIGH);
 digitalWrite(led2, HIGH);
 digitalWrite(led3, HIGH);
 digitalWrite(led4, HIGH);
 digitalWrite(led5, LOW);
 digitalWrite(led6, LOW);
 digitalWrite(led7, HIGH);
 
 digitalWrite(green1, LOW);
 digitalWrite(yellow1, HIGH);
 digitalWrite(red1, LOW);
 
 digitalWrite(green2, LOW);
 digitalWrite(yellow2, HIGH);
 digitalWrite(red2, LOW);
 
 digitalWrite(green3, LOW);
 digitalWrite(yellow3, LOW);
 digitalWrite(red3, HIGH);
 
 delay(500);

 //2
  digitalWrite(led1, HIGH);
 digitalWrite(led2, HIGH);
 digitalWrite(led3, LOW);
 digitalWrite(led4, HIGH);
 digitalWrite(led5, HIGH);
 digitalWrite(led6, LOW);
 digitalWrite(led7, HIGH);
 
 digitalWrite(green1, LOW);
 digitalWrite(yellow1, HIGH);
 digitalWrite(red1, LOW);
 
 digitalWrite(green2, LOW);
 digitalWrite(yellow2, HIGH);
 digitalWrite(red2, LOW);
 
 digitalWrite(green3, LOW);
 digitalWrite(yellow3, LOW);
 digitalWrite(red3, HIGH);
 
 delay(500);

 //1
 digitalWrite(led1, LOW);
 digitalWrite(led2, HIGH);
 digitalWrite(led3, HIGH);
 digitalWrite(led4, LOW);
 digitalWrite(led5, LOW);
 digitalWrite(led6, LOW);
 digitalWrite(led7, LOW);
 
 digitalWrite(green1, LOW);
 digitalWrite(yellow1, HIGH);
 digitalWrite(red1, LOW);
 
 digitalWrite(green2, LOW);
 digitalWrite(yellow2, HIGH);
 digitalWrite(red2, LOW);
 
 digitalWrite(green3, LOW);
 digitalWrite(yellow3, LOW);
 digitalWrite(red3, HIGH);
 
 delay(500);

 //0
  digitalWrite(led1, HIGH);
 digitalWrite(led2, HIGH);
 digitalWrite(led3, HIGH);
 digitalWrite(led4, HIGH);
 digitalWrite(led5, HIGH);
 digitalWrite(led6, HIGH);
 digitalWrite(led7, LOW);
 
 digitalWrite(green1, LOW);
 digitalWrite(yellow1, HIGH);
 digitalWrite(red1, LOW);
 
 digitalWrite(green2, LOW);
 digitalWrite(yellow2, HIGH);
 digitalWrite(red2, LOW);
 
 digitalWrite(green3, LOW);
 digitalWrite(yellow3, LOW);
 digitalWrite(red3, HIGH);
 
 delay(500);


//green signal enable for way-2. way-1 and way-3 stay red
 //9 
 digitalWrite(led1, HIGH);
 digitalWrite(led2, HIGH);
 digitalWrite(led3, HIGH);
 digitalWrite(led4, HIGH);
 digitalWrite(led5, LOW);
 digitalWrite(led6, HIGH);
 digitalWrite(led7, HIGH);
 
 digitalWrite(green1, LOW);
 digitalWrite(yellow1, LOW);
 digitalWrite(red1, HIGH);
 
 digitalWrite(green2, HIGH);
 digitalWrite(yellow2, LOW);
 digitalWrite(red2, LOW);
  
 digitalWrite(green3, LOW);
 digitalWrite(yellow3, LOW);
 digitalWrite(red3, HIGH);
 
 delay(500);

 //8
 digitalWrite(led1, HIGH);
 digitalWrite(led2, HIGH);
 digitalWrite(led3, HIGH);
 digitalWrite(led4, HIGH);
 digitalWrite(led5, HIGH);
 digitalWrite(led6, HIGH);
 digitalWrite(led7, HIGH);

 digitalWrite(green1, LOW);
 digitalWrite(yellow1, LOW);
 digitalWrite(red1, HIGH);
 
 digitalWrite(green2, HIGH);
 digitalWrite(yellow2, LOW);
 digitalWrite(red2, LOW);
  
 digitalWrite(green3, LOW);
 digitalWrite(yellow3, LOW);
 digitalWrite(red3, HIGH);
 
 delay(500);

 //7
 digitalWrite(led1, HIGH);
 digitalWrite(led2, HIGH);
 digitalWrite(led3, HIGH);
 digitalWrite(led4, LOW);
 digitalWrite(led5, LOW);
 digitalWrite(led6, LOW);
 digitalWrite(led7, LOW);

 digitalWrite(green1, LOW);
 digitalWrite(yellow1, LOW);
 digitalWrite(red1, HIGH);
 
 digitalWrite(green2, HIGH);
 digitalWrite(yellow2, LOW);
 digitalWrite(red2, LOW);
  
 digitalWrite(green3, LOW);
 digitalWrite(yellow3, LOW);
 digitalWrite(red3, HIGH);
 
 delay(500);

 //6
  digitalWrite(led1, HIGH);
 digitalWrite(led2, LOW);
 digitalWrite(led3, HIGH);
 digitalWrite(led4, HIGH);
 digitalWrite(led5, HIGH);
 digitalWrite(led6, HIGH);
 digitalWrite(led7, HIGH);

 digitalWrite(green1, LOW);
 digitalWrite(yellow1, LOW);
 digitalWrite(red1, HIGH);
 
 digitalWrite(green2, HIGH);
 digitalWrite(yellow2, LOW);
 digitalWrite(red2, LOW);
  
 digitalWrite(green3, LOW);
 digitalWrite(yellow3, LOW);
 digitalWrite(red3, HIGH);
 
 delay(500);

 //5
  digitalWrite(led1, HIGH);
 digitalWrite(led2, LOW);
 digitalWrite(led3, HIGH);
 digitalWrite(led4, HIGH);
 digitalWrite(led5, LOW);
 digitalWrite(led6, HIGH);
 digitalWrite(led7, HIGH);

 digitalWrite(green1, LOW);
 digitalWrite(yellow1, LOW);
 digitalWrite(red1, HIGH);
 
 digitalWrite(green2, HIGH);
 digitalWrite(yellow2, LOW);
 digitalWrite(red2, LOW);
  
 digitalWrite(green3, LOW);
 digitalWrite(yellow3, LOW);
 digitalWrite(red3, HIGH);
 
 delay(500);

 //4
 digitalWrite(led1, LOW);
 digitalWrite(led2, HIGH);
 digitalWrite(led3, HIGH);
 digitalWrite(led4, LOW);
 digitalWrite(led5, LOW);
 digitalWrite(led6, HIGH);
 digitalWrite(led7, HIGH);

 digitalWrite(green1, LOW);
 digitalWrite(yellow1, LOW);
 digitalWrite(red1, HIGH);
 
 digitalWrite(green2, HIGH);
 digitalWrite(yellow2, LOW);
 digitalWrite(red2, LOW);
  
 digitalWrite(green3, LOW);
 digitalWrite(yellow3, LOW);
 digitalWrite(red3, HIGH);
 
 delay(500);

 //3
  digitalWrite(led1, HIGH);
 digitalWrite(led2, HIGH);
 digitalWrite(led3, HIGH);
 digitalWrite(led4, HIGH);
 digitalWrite(led5, LOW);
 digitalWrite(led6, LOW);
 digitalWrite(led7, HIGH);

 digitalWrite(green1, LOW);
 digitalWrite(yellow1, LOW);
 digitalWrite(red1, HIGH);
 
 digitalWrite(green2, HIGH);
 digitalWrite(yellow2, LOW);
 digitalWrite(red2, LOW);
  
 digitalWrite(green3, LOW);
 digitalWrite(yellow3, LOW);
 digitalWrite(red3, HIGH);
 
 delay(500);

 //2
 digitalWrite(led1, HIGH);
 digitalWrite(led2, HIGH);
 digitalWrite(led3, LOW);
 digitalWrite(led4, HIGH);
 digitalWrite(led5, HIGH);
 digitalWrite(led6, LOW);
 digitalWrite(led7, HIGH);

 digitalWrite(green1, LOW);
 digitalWrite(yellow1, LOW);
 digitalWrite(red1, HIGH);
 
 digitalWrite(green2, HIGH);
 digitalWrite(yellow2, LOW);
 digitalWrite(red2, LOW);
  
 digitalWrite(green3, LOW);
 digitalWrite(yellow3, LOW);
 digitalWrite(red3, HIGH);
 
 delay(500);

 //1
  digitalWrite(led1, LOW);
 digitalWrite(led2, HIGH);
 digitalWrite(led3, HIGH);
 digitalWrite(led4, LOW);
 digitalWrite(led5, LOW);
 digitalWrite(led6, LOW);
 digitalWrite(led7, LOW);

 digitalWrite(green1, LOW);
 digitalWrite(yellow1, LOW);
 digitalWrite(red1, HIGH);
 
 digitalWrite(green2, HIGH);
 digitalWrite(yellow2, LOW);
 digitalWrite(red2, LOW);
  
 digitalWrite(green3, LOW);
 digitalWrite(yellow3, LOW);
 digitalWrite(red3, HIGH);
 
 delay(500);
 
 //0
  digitalWrite(led1, HIGH);
 digitalWrite(led2, HIGH);
 digitalWrite(led3, HIGH);
 digitalWrite(led4, HIGH);
 digitalWrite(led5, HIGH);
 digitalWrite(led6, HIGH);
 digitalWrite(led7, LOW);

 digitalWrite(green1, LOW);
 digitalWrite(yellow1, LOW);
 digitalWrite(red1, HIGH);
 
 digitalWrite(green2, HIGH);
 digitalWrite(yellow2, LOW);
 digitalWrite(red2, LOW);
  
 digitalWrite(green3, LOW);
 digitalWrite(yellow3, LOW);
 digitalWrite(red3, HIGH);
 
 delay(500);
 
 
 
 // enable yellow light for way-2 and way-3; way-1 stay red
 //Yellow light
  //4
 digitalWrite(led1, LOW);
 digitalWrite(led2, HIGH);
 digitalWrite(led3, HIGH);
 digitalWrite(led4, LOW);
 digitalWrite(led5, LOW);
 digitalWrite(led6, HIGH);
 digitalWrite(led7, HIGH);
 
 digitalWrite(green1, LOW);
 digitalWrite(yellow1, LOW);
 digitalWrite(red1, HIGH);
 
 digitalWrite(green2, LOW);
 digitalWrite(yellow2, HIGH);
 digitalWrite(red2, LOW);
 
 digitalWrite(green3, LOW);
 digitalWrite(yellow3, HIGH);
 digitalWrite(red3, LOW);
 
 delay(500);

 //3
  digitalWrite(led1, HIGH);
 digitalWrite(led2, HIGH);
 digitalWrite(led3, HIGH);
 digitalWrite(led4, HIGH);
 digitalWrite(led5, LOW);
 digitalWrite(led6, LOW);
 digitalWrite(led7, HIGH);
 
 digitalWrite(green1, LOW);
 digitalWrite(yellow1, LOW);
 digitalWrite(red1, HIGH);
 
 digitalWrite(green2, LOW);
 digitalWrite(yellow2, HIGH);
 digitalWrite(red2, LOW);
 
 digitalWrite(green3, LOW);
 digitalWrite(yellow3, HIGH);
 digitalWrite(red3, LOW);
 
 delay(500);

 //2
 digitalWrite(led1, HIGH);
 digitalWrite(led2, HIGH);
 digitalWrite(led3, LOW);
 digitalWrite(led4, HIGH);
 digitalWrite(led5, HIGH);
 digitalWrite(led6, LOW);
 digitalWrite(led7, HIGH);
 
 digitalWrite(green1, LOW);
 digitalWrite(yellow1, LOW);
 digitalWrite(red1, HIGH);
 
 digitalWrite(green2, LOW);
 digitalWrite(yellow2, HIGH);
 digitalWrite(red2, LOW);
 
 digitalWrite(green3, LOW);
 digitalWrite(yellow3, HIGH);
 digitalWrite(red3, LOW);
 
 delay(500);

 //1
  digitalWrite(led1, LOW);
 digitalWrite(led2, HIGH);
 digitalWrite(led3, HIGH);
 digitalWrite(led4, LOW);
 digitalWrite(led5, LOW);
 digitalWrite(led6, LOW);
 digitalWrite(led7, LOW);
 
 digitalWrite(green1, LOW);
 digitalWrite(yellow1, LOW);
 digitalWrite(red1, HIGH);
 
 digitalWrite(green2, LOW);
 digitalWrite(yellow2, HIGH);
 digitalWrite(red2, LOW);
 
 digitalWrite(green3, LOW);
 digitalWrite(yellow3, HIGH);
 digitalWrite(red3, LOW);
 
 delay(500);
 
 //0
 digitalWrite(led1, HIGH);
 digitalWrite(led2, HIGH);
 digitalWrite(led3, HIGH);
 digitalWrite(led4, HIGH);
 digitalWrite(led5, HIGH);
 digitalWrite(led6, HIGH);
 digitalWrite(led7, LOW);
 
 digitalWrite(green1, LOW);
 digitalWrite(yellow1, LOW);
 digitalWrite(red1, HIGH);
 
 digitalWrite(green2, LOW);
 digitalWrite(yellow2, HIGH);
 digitalWrite(red2, LOW);
 
 digitalWrite(green3, LOW);
 digitalWrite(yellow3, HIGH);
 digitalWrite(red3, LOW);
 
 delay(500);
 
 
 
 
 // enable green light for way-3; way-1 and way-2 stay red  
 //9 
 digitalWrite(led1, HIGH);
 digitalWrite(led2, HIGH);
 digitalWrite(led3, HIGH);
 digitalWrite(led4, HIGH);
 digitalWrite(led5, LOW);
 digitalWrite(led6, HIGH);
 digitalWrite(led7, HIGH);
 
 digitalWrite(green1, LOW);
 digitalWrite(yellow1, LOW);
 digitalWrite(red1, HIGH);
 
 digitalWrite(green2, LOW);
 digitalWrite(yellow2, LOW);
 digitalWrite(red2, HIGH);
 
 digitalWrite(green3, HIGH);
 digitalWrite(yellow3, LOW);
 digitalWrite(red3, LOW);
 
 delay(500);

 //8
 digitalWrite(led1, HIGH);
 digitalWrite(led2, HIGH);
 digitalWrite(led3, HIGH);
 digitalWrite(led4, HIGH);
 digitalWrite(led5, HIGH);
 digitalWrite(led6, HIGH);
 digitalWrite(led7, HIGH);
  
 digitalWrite(green1, LOW);
 digitalWrite(yellow1, LOW);
 digitalWrite(red1, HIGH);
 
 digitalWrite(green2, LOW);
 digitalWrite(yellow2, LOW);
 digitalWrite(red2, HIGH);
 
 digitalWrite(green3, HIGH);
 digitalWrite(yellow3, LOW);
 digitalWrite(red3, LOW);
 
 delay(500);

 //7
 digitalWrite(led1, HIGH);
 digitalWrite(led2, HIGH);
 digitalWrite(led3, HIGH);
 digitalWrite(led4, LOW);
 digitalWrite(led5, LOW);
 digitalWrite(led6, LOW);
 digitalWrite(led7, LOW);
  
 digitalWrite(green1, LOW);
 digitalWrite(yellow1, LOW);
 digitalWrite(red1, HIGH);
 
 digitalWrite(green2, LOW);
 digitalWrite(yellow2, LOW);
 digitalWrite(red2, HIGH);
 
 digitalWrite(green3, HIGH);
 digitalWrite(yellow3, LOW);
 digitalWrite(red3, LOW);
 
 delay(500);

 //6
 digitalWrite(led1, HIGH);
 digitalWrite(led2, LOW);
 digitalWrite(led3, HIGH);
 digitalWrite(led4, HIGH);
 digitalWrite(led5, HIGH);
 digitalWrite(led6, HIGH);
 digitalWrite(led7, HIGH);
 
 digitalWrite(green1, LOW);
 digitalWrite(yellow1, LOW);
 digitalWrite(red1, HIGH);
 
 digitalWrite(green2, LOW);
 digitalWrite(yellow2, LOW);
 digitalWrite(red2, HIGH);
 
 digitalWrite(green3, HIGH);
 digitalWrite(yellow3, LOW);
 digitalWrite(red3, LOW);
 
 delay(500);

 //5
 digitalWrite(led1, HIGH);
 digitalWrite(led2, LOW);
 digitalWrite(led3, HIGH);
 digitalWrite(led4, HIGH);
 digitalWrite(led5, LOW);
 digitalWrite(led6, HIGH);
 digitalWrite(led7, HIGH);
  
 digitalWrite(green1, LOW);
 digitalWrite(yellow1, LOW);
 digitalWrite(red1, HIGH);
 
 digitalWrite(green2, LOW);
 digitalWrite(yellow2, LOW);
 digitalWrite(red2, HIGH);
 
 digitalWrite(green3, HIGH);
 digitalWrite(yellow3, LOW);
 digitalWrite(red3, LOW);
 
 delay(500);

 //4
 digitalWrite(led1, LOW);
 digitalWrite(led2, HIGH);
 digitalWrite(led3, HIGH);
 digitalWrite(led4, LOW);
 digitalWrite(led5, LOW);
 digitalWrite(led6, HIGH);
 digitalWrite(led7, HIGH);
  
 digitalWrite(green1, LOW);
 digitalWrite(yellow1, LOW);
 digitalWrite(red1, HIGH);
 
 digitalWrite(green2, LOW);
 digitalWrite(yellow2, LOW);
 digitalWrite(red2, HIGH);
 
 digitalWrite(green3, HIGH);
 digitalWrite(yellow3, LOW);
 digitalWrite(red3, LOW);
 
 delay(500);

 //3
 digitalWrite(led1, HIGH);
 digitalWrite(led2, HIGH);
 digitalWrite(led3, HIGH);
 digitalWrite(led4, HIGH);
 digitalWrite(led5, LOW);
 digitalWrite(led6, LOW);
 digitalWrite(led7, HIGH);
  
 digitalWrite(green1, LOW);
 digitalWrite(yellow1, LOW);
 digitalWrite(red1, HIGH);
 
 digitalWrite(green2, LOW);
 digitalWrite(yellow2, LOW);
 digitalWrite(red2, HIGH);
 
 digitalWrite(green3, HIGH);
 digitalWrite(yellow3, LOW);
 digitalWrite(red3, LOW);
 
 delay(500);

 //2
 digitalWrite(led1, HIGH);
 digitalWrite(led2, HIGH);
 digitalWrite(led3, LOW);
 digitalWrite(led4, HIGH);
 digitalWrite(led5, HIGH);
 digitalWrite(led6, LOW);
 digitalWrite(led7, HIGH);
  
 digitalWrite(green1, LOW);
 digitalWrite(yellow1, LOW);
 digitalWrite(red1, HIGH);
 
 digitalWrite(green2, LOW);
 digitalWrite(yellow2, LOW);
 digitalWrite(red2, HIGH);
 
 digitalWrite(green3, HIGH);
 digitalWrite(yellow3, LOW);
 digitalWrite(red3, LOW);
 
 delay(500);

 //1
  digitalWrite(led1, LOW);
 digitalWrite(led2, HIGH);
 digitalWrite(led3,HIGH);
 digitalWrite(led4, LOW);
 digitalWrite(led5, LOW);
 digitalWrite(led6, LOW);
 digitalWrite(led7, LOW);
  
 digitalWrite(green1, LOW);
 digitalWrite(yellow1, LOW);
 digitalWrite(red1, HIGH);
 
 digitalWrite(green2, LOW);
 digitalWrite(yellow2, LOW);
 digitalWrite(red2, HIGH);
 
 digitalWrite(green3, HIGH);
 digitalWrite(yellow3, LOW);
 digitalWrite(red3, LOW);
 
 delay(500);
 
 //0
 digitalWrite(led1, HIGH);
 digitalWrite(led2, HIGH);
 digitalWrite(led3, HIGH);
 digitalWrite(led4, HIGH);
 digitalWrite(led5, HIGH);
 digitalWrite(led6, HIGH);
 digitalWrite(led7, LOW);
 
 digitalWrite(green1, LOW);
 digitalWrite(yellow1, LOW);
 digitalWrite(red1, HIGH);
 
 digitalWrite(green2, LOW);
 digitalWrite(yellow2, LOW);
 digitalWrite(red2, HIGH);
 
 digitalWrite(green3, HIGH);
 digitalWrite(yellow3, LOW);
 digitalWrite(red3, LOW);
 
 delay(500);
 
 
 
 //enable yellow light for way-1 and way-3; way-2 stay red
 //Yellow light
  //4
  digitalWrite(led1, LOW);
 digitalWrite(led2, HIGH);
 digitalWrite(led3, HIGH);
 digitalWrite(led4, LOW);
 digitalWrite(led5, LOW);
 digitalWrite(led6, HIGH);
 digitalWrite(led7, HIGH);
 
 digitalWrite(green1, LOW);
 digitalWrite(yellow1, HIGH);
 digitalWrite(red1, LOW);
 
 digitalWrite(green2, LOW);
 digitalWrite(yellow2, LOW);
 digitalWrite(red2, HIGH);
 
 digitalWrite(green3, LOW);
 digitalWrite(yellow3, HIGH);
 digitalWrite(red3, LOW);
 
 delay(500);

 //3
  digitalWrite(led1, HIGH);
 digitalWrite(led2, HIGH);
 digitalWrite(led3, HIGH);
 digitalWrite(led4, HIGH);
 digitalWrite(led5, LOW);
 digitalWrite(led6, LOW);
 digitalWrite(led7,HIGH);

 digitalWrite(green1, LOW);
 digitalWrite(yellow1, HIGH);
 digitalWrite(red1, LOW);
 
 digitalWrite(green2, LOW);
 digitalWrite(yellow2, LOW);
 digitalWrite(red2, HIGH);
 
 digitalWrite(green3, LOW);
 digitalWrite(yellow3, HIGH);
 digitalWrite(red3, LOW);
 
 delay(500);

 //2
 digitalWrite(led1, HIGH);
 digitalWrite(led2, HIGH);
 digitalWrite(led3, LOW);
 digitalWrite(led4, HIGH);
 digitalWrite(led5, HIGH);
 digitalWrite(led6, LOW);
 digitalWrite(led7, HIGH);

 digitalWrite(green1, LOW);
 digitalWrite(yellow1, HIGH);
 digitalWrite(red1, LOW);
 
 digitalWrite(green2, LOW);
 digitalWrite(yellow2, LOW);
 digitalWrite(red2, HIGH);
 
 digitalWrite(green3, LOW);
 digitalWrite(yellow3, HIGH);
 digitalWrite(red3, LOW);
 
 delay(500);

 //1
  digitalWrite(led1, LOW);
 digitalWrite(led2, HIGH);
 digitalWrite(led3, HIGH);
 digitalWrite(led4, LOW);
 digitalWrite(led5, LOW);
 digitalWrite(led6, LOW);
 digitalWrite(led7, LOW);

 digitalWrite(green1, LOW);
 digitalWrite(yellow1, HIGH);
 digitalWrite(red1, LOW);
 
 digitalWrite(green2, LOW);
 digitalWrite(yellow2, LOW);
 digitalWrite(red2, HIGH);
 
 digitalWrite(green3, LOW);
 digitalWrite(yellow3, HIGH);
 digitalWrite(red3, LOW);
 
 delay(500);
 
 //0
 digitalWrite(led1, HIGH);
 digitalWrite(led2, HIGH);
 digitalWrite(led3, HIGH);
 digitalWrite(led4, HIGH);
 digitalWrite(led5, HIGH);
 digitalWrite(led6, HIGH);
 digitalWrite(led7, LOW);
 
 digitalWrite(green1, LOW);
 digitalWrite(yellow1, HIGH);
 digitalWrite(red1, LOW);
 
 digitalWrite(green2, LOW);
 digitalWrite(yellow2, LOW);
 digitalWrite(red2, HIGH);
 
 digitalWrite(green3, LOW);
 digitalWrite(yellow3, HIGH);
 digitalWrite(red3, LOW);
 
 delay(500);
 
}
