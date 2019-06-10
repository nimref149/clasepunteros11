#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Employee.h"
#include "Controller.h"
#include "parser.h"
#define PATHB "data.dat"



/** \brief Carga los datos de los empleados desde el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_loadFromText(char* path, LinkedList* pArrayListEmployee)
{

    FILE* miArchivo;
    if(path!=NULL&&pArrayListEmployee!=NULL)
    {
        miArchivo=fopen(path,"r");
        parser_EmployeeFromText(miArchivo,pArrayListEmployee);

        /*valid=parser_EmployeeFromText(miArchivo,pArrayListEmployee);
        if(valida!=0){
        fclose(miArchivo);
        }
        */
        fclose(miArchivo);
    }
/*
    char id[500],nombre[500],horasTrabajas[500],sueldo[500];

    LinkedList* lista[1001];

    int cont=0;

    FILE * pFile;

    pFile = fopen (path, "a+");

    fscanf(pFile, "%[^,],%[^,],%[^,],%[^,],%[^\n]\n",id,nombre,horasTrabajadas,sueldo);

    while(!feof(pFile))
    {

        fscanf(pFile, "%[^,],%[^,],%[^,],%[^\n]\n",id, nombre, horasTrabajas,sueldo);

        producto = (eProducto*)malloc(sizeof(eProducto));
        producto->codigo = atoi(codigo);
        producto->categoria = atoi(categoria);
        strcpy(producto->descripcion, descripcion);
        producto->precio = atof(precio);

        //  printf("TEXTO : %s - %s - %s - %s\n", codigo, descripcion, categoria, precio);
        lista[cont] = producto;
        //printf("STRUCT: %d - %s - %d - %.2f\n", producto.codigo, producto.descripcion, producto.categoria, producto.precio);
        cont++;
    }
    */
    return 1;

}

/** \brief Carga los datos de los empleados desde el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_loadFromBinary(char* path , LinkedList* pArrayListEmployee)
{

    int i;
    if(path != NULL && pArrayListEmployee != NULL)
    {
        FILE* MAB;


        MAB = fopen(PATHB, "rb");
        parser_EmployeeFromBinary(MAB, pArrayListEmployee);
        fclose(MAB);
    }

    return 1;
}

/** \brief Alta de empleados
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_addEmployee(LinkedList* pArrayListEmployee)
{
    return 1;
}

/** \brief Modificar datos de empleado
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_editEmployee(LinkedList* pArrayListEmployee)
{
    return 1;
}

/** \brief Baja de empleado
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_removeEmployee(LinkedList* pArrayListEmployee)
{
    return 1;
}

/** \brief Listar empleados
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_ListEmployee(LinkedList* pArrayListEmployee)
{
   int i;
    Employee* aux;

    printf("\n\nLista de empleados\n");
    printf("id   |Nombre              |sueldo     |horas trabajadas\n");
    for(i=0;i<ll_len(pArrayListEmployee);i++)
    {
        aux= (Employee*)  ll_get(pArrayListEmployee, i);
        employee_list(aux);

    }

    system("pause");

    return 1;
}

/** \brief Ordenar empleados
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_sortEmployee(LinkedList* pArrayListEmployee)
{





    return 1;
}

/** \brief Guarda los datos de los empleados en el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_saveAsText(char* path , LinkedList* pArrayListEmployee)
{
    return 1;
}

/** \brief Guarda los datos de los empleados en el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_saveAsBinary(char* path , LinkedList* pArrayListEmployee)
{
    return 1;
}

