/**********************************************************************************
**                                                                               **
**                                  TÍTOL: Hello Word.2                          **
**                                                                               **
**   Nom: Kevin Steven Bermeo Alvarado                           Data:20/01/2017 **

**********************************************************************************/

//************************* INCLUDE ***********************************************


//************************** VARIABLES ********************************************

//********** Setup ****************************************************************

void setup()                    // configura el final de salida
  {
Serial.begin(9600); // set up Serial library at 9600 bps
  
}

//********** Loop *****************************************************************

void loop()                    // inicia el bucle del programa 

{
Serial.print("Hello world!");  // prints Hello world! sometimes 
  delay(1000);
}

//*********************** FUNCIONS *************************************************

// Say Hello world! in a single line, say one time, wait 1 second and say it again
