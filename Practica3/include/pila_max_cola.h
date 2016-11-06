/***
   * @file Pila_max_Cola.h
   * @brief Fichero cabecera del TDA Pila_max_Cola
   * Pila ordenada implementada a partir de cola.h
   *
   * @author Sofía Almeida Bruno (@SofiaAlmeida)
   * @author Jesús Sánchez de Lechina Tejada (@jojelupipa)
   * @author Pedro Bonilla Nadal (@pedrobn23)
   */

#ifndef __PILA_MAX_COLA_H__
#define __PILA_MAX_COLA_H__

#include <cassert>
#include <algorithm>    // std::swap
#include "cola.h"

using namespace std;
/***
   *  @brief T.D.A. Pila_max_Cola
   *
   * La descripción de este T.D.A coincide con la del T.D.A @pila_max.h
   * Este archivo contiene el módulo realizado a partir de colas
   *
   *
   */

template <class T>
class Pila_max {
private:
   Cola<elemento<T> > pila;

public:
/***
   * @brief Constructor por defecto
   * @post pila vacía
   */
   Pila_max();

/***
   * @brief Constructor de copia
   * @param p Pila a copiar en el objeto implícito
   */
   Pila_max(const Pila_max &p) {
      pila = p.pila;
   }

/***
   * @brief Destructor
   */
  ~Pila_max();

/***
   * @brief Agregar un elemento al comienzo de la pila
   * @param e elemento a insertar
   * @post pila con el elemento máximo en elemento.max
   *///FIXME template
   void push(const T &dato);

/***
   * @brief Eliminar el último elemento añadido
   * @post Pila sin el tope
   */
   void pop() {
      pila.quitar();
   }

/***
   * @brief Devuelve el tope de la pila
   */
   elemento<T> top() {
      return pila.frente();
   }

/***
   * @brief Devuelve el tope de la pila constante
   */
   elemento<T> top() const {
      return pila.frente();
   }

/***
   * @brief Devuelve si la pila tiene elementos o no
   * @retval 1 si está vacía
   */
   bool empty() {
      return pila.vacia();
   }

/***
   * @brief Sobrecarga operador de asignación
   * @param p Pila a asignar
   * return Objeto implícito
   */
   Pila_max& operator=(const Pila_max &p);
};
#include "../src/Pila_max_Cola.cpp" //FIXME

#endif
