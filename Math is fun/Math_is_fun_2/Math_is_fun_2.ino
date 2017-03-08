
/**********************************************************************************
**                                                                               **
**                                  TÍTOL:Math is fun 2                          **
**                                                                               **
**   Nom: Kevin Steven Bermeo Alvarado                           Data:04/02/2017 **

**********************************************************************************/

//************************* INCLUDE ***********************************************


//************************** VARIABLES ********************************************

//a,b,h
//********** Setup ****************************************************************
float a = 3;
float b = 4;
int h

void setup()

{
Serial.begin(9600);              //open serial library 

Serial.println(" Lets calculate a hypoteneuse ");
Serial.print(" a = ");
Serial.println(a);
Serial.print(" b = ");
Serial.println(b);
Serial.print(" h = ");

h = sqrt( pow (a,2) + pow (b,2) );

Serial.println(h);
}
//********** Loop ***************************************************************
void loop ()

{
 
}
//*********************** FUNCIONS *************************************************

// Calculate hypoteneuse 
