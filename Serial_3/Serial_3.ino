/**********************************************************************************
**                                                                               **
**                                  TÍTOL: Hello World.4                         **
**                                                                               **
**   Nom: Kevin Steven Bermeo Alvarado                           Data:20/01/2017 **

**********************************************************************************/

//************************* INCLUDE ***********************************************


//************************** VARIABLES ********************************************

//********** Setup ****************************************************************

void setup()                    // configura el final de salida
{
  Serial.begin(9600); // set up Serial library at 9600 bps
  Serial.println("Scull el numero de l'operació que vols realitzar");  // prints sentences 
  Serial.println("1. Comprobar numero de tarjeta de credit");
  Serial.println("2. Comprovar numero de copte bancari");
  Serial.println("3. Buscar un digit perdut de tarjeta de credit");
}

//********** Loop *****************************************************************

void loop()                    // inicia el bucle del programa

{
  
}

//*********************** FUNCIONS *************************************************

// Say menu 
