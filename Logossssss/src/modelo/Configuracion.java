package modelo;
import java.awt.Color;
import java.util.ArrayList;
/* Clase que define la configuacion de las firuas, a traves de metodos getter y
setter. Guardaremos posicion x,y, angulo y color*/
public class Configuracion{
    ArrayList<Linea> lineas;
    double x;
    double y;
    int angulo;
    Color color;    
    public Configuracion(){
        x = 0.0; y = 0.0;
        lineas = new ArrayList<Linea>(); //Tambien tomamos en cuenta las lineas que crean la figura
        color = Color.WHITE;
    }    
    public void agregarLinea(Linea linea){  
        lineas.add(linea);      //Podemos agregar nuevas lineas de acuerdo a la alteracion del codigo en pantalla
    }    
    public void setPosicion(double x, double y){this.x = x; this.y = y;}    
    public void limpiar(){lineas.clear();}       //Podemos limpiar, borrando todas las lineas
    public ArrayList<Linea> getLineas(){return lineas;}
    public double getX(){return x;}
    public double getY(){return y;}
    public int getAngulo(){return angulo;}
    public void setAngulo(int angulo){this.angulo = angulo;}
    public Color getColor(){return color;}
    public void setColor(Color color){this.color = color;}
    @Override
    public String toString(){           //Este metodo retorna las posiciones y angulo de la figura de acuerdo a las lineas de la figura (coordenadas)
        String valor = "";
        for(int i = 0; i < lineas.size(); i++)
            valor += lineas.get(i)+", ";
        valor += "x:"+x+" y:"+y+" angulo: "+angulo;
        return valor;
    }
}