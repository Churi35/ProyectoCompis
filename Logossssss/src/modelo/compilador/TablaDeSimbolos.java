package modelo.compilador;

import java.util.ArrayList;
import java.util.Vector;

/* Viene siendo symbol.c  */
/* Aqui creamos un arreglo de simbolos, de acuerdo a clase par (nombre y objeto referenciado de cada simbolo)
implementamos metodo encontrar simbolo, insertar nuevo simbolo e imprimir en consola */

public class TablaDeSimbolos {

    ArrayList<Par> simbolos;
    
    public TablaDeSimbolos(){   //La tabla de simbolos como tal sera un arreglo de pares
        simbolos = new ArrayList<Par>();
    }
    
    public Object encontrar(String nombre){ //Buscando simbolo, instruccion necesaria para maquina pila
        for(int i = 0; i < simbolos.size(); i++)
            if(nombre.equals(simbolos.get(i).getNombre()))  //Si existe simbolo (nombre), se retorna el objeto del simbolo
                return simbolos.get(i).getObjeto();
        return null;
    }
    
    public boolean insertar(String nombre, Object objeto){  //Se inserta nuevo simbolo de acuerdo a las propiedades definidas como par
        Par par = new Par(nombre, objeto);
        for(int i = 0; i < simbolos.size(); i++)
            if(nombre.equals(simbolos.get(i).getNombre())){ //Si existe el objeto, ya no se agrega
                simbolos.get(i).setObjeto(objeto);
                return true;
            }
        simbolos.add(par);  //Si no existe, nunca retornamos por lo que añadimos al array dicho objeto (caracteristicas par)
        return false;
    }
    
    public void imprimir(){     //Imprimir simplemente manda el nombre y objeto en string al que hace  referencia cada uno de los simbolos añadidos en el momento a la consola.
        for(int i = 0; i < simbolos.size(); i++){
            System.out.println(simbolos.get(i).getNombre() + simbolos.get(i).getObjeto().toString());
        }
    }

}
