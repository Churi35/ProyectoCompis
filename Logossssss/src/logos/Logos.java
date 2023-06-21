package logos;
import javax.swing.UIManager;
import javax.swing.UnsupportedLookAndFeelException;
import vista.VentanaPrincipal;
/*Este es el equivalente al main, esta es la clase con el método principal*/
public class Logos{
    public static void main(String args[]){
        System.setProperty("awt.useSystemAAFontSettings","on");
        System.setProperty("swing.aatext", "true");
        try{UIManager.setLookAndFeel(UIManager.getSystemLookAndFeelClassName());}
        catch (UnsupportedLookAndFeelException | ClassNotFoundException |
                InstantiationException | IllegalAccessException e){}
        new VentanaPrincipal();
    } 
}