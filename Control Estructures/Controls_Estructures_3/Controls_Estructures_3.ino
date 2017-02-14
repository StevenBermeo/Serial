
/**********************************************************************************
**                                                                               **
**                                  TÍTOL: Control Estructures 3                 **
**                                                                               **
**   Nom: Kevin Steven Bermeo Alvarado                           Data:04/02/2017 **

**********************************************************************************/

//************************* INCLUDE ***********************************************

//************************** VARIABLES ********************************************

int tempAigua = 103;

//********** Setup ****************************************************************


void setup()                                                  // run once time

{

  Serial.begin(9600);                                         // set up Serial library at 9600 bps

  if ( tempAigua < 90 )                                       // Measures the value of the variable
  {
    Serial.print("Aigua encara no bull");     // If the condition is met do print

  }
  else if ( tempAigua >= 90 && tempAigua < 100 )
  {
    Serial.print("Aigua apunt de bullir");
  }
  else if ( tempAigua > 100 )
  {
    Serial.print("Aigua bullint"); // If the condition is met do print
  }
  
  else if ( tempAigua == 100)
  {
    Serial.print("Aigua a 100C");
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

// Condicionals
