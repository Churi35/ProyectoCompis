package modelo;
import java.awt.Color;
/* Clase que implementa metodos getter y setter de acuerdo a una sola linea
(manteniendo x e y iniciales y finales, las cuales definen a la linea, ademas del color) */
public class Linea{
    int x0;
    int y0;
    int x1;
    int y1;
    Color color;
    public Linea(int x0, int y0, int x1, int y1, Color color) {
        this.x0 = x0; this.y0 = y0; this.x1 = x1;
        this.y1 = y1; this.color = color;
    }
    public int getX0(){return x0;}
    public void setX0(int x0){this.x0 = x0;}
    public int getY0(){return y0;}
    public void setY0(int y0){this.y0 = y0;}
    public int getX1(){return x1;}
    public void setX1(int x1){this.x1 = x1;}
    public int getY1(){return y1;}
    public void setY1(int y1){this.y1 = y1;}
    public Color getColor(){return color;}
    public void setColor(Color color){this.color = color;}
    @Override
    public String toString(){       //Podemos obtener las caracteristicas de una linea como una cadena que se presenta como las coordenadas
        String valor = "(" + x0 + "," + y0 + "," + x1 + "," + y1 + ")";        
        return valor;
    }
}