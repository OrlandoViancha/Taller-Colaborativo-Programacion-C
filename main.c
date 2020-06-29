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
           printf("[%d]",n);
           
            
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


int NumeroMagico(int num){
    int Magico=num;
    int cont=0;
    int guardar=num;
    int operation=0;
    int verificar=0;
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
    if(operation==Magico){
        verificar=1;
    }
    else{
        verificar=0;
    }
    return verificar;
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

void SumaDigitos(int intervaloUno, int intervaloDos,int numOmitir){
    
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
    int  i, j,digito;
    int cantidad, sumacifras=0;
    
    
    
    cantidad=intervaloDos-intervaloUno+1;
    
    int guardarnumero[cantidad-1];
    
    printf("Cantidad de números en el rango: %d \n",cantidad);
    printf("Números en el intervalo: ");
    
    int posicion=0;
    for(int i=intervaloUno;i<=intervaloDos;i++){
        guardarnumero[posicion]=i;
        
        printf("%d ",i);
        posicion++;
        
    }
    
    
    for(int j=0;j<=cantidad-1;j++){
        separarIntervalos (guardarnumero[j],numOmitir);
    }
    
    printf ("\nTotal suma: %d \n", suma);
    printf ("Repeticiones del numero 1 a omitir : %d \n", contador);
    
    
   
}

char* funcion (int n){
    char* cadena="";
    char* s1="";
    char*s2="";
	if (n==0){
		cadena="0";
	}
	
    else if (n==1){
		cadena="1";
	}
	
    else if (n>=2){
            s1=funcion(n-1);
            s2=funcion(n-2);
             const size_t len1 = strlen(s1);
             const size_t len2 = strlen(s2);
            char *result = malloc(len1 + len2 + 1); 
            memcpy(result, s1, len1);
            memcpy(result + len1, s2, len2 + 1);
            cadena=result;
	}
	return cadena;
}
int Fibonacci(char* cadena1,char* cadena2){
    char*busqueda=NULL;
    busqueda=strstr(cadena1,cadena2);
    int i=0;
    while(busqueda!=0){
        i++;
        busqueda=strstr(busqueda+1,cadena2);
    }
    return i;
    
}

int Score(char* cadena1){
    int cont=0;
    int suma=0;
    
    for(int i=0;i<strlen(cadena1);i++){
        if(cadena1[i]!='X'){
            cont++;
            suma=suma+cont;
        }
        else{
            cont=0;
        }
    }

    return suma;
}

void main() {
  int Opcion=0;
    int primo=0;
   int numero=0;
   char* estatura=0;
    char* peso=0;
    char* sexo=0;
    int imc=0;
     char* repite = 0;
     char *cadena2;
     char* intervaloUno="";
     char* intervaloDos="";
     char*numOmitir="";
     int rango=0;
     char *upper=0;
    do{
        
        
      printf("\n<<Menu Principal Ejercicios>>>\n\n"
      "1.Numeros primos desendentes\n"
       "2.Numero Egolatra\n"
     "3.Numero  Magico\n"
      "4.Indice  masa corporal\n"
      "5.suma de  digitos\n"
      "6.palabras fibonacci\n"
      "7.juego \n\n"
      "Digite ([0]-salir)...");
      
      scanf("%d",&Opcion);
       
      switch(Opcion){
          case  1:
               do{
              printf("----NUMEROS PRIMOS------\n\n");
               printf("Introduzca un numero ");
               scanf("%s", &repite);
               primo=validar_numero(&repite);
               }while(primo==0);
                
               printf("Estos son los numeros primos:");
              CalcularNumerosPrimos(atoi(&repite));
              break;
              
              case  2:
                  do{
                  printf("\n----NUMERO EGOLATRA------\n\n");
                  printf("Introduzca un numero  ");
                  scanf("%s",&repite);
                  
                  numero=validar_numero(&repite);
                 
                  }while(numero==0);
                   if(Egolatra(atoi(&repite))==1){
                      printf("El numero es Egolatra");
                  }
                  else if(Egolatra(&repite)==0){
                      printf("El numero no es Egolatra");
                      
                  } 
                     repite=1;
                  
              break;
              
              case  3:
                  do{
                   printf("----NUMERO MAGICO------\n\n");
                    printf("Introduzca un numero  ");
                  scanf("%s", &repite);
                  numero=validar_numero(&repite);
                  }while(numero==0);
                  if(NumeroMagico(atoi(&repite))==1){
                      printf("El numero es magico");
                  }
                  else{
                      printf("El numero no es magico");
                  }
                  
                  
              break;
              
              
              case  4:
                   printf("----CALCULO IMC------\n\n");
                   do{
                   printf("Introduzca su estatura en cm : ");
                   
                    scanf("%s", &estatura);
                    numero=validar_numero(&estatura);
                    }while(numero==0);
                     do{
                   printf("Introduzca el peso en kg: ");
                   scanf("%s", &peso);
                   numero=validar_numero(&peso);
                   }while(numero==0);
                   do{
                    printf("Introduzca el sexo(1 para M) - (2 para F): ");
                    scanf("%s", &sexo);
                    numero=validar_sexo(&sexo);
                     }while(numero==0);
                    imc= IMC(atoi(&estatura),atoi(&peso),atoi(&sexo));
       
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
       
              break;
              
              case  5:
                   do{
                    printf("----SUMA DIGITOS------\n\n");    
                   printf("Digite el primer número del rango:\n ");
                   printf("Digite Rango  de  forma  ordenada #1 en adelante: ");
                   scanf("%s", &intervaloUno);
                   numero=validar_numero(&intervaloUno);
                   }while(numero==0);
                   do {
                       do{
                   printf("Digite el segundo número del rango: ");
                   scanf("%s", &intervaloDos);
                   
                   numero=validar_numero(&intervaloDos);
                   rango=validar_rango(atoi(&intervaloUno),atoi(&intervaloDos));
                   
                   
                       }while(numero==0);
                   
                    }while(rango==0);
                    do{
                   printf ("Digite el numero a omitir: ");
                  scanf("%s", &numOmitir);
                  numero=validar_numero(&numOmitir);
                  }while(numero==0);
                  
                  SumaDigitos(atoi(&intervaloUno),atoi(&intervaloDos),atoi(&numOmitir));
              break;
              
              case  6:
                  
                  do{
                  printf("----SERIE FIBONACCI------\n\n");
                  printf("Introduzca el numero para hallar la serie Fibonacci ");
                  scanf("%s", &repite);
                  numero=validar_numero(&repite);
                  }while(numero==0);
                  do{
                  printf("Introduzca el patron de bits para buscarlo dentro de la serie Fibonacci "); 
                 scanf("%s", &cadena2);
                 numero=validar(&cadena2);
                  }while(numero==0);
                 char* cadena1=funcion(atoi(&repite));
                 printf("El patron de bits se encontro ");
                 printf("%d",Fibonacci(cadena1,&cadena2));
                 printf(" veces");
              break;
              
              case  7:
                  do{
                       printf("----RESULTADO PRUEBA------\n\n");
                  printf("Ingrese el resultado de la prueba "); 
                 scanf("%s", &cadena2);
                 numero=validar_score(&cadena2);
                 }while(numero==0);
                 printf("%d",Score(&cadena2));
                  
              break;
              
          default:
              break;
      }
    
  }while(Opcion!=0);


}
int validar_rango(int rango,int rango2){
   
    if(rango>rango2){
        printf("\n El rango 1 tiene que ser menor que el rango 2\n");
        return 0;
    }
    return 1;
    
} 

int validar_numero(char numero[])
{
    int i;
    for(i=0; i<strlen(numero); i++)
    {
        if(!(isdigit(numero[i])))
        {
            printf("\nINGRESA SOLO NUMEROS ENTEROS \n");
            
            return 0;
        }
    }
    return 1;
}
int validar_score(char cadena[]){
    int i;
    for(i=0; i<strlen(cadena); i++)
    {
        if(cadena[i]!='X'&&cadena[i]!='O')
        {
            printf("\nINGRESA LA CADENA CON SOLO X Y O \n");
            
            return 0;
        }
    }
    return 1;
    
    
}
int validar(char cadena[]){
   int i;
    for(i=0; i<strlen(cadena); i++)
    {
        if(cadena[i]!='0'&&cadena[i]!='1')
        {
            printf("\nINGRESA LA CADENA CON SOLO 0 y 1 \n");
            
            return 0;
        }
    }
    return 1;
}

int validar_sexo(char cadena[]){
    int i;
    for(i=0; i<strlen(cadena); i++)
    {
        if(cadena[i]!='1'&&cadena[i]!='2')
        {
            printf("\nINGRESE UNA OPCION VALIDA \n");
            
            return 0;
        }
    }
    return 1;
    
    
}