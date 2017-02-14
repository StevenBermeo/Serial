
/**********************************************************************************
**                                                                               **
**                                  TÍTOL: Control Estructures 8                 **
**                                                                               **
**   Nom: Kevin Steven Bermeo Alvarado                           Data:04/02/2017 **

**********************************************************************************/

//************************* INCLUDE ***********************************************

//************************** VARIABLES ********************************************

 int comptar = 11;
 int i = 0;

//********** Setup ****************************************************************


void setup()                                                  // run once time

{
   Serial.begin(9600);       // Abre la librería 9600 
  Serial.print("Ara comptare de 0 a ");   //Copiará la frase entre comillas en la pantalla
  Serial.println(comptar);                //Copiará el valor de la variable comptar y seguira escribiendo en la siguiente línea
  while ( i <= comptar)        //Inicia la función for y se establece dentro del bloque for la variable "i",siempre que la condición se cumple se repite
                                          //y suma 1 a la variable "i", hasta que la condición no se cumpla y para de sumar 1 a la variable "i" 
   {
    Serial.print(i);
    Serial.print("-");
    i++;
  } 
}

//********** Loop ****************************************************************
void loop ()
{
}
//*********************** FUNCIONS *************************************************

// Con la función for sabremos cuando va a parar de repetir el proceso, mientras que con while no lo sabremos con seguridad
