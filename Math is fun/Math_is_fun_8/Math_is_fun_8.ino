
/**********************************************************************************
**                                                                               **
**                                  TÍTOL: Math is fun 8                         **
**                                                                               **
**   Nom: Kevin Steven Bermeo Alvarado                           Data:04/02/2017 **

**********************************************************************************/

//************************* INCLUDE ***********************************************

//************************** VARIABLES ********************************************
long drive_gb = 100;
long drive_mb;
long drive_kb;
long real_drive_mb;
long real_drive_kb;
//********** Setup ****************************************************************

void setup()                                         // run once time 

{
  Serial.begin(9600);
  Serial.print("Yore HD is ");
  Serial.println(drive_gb);
  Serial.print("GB large ");

  drive_mb = 1024 * drive_gb;


  Serial.print("In theory, it can store ");
  Serial.println(drive_mb);
  Serial.print ( "Megabytes, ");
  drive_kb = 1024 * drive_mb;
  Serial.print(drive_kb);
  Serial.println(" Kilobytes."); 
  Serial.print("But it really only stores ");
  real_drive_mb = 1000 * drive_gb;
  Serial.print(real_drive_mb);
  Serial.print(" Megabytes, ");
  real_drive_kb = 1000* real_drive_mb;
  Serial.print(real_drive_kb);
  Serial.println(" Kilobytes. ");
  Serial.print("You are missing ");
  Serial.print(drive_kb - real_drive_kb);
  Serial.println("Kilobytes ");
}

void loop ()

{ 
   // we need this to be here even though  its empty
}


//*********************** FUNCIONS *************************************************

//Calculate GB to MB and to KB 
