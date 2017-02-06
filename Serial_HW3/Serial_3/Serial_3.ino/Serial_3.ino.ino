/**********************************************************************************
**                                                                               **
**                                  TÍTOL: Serial 2                              **
**                                                                               **
**   Nom: Kevin Steven Bermeo Alvarado                           Data:20/01/2017 **

**********************************************************************************/

//************************* INCLUDE ***********************************************


//************************** VARIABLES ********************************************
// 
//********** Setup ****************************************************************
void setup()              // run once, when the sketch starts 
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

 }

void loop ()
{
  Serial.println("Hello world!");
  delay(1000);
}

//*********************** FUNCIONS *************************************************

// Say Hello world! in a diferents lines, say one time, wait 1 second and say it again
