/**********************************************************************************
**                                                                               **
**                                  TÍTOL: Math is fun 1                         **
**                                                                               **
**   Nom: Kevin Steven Bermeo Alvarado                           Data:20/01/2017 **

**********************************************************************************/

//************************* INCLUDE ***********************************************


//************************** VARIABLES ********************************************
// a,b,c
//********** Setup ****************************************************************

int a = 5 ;
int b = 10 ; 
int c = 20 ;

void setup()              // run once, when the sketch starts 
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);
  Serial.print("c = ");
  Serial.println(c);

  Serial.print("a +b = ");      //add
  Serial.println(a+b);
  Serial.print("a * c = ");      //multiply
  Serial.println(a*c);
  Serial.print("c / b ");         //divide
  Serial.println(c/b);
  Serial.print("c % b = ");         //module
  Serial.println(c%b);
  Serial.print("b - c = ");         //susbtract
  Serial.println(b-c);

 }

void loop ()
{
                        // We need this to be here even though its emtpy
}

//*********************** FUNCIONS *************************************************

// Some maths
