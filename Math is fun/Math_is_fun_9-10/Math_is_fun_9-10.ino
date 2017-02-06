
/**********************************************************************************
**                                                                               **
**                                  TÍTOL: Math is fun 9-10                      **
**                                                                               **
**   Nom: Kevin Steven Bermeo Alvarado                           Data:04/02/2017 **

**********************************************************************************/

//************************* INCLUDE ***********************************************

//************************** VARIABLES ********************************************
int a = 3;
int b = 2;
float d;
//********** Setup ****************************************************************

void setup()                                         // run once time 

{
  Serial.begin(9600);
  Serial.println("Here is division ");
 Serial.print("a = ");
 Serial.println(a);
 Serial.print("b = ");
 Serial.println(b);
 Serial.print("a / b = ");
 d = (float) a / b;
 Serial.println(d);
 
  
}

void loop ()

{ 
   // we need this to be here even though  its empty
}


//*********************** FUNCIONS *************************************************

//Calculate division in decimals 
