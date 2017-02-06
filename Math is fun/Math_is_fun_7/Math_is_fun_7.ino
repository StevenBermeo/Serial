
/**********************************************************************************
**                                                                               **
**                                  TÍTOL: Math is fun 7                         **
**                                                                               **
**   Nom: Kevin Steven Bermeo Alvarado                           Data:04/02/2017 **

**********************************************************************************/

//************************* INCLUDE ***********************************************

//************************** VARIABLES ********************************************
int  test = 32767;

//********** Setup ****************************************************************

void setup()                                         // run once time 

{
  Serial.begin(9600);
  Serial.print("Test value is: ");
  Serial.println(test);

  test = test + 1; 
  
  Serial.print("Now it is ");
  Serial.println(test);
 
  
}

void loop ()

{ 
   // we need this to be here even though  its empty
}


//*********************** FUNCIONS *************************************************

//The value of variable test become to negative 'cause tipus variable int range is 32767 to -32768
