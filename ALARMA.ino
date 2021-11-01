#define LED 9     //El LED esta conectado en el pin 9 
#define LDR 0     //El LDR esta conectador en el pin A0

int luz = 0;       
int valor_sensor = 0;       
int valor_limite = 100;  //Este valor hara que el LED cambie de estado a una determinada luminosidad (podeis con distintos valores para ajustar la sensibilidad)


void setup() { 
//Configuracion de los pin como entrada o salida  
Serial.begin(9600);
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
  

  
  

  pinMode(LDR,INPUT);
}

void loop ()  //Configuracion de los valores del LDR
{
  valor_sensor = analogRead(LDR); 
  luz = (5.0 * valor_sensor * 100.0)/1024.0; //Hacemos que el valor luz este entre 0 y 1023, es decir 1024 valores.           
  delay(100);     
    Serial.println(luz);
    if (valor_limite>=luz) {
      digitalWrite(13,HIGH);
      digitalWrite(12,HIGH);
      digitalWrite(11,HIGH);
      digitalWrite(10,HIGH);
    }
    else {
        digitalWrite(13,LOW);
      digitalWrite(12,LOW);
      digitalWrite(11,LOW);
      digitalWrite(10,LOW);
      
      }
    
 
}
