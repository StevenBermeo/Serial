
/**********************************************************************************
**                                                                               **
**                                  TÍTOL: Print 2                               **
**                                                                               **
**   Nom: Kevin Steven Bermeo Alvarado                           Data:04/02/2017 **

**********************************************************************************/

//************************* INCLUDE ***********************************************

//************************** VARIABLES ********************************************

int thisByte = 33;

//********** Setup ****************************************************************
 

void setup()          // run once time

{
  
  Serial.begin(9600); 
  Serial.println("ASCII Table ~ Character Map"); 

}
//********** Loop ****************************************************************
void loop ()

{
  Serial.write(thisByte);    
  
  Serial.print(", dec: "); 
  Serial.print(thisByte);      
  Serial.print(", hex: "); 
  Serial.print(thisByte, HEX);     
  Serial.print(", oct: "); 
  Serial.print(thisByte, OCT);     
  Serial.print(", bin: "); 
  Serial.println(thisByte, BIN);   

  if(thisByte == 126)  // if printed last visible character '~'
  { 
    while(true)
    { 
    } 
  } 
  thisByte++;     // go on to the next character

}


//*********************** FUNCIONS *************************************************

//Show nummer 64 in 5 diferents formats 
