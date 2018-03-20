/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   lista.h
 * Author: Nandi
 *
 * Created on 19 de marzo de 2018, 04:18 PM
 */

#ifndef LISTA_H
#define LISTA_H

#include "nodo.h"

using namespace std;

#include <iostream>

class lista {
public:
    lista();
    virtual ~lista();
    
    virtual string toString();
    
    // metodos de la clase
    
    
private:
    nodo* primero;
    nodo actual;
};

#endif /* LISTA_H */

