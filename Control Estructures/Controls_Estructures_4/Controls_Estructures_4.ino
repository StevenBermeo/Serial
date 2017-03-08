
/**********************************************************************************
**                                                                               **
**                                  TÍTOL: Control Estructures 4                 **
**                                                                               **
**   Nom: Kevin Steven Bermeo Alvarado                           Data:04/02/2017 **

**********************************************************************************/

//************************* INCLUDE ***********************************************

//************************** VARIABLES ********************************************

 float kgCO2= 35;

//********** Setup ****************************************************************


void setup()                                                  // run once time

{

  Serial.begin(9600);                                         // set up Serial library at 9600 bps

  Serial.print("El teu nivell de kgCO2/m2 es ");
  Serial.println(kgCO2);
  Serial.print("Tens una qualificacio energetica de ");
  
  if ( kgCO2 < 3.5 )                                       // Measures the value of the variable
  {
    Serial.print("A");                                    // If kgCO2 is < 3.5 do print A

  }
  else if ( kgCO2 >= 3.5 && kgCO2 < 6.5 )                 // If kgCO2 is < 6.5 do print B
  {
    Serial.print("B");
  }
  else if ( kgCO2 >= 6.5 && kgCO2 < 11.1)                 // If kgCO2 is < 11.1 do print c
  {
    Serial.print("C"); // If the condition is met do print
  }
  
  else if ( kgCO2 >= 11.1 && kgCO2 < 17.7)                // If kgCO2 is < 17.7 do print D
  {
    Serial.print("D");
  }
  else if ( kgCO2 >= 17.7 && kgCO2 < 38.2)               // If kgCO2 is < 38.2 do print E
  {
    Serial.print("E");
  }
  else if ( kgCO2 >= 38.2 && kgCO2 < 43.2)              // If kgCO2 is < 43.2 do print F
  {
    Serial.print("F");
  }
  else if ( kgCO2 > 43.2 )                              // If kgCO2 is < 43.2 do print G
  {
    Serial.print("G");
  }
  else
  {
  }

}
//********** Loop ****************************************************************
void loop ()

{

}


//*********************** FUNCIONS *************************************************

// Indicador de qualificació enèrgetica
