#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//comentario
typedef struct
{
    int matricula;
    char nombre[20];
    char nombre2[20];
    char apellido[20];
    char apellido2[20];
    char carrera[20];
    float indice;
    int ingreso;
    int proceso;
    char condicion[20];
}pucmm;
void escribe(FILE *); /* Prototipo de función. */
 void open();
 //void lee(FILE *);
 void searchByID(int);
 //comment
int main() {

    FILE *ar;
    if ((ar = fopen("ad1.dat", "r+")) != NULL){
        escribe(ar);
        open();
        }
    else {
        printf("\nEl archivo no se puede abrir");
    fclose(ar);
}
}
void escribe(FILE *ap) {
/* Esta función sirve para leer los datos de los alumnos utilizando una
estructura tipo alumno, que se almacenará posteriormente en un archivo. */

    pucmm alu;
    int i = 0, r;
    printf("\n¿Desea ingresar informacion sobre alumnos? (Si-1 No-0): \n");
    scanf("%d", &r);
    while (r)
    {
i++;
     printf("\nIngrese la matricula del alumno %d: ",i);
    scanf("%d", &alu.matricula);
    fflush(stdin);
    printf("Ingrese el primer nombre del alumno %d: ",i);
    gets(alu.nombre);
    printf("Ingrese el segundo nombre del alumno %d: ",i);
    gets(alu.nombre2);
    printf("Ingrese el primer apellido del alumno %d: ",i);
    gets(alu.apellido);
    printf("Ingrese el segundo apellido del alumno %d: ",i);
    gets(alu.apellido2);
    printf("Ingrese la carrera del alumno %d: ",i);
    gets(alu.carrera);
    printf("Ingrese el indice del alumno %d: ",i);
    scanf("%f", &alu.indice);
    fflush(stdin);
    printf("Ingrese el anio de ingreso del alumno %d: ",i);
    scanf("%d",&alu.ingreso);
    printf("Ingrese los anios en la carrea del alumno %d: ",i);
    scanf("%d",&alu.proceso);
    system("cls");
    if(alu.indice>=2.5)
    strcpy(alu.condicion,"regular");
    else
    strcpy(alu.condicion,"a prueba");
    fwrite(&alu, sizeof(pucmm), 1, ap);

 printf("\n¿Desea ingresar informacion sobre mas alumnos? (Sí-1 No-0): \n");
        scanf("%d", &r);
        fflush(stdin);
        }
}


void open() {
    FILE *es;
    if ((es = fopen ("ad1.dat", "r")) != NULL)
        lee(es);
    else
        printf("\nEl archivo no se puede abrir");
    fclose(es);
}



    void searchByID(int ID)
    {
        printf("Please enter ID: ");
        scanf("%d", &ID)
FILE *file;
//void open();
file=fopen("ad1.dat","r");

while ((word=fgetc(file))!=EOF){
    if (ID == i)
}
printf("'%d' is found %d times in the txt file\n",num,numcount1);
printf("'%d' is found %d times in the txt file\n",num2,numcount2);
fclose(file);

 system("pause");
    }


    void lee(FILE *ap1){
/* Esta función se utiliza para leer bloques de un archivo de acceso directo. */
   pucmm alu;
    fread(&alu, sizeof(pucmm), 1, ap1);
    while (!feof(ap1))
    {
         printf("\nDatos del alumno %d\n");
    printf("%d\n", alu.matricula);
    puts(alu.nombre);
    puts(alu.nombre2);
    puts(alu.apellido);
    puts(alu.apellido2);
    puts(alu.carrera);
    printf("%.1f\n", alu.indice);
    printf("%d\n", alu.ingreso);
    printf("%d\n", alu.proceso);
    puts(alu.condicion);
    fread(&alu, sizeof(pucmm), 1, ap1);
    }



