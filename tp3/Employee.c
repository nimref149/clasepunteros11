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
*/
int employee_setId(Employee* this,int id)
{
    int estado=0;
    if(this!=NULL)
    {
        this->id=id;
        estado=1;
    }

    return estado;
}
int employee_getId(Employee* this,int* id)
{
    id=&(this->id);
    return 1;

}
int employee_setNombre(Employee* this,char* nombre)
{
    int estado=0;
    if(this!=NULL)
    {
        strcpy(this->nombre,nombre);
        estado=1;
    }

    return estado;

}
int employee_getNombre(Employee* this,char* nombre)
{
    nombre=this->nombre;
    return 1;
}

int employee_setHorasTrabajadas(Employee* this,int horasTrabajadas)
{
    int estado=0;
    if(this!=NULL)
    {
        this->horasTrabajadas=horasTrabajadas;
        estado=1;
    }

    return estado;
}
int employee_getHorasTrabajadas(Employee* this,int* horasTrabajadas)
{
    horasTrabajadas=&(this->horasTrabajadas);
    return 1;
}

int employee_setSueldo(Employee* this,int sueldo)
{
    int estado=0;
    if(this!=NULL)
    {
        this->sueldo=sueldo;
        estado=1;
    }

    return estado;
}
int employee_getSueldo(Employee* this,int* sueldo)
{
    sueldo=&(this->sueldo);
    return 1;
}

int employee_sort(Employee* e1,Employee* e2)
{
        return strcmp(e1->nombre,e2->nombre);
}

int employee_list(Employee* this)
{
    printf("%5d %20s %10d        %10d\n",this->id,this->nombre,this->sueldo,this->horasTrabajadas);

    return 1;
}

