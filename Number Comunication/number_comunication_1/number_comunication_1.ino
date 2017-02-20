
/**********************************************************************************
**                                                                               **
**                                  TÍTOL: Number comunication  1                **
**                                                                               **
**   Nom: Kevin Steven Bermeo Alvarado                           Data:04/02/2017 **
**********************************************************************************/

//************************* INCLUDE ***********************************************

//********** Variables ********************************************************
float r1, r2;             // variables for the R's
float rSerie, rParalel;   // variables for the results
//********** Setup ************************************************************
void setup() {
  Serial.begin(9600);        // initialize serial
  Serial.println("Entra el valor de r1 i r2 (separats per una coma)");
}
//********** Loop *************************************************************
void loop() {
  while (Serial.available() > 0) {                                  // Si hay una libreía disponible, procedera a leerla
    r1 = Serial.parseInt();                                         // Buscara un valor válido en el Stream, que es la base de datos para binarios.
     Serial.print ("r1 = ");
      Serial.print (r1);
      Serial.print  (" ohms   ");                                   //Muestra el valor de r1
    r2 = Serial.parseInt();                                         //Busca el siguiente valor válido en el Stream
      Serial.print ("r2 = ");
      Serial.print (r2);
      Serial.println (" ohms ");                                    //Muestra el valor de r2
    rSerie = r1 + r2;      rParalel = ((r1 * r2) / (r1 + r2));      //Hace el cálculo de las variables rSerie i rParalel
      Serial.print("rSerie = ");
      Serial.print(rSerie);
      Serial.print(" ohms   ");                                      //Muestra el valor de variable rSerie
      Serial.print("rParalel = ");
      Serial.print(rParalel);
      Serial.println(" ohms ");                                      //Muestra el valor variable rParalel
    if (Serial.read() == '\n')                                       //Una vez leido el serial agrega una linea nueva
    { //look for newline. Is the end of your sentence
      Serial.println("Entra nous valors per r1 i r2");      //mostra el resultats i fa de nou la pregunta inicial)
    }
  }
}
