#include "Employee.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Employee* employee_new()
{
    Employee* unEmpleado=(Employee*)malloc(sizeof(Employee));
    return unEmpleado;
}

Employee* employee_newParametros(char* idStr,char* nombreStr,char* horasTrabajadasStr,char* sueldoStr)
{
    Employee* unEmpleado=(Employee*)malloc(sizeof(Employee));

    unEmpleado->id=atoi(idStr);//esto es como un unEmpleado.id=atoi(idStr);hay que convertir por que son numeros en caracteres, por eso el uso de atoi
    strcpy(unEmpleado->nombre,nombreStr);
    unEmpleado->horasTrabajadas=atoi(horasTrabajadasStr);
    unEmpleado->sueldo=atoi(sueldoStr);

    return unEmpleado;
}


/*tengo que empesar a recorrer cada uno de los nodos,
while(actual!=null)
{
actual=actual->prenode
indice++;

}
if(!(addnode(ths,indice,pelement))
 {
 retorno=o;

 }
 return retorno;















































