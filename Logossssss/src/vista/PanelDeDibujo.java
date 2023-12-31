package vista;
import java.awt.Color;
import java.awt.Graphics;
import java.awt.Polygon;
import java.util.ArrayList;
import javax.swing.JPanel;
import modelo.Configuracion;
import modelo.Linea;
/* Aqui se define meramente la manera en la que se dibuja en el panel principal a las figuras */
public class PanelDeDibujo extends JPanel{
    Configuracion configuracion;        //Se considera la configuacion de las figuras
    public PanelDeDibujo(){configuracion = new Configuracion();}
    public void setConfiguracion(Configuracion configuracion){this.configuracion = configuracion;}
    @Override
    public void paint(Graphics g){
        super.paint(g);
        ArrayList<Linea> lineas = configuracion.getLineas();    //Recordemos que las figuras se forman a traves de lineas
        for(int i = 0; i < lineas.size(); i++){
            int x0 = (Propiedades.PANEL_DE_DIBUJO_ANCHO/2) + lineas.get(i).getX0(); //Se van obteniendo las linea, tomando como posicion inicial el centro del panel de dibujo 
            int y0 = (Propiedades.PANEL_DE_DIBUJO_LARGO/2) - lineas.get(i).getY0();
            int x1 = (Propiedades.PANEL_DE_DIBUJO_ANCHO/2) + lineas.get(i).getX1();
            int y1 = (Propiedades.PANEL_DE_DIBUJO_LARGO/2) - lineas.get(i).getY1();;
            g.setColor(lineas.get(i).getColor());   //Se modifica el color de cada linea
            g.drawLine(x0, y0, x1, y1);     //Se dibuja linea de acuerdo a los puntos inicio y fin
        }
        //A continuacion dibujamos el "apuntador" que nos dira el centro de las figuras.
        g.setColor(Color.WHITE);
        Polygon triangulo = triangulo(configuracion.getX(), configuracion.getY(), configuracion.getAngulo());
        g.drawPolygon(triangulo); 
    }

    /* Definimos en el siguiente metodo al triangulo que sera el apuntador al centro del panel de dibujo*/
    public Polygon triangulo(double x, double y, int angulo){
        Polygon poligono = null;
        int xs[] = new int[3];
        int ys[] = new int[3];
        xs[0] = (Propiedades.PANEL_DE_DIBUJO_ANCHO/2) + (int) x;
        ys[0] = (Propiedades.PANEL_DE_DIBUJO_LARGO/2) - (int) y;
        xs[1] = (Propiedades.PANEL_DE_DIBUJO_ANCHO/2) + (int) (x - 10*Math.cos(Math.toRadians(angulo+35)));
        ys[1] = (Propiedades.PANEL_DE_DIBUJO_LARGO/2) - (int) (y - + 10*Math.sin(Math.toRadians(angulo+35)));
        xs[2] = (Propiedades.PANEL_DE_DIBUJO_ANCHO/2) + (int) (x - 10*Math.cos(Math.toRadians(angulo-35)));
        ys[2] = (Propiedades.PANEL_DE_DIBUJO_LARGO/2) - (int) (y - + 10*Math.sin(Math.toRadians(angulo-35)));
        poligono = new Polygon(xs,ys,3);        //Creamos el espacio para un poligono de 3 lados, que ya son definidos por los arreglos x e y.
        return poligono;    //retornamos al triangulito apuntador
    }
}