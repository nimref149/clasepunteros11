#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Employee.h"
#include "parser.h"

/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int parser_EmployeeFromText(FILE* pFile, LinkedList* pArrayListEmployee)
{
    //int validar=1;tipo de validacion
    char id[100],nombre[100], horasTrabajadas[100], sueldo[100];
    Employee* aux;
    if(pFile!=NULL)
    {
        fscanf(pFile, "%[^,],%[^,],%[^,],%[^\n]\n", id,nombre,horasTrabajadas,sueldo);
        while(!feof(pFile))
        {

            fscanf(pFile, "%[^,],%[^,],%[^,],%[^\n]\n", id,nombre,horasTrabajadas,sueldo);

            aux=employee_newParametros(id,nombre,horasTrabajadas,sueldo);

            ll_add(pArrayListEmployee,aux);

            printf("\n%d\n",ll_len(pArrayListEmployee));
        }
    }
    /*else{ talves agregar esto para mejorar programar
    validar=0;
    }
    */
    //return validar;
    return 1;
}

/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int parser_EmployeeFromBinary(FILE* pFile, LinkedList* pArrayListEmployee)
{

    if(pFile != NULL && pArrayListEmployee != NULL)
    {
        while(!feof(pFile)-1)
        {
            Employee* aux = employee_new();
            fread(aux, sizeof(Employee), 1, pFile);
            ll_add(pArrayListEmployee, aux);
        }
    }

    return 1;
}
