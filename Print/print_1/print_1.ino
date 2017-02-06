
/**********************************************************************************
**                                                                               **
**                                  TÍTOL: Print 1                               **
**                                                                               **
**   Nom: Kevin Steven Bermeo Alvarado                           Data:04/02/2017 **

**********************************************************************************/

//************************* INCLUDE ***********************************************

//************************** VARIABLES ********************************************

int num = 64;

//********** Setup ****************************************************************
 

void setup()          // run once time

{
  Serial.begin(9600);    // set up Serial library at 9600 bps

  Serial.println("Different formats for the same number:");

  Serial.write(num);            //send the value as a single byte
  Serial.println();             //print value in serial port 

  Serial.println(num);
  Serial.println(num, DEC);    //print value as a decimal number
  
  Serial.println(num, BIN);    //print value as a binari number

  Serial.println(num, HEX);     //print value as a hexagesimal number

  Serial.println(num, OCT);     //print value as a octogesimal numer

}
//********** Loop ****************************************************************
void loop ()

{
  // we need this to be here even though  its empty
}


//*********************** FUNCIONS *************************************************

//Show nummer 64 in 5 diferents formats 
