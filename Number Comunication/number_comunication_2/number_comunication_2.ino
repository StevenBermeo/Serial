
/**********************************************************************************
**                                                                               **
**                                  TÍTOL: Number comunication  2                **
**                                                                               **
**   Nom: Kevin Steven Bermeo Alvarado                           Data:04/02/2017 **
**********************************************************************************/

//************************* INCLUDE ***********************************************

//********** Variables ********************************************************
long n;
long r;
//********** Setup ************************************************************
void setup() {
  Serial.begin(9600);        // initialize serial
  Serial.println("Entra un numero?");
}
//********** Loop *************************************************************
void loop()
{
  while (Serial.available() > 0) 
  {                                  // Si hay una libreía disponible, procedera a leerla
    n = Serial.parseInt();                                         // Buscara un valor válido en el Stream, que es la base de datos para binarios.
      Serial.print ("El ");
      Serial.print (n);                                            //Muestra el valor que le introduzcamos
      Serial.print  (" es ");                           
     r=n%2;
     
  if ( r == 0 )
  {
      Serial.println  ("parell.");
  }
  else 
  {
    Serial.println ("senar");
  }
   if (Serial.read() == '\n')                                       //Una vez leido el serial agrega una linea nueva
    {                                                         //look for newline. Is the end of your sentence
      Serial.println( );
      Serial.println("Entra un numero?");      //mostra el resultats i fa de nou la pregunta inicial)
    }
  }
  }
