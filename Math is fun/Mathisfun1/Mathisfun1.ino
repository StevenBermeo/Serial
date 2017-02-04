/**********************************************************************************
**                                                                               **
**                                  TÍTOL: Math is fun 1                         **
**                                                                               **
**   Nom: Kevin Steven Bermeo Alvarado                           Data:04/02/2017 **

**********************************************************************************/

//************************* INCLUDE ***********************************************


//************************** VARIABLES ********************************************
 int a=3;
 int b=4;
 int h;
//********** Setup ****************************************************************


void setup()              // run once, when the sketch starts 
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  Serial.println("Lets calculate a hypoteneuse");

  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);
  Serial.print("h = ");
  h = sqrt( pow (a,2) + pow (b,2) );
  Serial.println(h);

 
}

void loop() // we need this to be here even though its empty 

{
  
}


//*********************** FUNCIONS *************************************************

// Some maths operations 
