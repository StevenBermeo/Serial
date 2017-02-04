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


void setup()              // run once, when the sketch starts 
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  Serial.println("Your HD is ");
  Serial.print(drive_gb);            //print value of variable drive_gb
  Serial.println(" GB large ");       

  drive_mb = 1024 * drive_gb;
  Serial.print("It can store it ");
  Serial.print(drive_mb);
  Serial.println(" Megabytes! ");
}

void loop() // we need this to be here even though its empty 

{
  
}

//*********************** FUNCIONS *************************************************

// Calculate hypotenuese
