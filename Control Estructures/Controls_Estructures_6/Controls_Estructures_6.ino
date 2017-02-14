
/**********************************************************************************
**                                                                               **
**                                  TÍTOL: Control Estructures 6                 **
**                                                                               **
**   Nom: Kevin Steven Bermeo Alvarado                           Data:04/02/2017 **

**********************************************************************************/

//************************* INCLUDE ***********************************************

//************************** VARIABLES ********************************************

 int comptar = 11;

//********** Setup ****************************************************************


void setup()                                                  // run once time

{
   Serial.begin(9600);       // Abre la librería 9600 
  Serial.print("Ara comptare de 0 a ");   //Copiará la frase entre comillas en la pantalla
  Serial.println(comptar);                //Copiará el valor de la variable comptar y seguira escribiendo en la siguiente línea
  for (int i=0; i <= comptar; i++)        //Inicia la función for y se establece dentro del bloque for la variable "i",siempre que la condición se cumple se repite
                                          //y suma 1 a la variable "i", hasta que la condición no se cumpla y para de sumar 1 a la variable "i" 
   {
    Serial.print(i);
    Serial.print("-");
  } 
}

//********** Loop ****************************************************************
void loop ()
{
}
//*********************** FUNCIONS *************************************************

// Realizar una acción siempre una y otra vez mientras se cumple la condición. Si esta condición deja de existir parar de realizar la acción
