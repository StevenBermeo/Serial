
/**********************************************************************************
**                                                                               **
**                                  TÍTOL: Control Estructures 5                 **
**                                                                               **
**   Nom: Kevin Steven Bermeo Alvarado                           Data:04/02/2017 **

**********************************************************************************/

//************************* INCLUDE ***********************************************

//************************** VARIABLES ********************************************

 int sensorReading = 2;

//********** Setup ****************************************************************


void setup()                                                  // run once time

{
   Serial.begin(9600);
  Serial.print("The day is ");                              //Print The day is
   
  switch (sensorReading) {                                  //Read de variable
  case 0:    
    Serial.println("dark");                                 //If variable is 0 print dark
    break;
  case 1:    
    Serial.println("dim");                                  //If variable is 1 print dim
    break;
  case 2:    
    Serial.println("medium");                               //If variable is 2 print medium 
    break;
  case 3: Serial.println("bright");                         //If variable is 3 print brigth
    break;
  default:
    Serial.println("... I don't know!!!");                  //If If no condition is met print ... I don't know!!!
  }
}

//********** Loop ****************************************************************
void loop ()
{
}
//*********************** FUNCIONS *************************************************

// 
