
/**********************************************************************************
**                                                                               **
**                                  TÍTOL: Math is fun 3                         **
**                                                                               **
**   Nom: Kevin Steven Bermeo Alvarado                           Data:04/02/2017 **

**********************************************************************************/

//************************* INCLUDE ***********************************************

//************************** VARIABLES ********************************************
int drive_gb = 5;
int drive_mb;
//********** Setup ****************************************************************

void setup()                                         // run once time 

{
  Serial.begin(9600);
  Serial.print("Yore HD is ");
  Serial.println(drive_gb);
  Serial.print("GB large ");


  drive_mb = 1024 * drive_gb;


  Serial.print("It can store ");
  Serial.println(drive_mb);
  Serial.println( "Megabytes! ");
  
}

void loop ()

{ 
   // we need this to be here even though  its empty
}


//*********************** FUNCIONS *************************************************

//Calculate GB to MB
