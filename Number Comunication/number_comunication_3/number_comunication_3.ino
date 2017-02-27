
/**********************************************************************************
**                                                                               **
**                                  TÍTOL: Number comunication  3                **
**                                                                               **
**   Nom: Kevin Steven Bermeo Alvarado                           Data:04/02/2017 **
**********************************************************************************/

//************************* INCLUDE ***********************************************

//********** Variables ********************************************************
long n;
long q;
long a;
//********** Setup ************************************************************
void setup() {
  Serial.begin(9600);        // initialize serial
  Serial.println("Entra un numero?");
}
//********** Loop *************************************************************
void loop()
{
  while (Serial.available() > 0)
  { // Si hay una libreía disponible, procedera a leerla
    n = Serial.parseInt();                                         // Buscara un valor válido en el Stream, que es la base de datos para binarios.
    Serial.print ("El ");
    Serial.print (n);                                            //Muestra el valor que le introduzcamos
    Serial.print  (" te ");

    if ( Serial.read() == '\n' )                                // Mira que se cumpla la solución
    {
      while ( n != 0)                                           //Si la variable es diferente de 0 realiza la accion hasta que esta se incumpla
      {
        q = n / 10;                                             //Realiza la operación  
        n = q;                                                  //Actualiza el valor de n
        a++ ;                                                   //Incrementa 1 al valor de a  
      }

      Serial.print(a);                                          //Inserta el valor de a
      Serial.println (" xifres. ");
      Serial.println ( );
      Serial.println ("Entra un numero?");                      //Vuelve a hacer la pregunta
      a=0;                                                      //Reinicia el valor de a
    }
  }

}
