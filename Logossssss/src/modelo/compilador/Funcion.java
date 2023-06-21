package modelo.compilador;
import java.util.ArrayList;
//Funcion es una clase abstracta, que crea el metodo abstracto ejecutar, de funcion se crean las subclases que heredan "ejecutar".
//Las subclases de funcion seran girar, avanzar y cambiar color.
public interface Funcion {
    public abstract void ejecutar(Object A, ArrayList parametros); //Se obtiene un objeto a modificar (figura) y su informaciòn como arraylist
}
