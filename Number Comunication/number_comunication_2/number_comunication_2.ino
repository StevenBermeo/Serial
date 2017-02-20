
/**********************************************************************************
**                                                                               **
**                                  TÍTOL: Number comunication  2                **
**                                                                               **
**   Nom: Kevin Steven Bermeo Alvarado                           Data:04/02/2017 **
**********************************************************************************/

//************************* INCLUDE ***********************************************

//********** Variables ********************************************************
long n;

//********** Setup ************************************************************
void setup() {
  Serial.begin(9600);        // initialize serial
  Serial.println("Entra un número?");
}
//********** Loop *************************************************************
void loop() {
  while (Serial.available() > 0) {                                  // Si hay una libreía disponible, procedera a leerla
    n = Serial.parseInt();                                         // Buscara un valor válido en el Stream, que es la base de datos para binarios.
      Serial.print ("El ");
      Serial.print (n);
      Serial.print  ("es ");                                   //Muestra el valor de r1
      r=n/2
    if 
    if (Serial.read() == '\n')                                       //Una vez leido el serial agrega una linea nueva
    { //look for newline. Is the end of your sentence
      Serial.println("Entra nous valors per r1 i r2");      //mostra el resultats i fa de nou la pregunta inicial)
    }
  }
}
