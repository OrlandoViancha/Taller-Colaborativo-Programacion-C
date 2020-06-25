/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ASUS
 *
 * Created on 14 de junio de 2020, 07:17 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>


void  mainMenu30(){
    char Opcion;
    
  char *mainMenu30="<<<Menu Principal Ejercicios>>>/n/n"
    "1.Numeros primos desendentes/n"
   "2.Numero Egolatra/n"
   "3.Numero  Magico/n"
   "4.Indice  masa corporal/n"
   "5.suma de  digitos/n"
   "6.palabras fibonacci/n"
   "7.juego /n/n"
   "Digite ([S/s]-salir)...";
  do{
      printf(mainMenu30);
      scanf("%c",&Opcion);
      fflush(stdin);
      switch(Opcion){
          case  '1':CalcularNumerosPrimos(int numero );
              break;
              
              case  '2':
              break;
              
              case  '3':
              break;
              
              
              case  '4 ':
              break;
              
              case  '5 ':
              break;
              
              case  '6':
              break;
              
              case  '7':
              break;
      }
      {while(toupper(opcion)!= 'S');
  }
  
  
      


/*
 * 
 */

void CalcularNumerosPrimos(int numero ) {
    int num=0;
    int primo=0;
    for(int n=numero;n>=1;n--){
        int primo =0;
        for(int i=2;i<=n/2;i++){
            if(n%i==0){
                primo=1;
            }
        }
        if(primo==0){
           printf("[%d",n);
           
            
        }
    }   
    
}

int Egolatra(int num){
    int egolatra=0;
    int guardar=num;
    int cont=0;
    int suma=0;
    int compare=num;
    
    while(num>0){
        
        num=num/10;
        cont++;
    }
    
    
    while(guardar>0){
        suma=suma+(pow(guardar%10,cont));
        guardar=guardar/10;
    }
    
    
    if(compare==suma){
        egolatra=1;
    }
    else{
        egolatra=0;
    }
    
    return egolatra;
     
}


void NumeroMagico(int num){
    int cont=0;
    int guardar=num;
    int operation=0;
    
 while(num>0){
        
        num=num/10;
        cont++;
    }
    int x[cont];
    int i=0;
    while(guardar>0 &&i<cont){
        
            x[i]=guardar%10;
        
        guardar=guardar/10;
        i++;
    }
    
    operation=Descendente(cont,x)-Ascendente(cont,x);
    printf("%d",operation);
   
}
int Descendente(int cont, int x[]){
    int temp=0;
    int suma=0;
    for (int i=0; i <cont; i=i+1){
        for (int j=0; j <cont; j=j+1){
            if ( x[i] < x[j] ){

            temp= x[i];
            x[i]=x[j];
            x[j]=temp;
            }
        }
        
}
    
    for (int i=0; i <cont; i=i+1){
        
    }
    
    for(int i=0;i<=cont;i++){
        suma=suma+(x[i]*pow(10,i));
       
    }
    
   return suma ;
    
}
int Ascendente(int cont, int x[]){
    
    int aux=0;
    for (int i = cont; i >= 1; i--) {
        for (int j = 0; j <= i; j++) {
            if (x[j] < x[j+1])
          {
            aux = x[j];
            x[j]= x[j+1];
            x[j+1]= aux;
           }
    }
    }
    int suma=0;
   for(int i=cont;i>=0;i--){
        suma=suma+(x[i]*pow(10,i));
       
    }
    
    return suma;
    
}

int IMC(double estatura,double peso,int sexo){
    double operation=0;
    int imc=0;
    operation=peso/(pow(estatura/100,2));
    
    if(sexo==1&& operation<16){
        imc=1;
    }
    else if(sexo==1&&operation>=16&&operation<20){
        imc=2;
    }
    else if(sexo==1&&operation>=20&&operation<24){
        imc=3;
    }
    else if(sexo==1&&operation>=24&&operation<29){
        imc=4;
    }
    else if(sexo==1&&operation>=29&&operation<34){
        imc=5;
    }
    else if(sexo==1&&operation>=34&&operation<39){
        imc=6;
    }
    else if(sexo==1&&operation>=39){
        imc=7;
    }
    else if(sexo==2&& operation<17){
        imc=1;
    }
    else if(sexo==2&&operation>=17&&operation<20){
        imc=2;
    }
    else if(sexo==2&&operation>=20&&operation<25){
        imc=3;
    }
    else if(sexo==2&&operation>=25&&operation<30){
        imc=4;
    }
    else if(sexo==2&&operation>=30&&operation<35){
        imc=5;
    }
    else if(sexo==2&&operation>=35&&operation<40){
        imc=6;
    }
    else if(sexo==2&&operation>=40){
        imc=7;
    }
    
    return imc;
    
}




//metodo de  los  intervalos  de numeros 
void main(){
    
    int suma= 0;
int contador=0;

void separarIntervalos(int numero, int digito){
    char cadena[100000];
    sprintf(cadena, "%d", numero);
    int cantidad=strlen (cadena);
    
    for (int i=0; i<cantidad;i++){
        int n=(int) cadena[i]-48;
        if (n==digito){
            contador++;
        }else{
            suma=suma+n;
        }
       
    }
  
}
    
    
   int intervaloUno,intervaloDos, i, j,digito;
    int numOmitir=1;
    int cantidad, sumacifras=0;
    
    
    printf("Digite el primer número del rango:\n ");
     printf("Digite Rango  de  forma  ordenada #1 en adelante: ");
    scanf("%d", &intervaloUno);

    printf("Digite el segundo número del rango: ");
    scanf("%d", &intervaloDos);
    
    //printf ("Digite el numero a omitir: ");
    //scanf("%d", &numOmitir);
    
    
    cantidad=intervaloDos-intervaloUno+1;
    
    int guardarnumero[cantidad-1];
    
    printf("Cantidad de números en el rango: %d \n",cantidad);
    printf("Números en el intervalo: ");
    
    int posicion=0;
    for(i=intervaloUno;i<=intervaloDos;i++){
        guardarnumero[posicion]=i;
        
        printf("%d ",i);
        posicion++;
        
    }
    
    
    for(j=0;j<=cantidad-1;j++){
        separarIntervalos (guardarnumero[j],numOmitir);
    }
    
    printf ("\nTotal suma: %d \n", suma);
    printf ("Repeticiones del numero 1 a omitir : %d \n", contador);
    
    
   
}

void Fibonacci(int n){
    
   
    
    /*
    char*busqueda=NULL;
    char*cadena1="Hola Mundo Hola";
    char*cadena2="Hola";
    busqueda=strstr(cadena1,cadena2);
    int i=0;
    while(busqueda!=0){
        i++;
        busqueda=strstr(busqueda+1,cadena2);
    }
    printf("Total Coincidencias %i\n",i);
    * */
}
int main(int argc, char** argv) {
    
    double estatura=0;
    double peso=0;
    int sexo=0;
    int imc=0;
     printf("Introduzca un estatura: ");
       scanf("%lf", &estatura);
       
     printf("Introduzca el peso: ");
       scanf("%lf", &peso);
       
    printf("Introduzca el peso: ");
       scanf("%d", &sexo);
       /*CalcularNumerosPrimos(numero);*/
      /*
      if( Egolatra(numero)==0){
          printf("Este numero no es egolatra");
      }
      else {
          printf("Este numero  es egolatra");
      }*/

      /* NumeroMagico(numero);*/
      imc= IMC(estatura,peso,sexo);
       
      if(imc==1){
          printf("Tiene Desnutricion");
      }
      else if(imc==2){
          printf("Esta baja de peso");
      }
      else if(imc==3){
          printf("Esta Normal");
      }
      else if(imc==4){
          printf("Tiene Sobrepeso");
      }
      else if(imc==5){
          printf("Tiene Obesidad");
      }
      else if(imc==6){
          printf("Tiene Obesidad Marcada");
      }
      else if(imc==7){
          printf("Tiene Obesidad Morbida");
      }

//return (EXIT_SUCCESS);
}