/*
    utest example : Unit test examples.
    Copyright (C) <2018>  <Mauricio Davila>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef __LINKEDLIST
#define __LINKEDLIST
struct Node
{
    void* pElement;
    struct Node* pNextNode;
}typedef Node;

struct LinkedList
{
    Node* pFirstNode;
    int size;
}typedef LinkedList;
#endif



//Publicas
//USAR MINIMO!!
//ll_newLinkedList,Crea y retorna un nuevo LinkedList. Es el constructor, yaque en �l crearemos la struct y daremos valores iniciales a los campos
//ll_deleteLinked,  Elimina el LinkedList
//ll_add, Agrega un elemento al final de LinkedList..
//ll_remove,Elimina un elemento en LinkedList, en el �ndice
//ll_get,Agrega un elemento al final de LinkedList.

//ll_len.Retorna el tama�o del LinkedList <<<<<------------

// O LEE BINARIO O EN TEXTO<----NO NESESARIAMENTE, HACERLO COMO DICE EL TP Y NADA MAS AL PIE DE LA LETRA SI DICE QUE LEA AMBOS DEBE LEER AMBOS!
LinkedList* ll_newLinkedList(void);//<<<----
int ll_len(LinkedList* this);//<<<<<------
Node* test_getNode(LinkedList* this, int nodeIndex);
int test_addNode(LinkedList* this, int nodeIndex,void* pElement);
int ll_add(LinkedList* this, void* pElement);//<<<<<------
void* ll_get(LinkedList* this, int index);//<<<<<<-------
int ll_set(LinkedList* this, int index,void* pElement);
int ll_remove(LinkedList* this,int index);//<<<<<-------
int ll_clear(LinkedList* this);
int ll_deleteLinkedList(LinkedList* this);//<<<<--------
int ll_indexOf(LinkedList* this, void* pElement);
int ll_isEmpty(LinkedList* this);
int ll_push(LinkedList* this, int index, void* pElement);
void* ll_pop(LinkedList* this,int index);
int ll_contains(LinkedList* this, void* pElement);
int ll_containsAll(LinkedList* this,LinkedList* this2);
LinkedList* ll_subList(LinkedList* this,int from,int to);
LinkedList* ll_clone(LinkedList* this);
int ll_sort(LinkedList* this, int (*pFunc)(void* ,void*), int order);
