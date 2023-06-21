package modelo.compilador;

/* Esta clase define las dos caracteristicas que definen a un simbolo: su nombre y el objeto al que hace referencia, 
se implementan metodos getter y setter*/
public class Par {

    private String nombre;
    private Object objeto;

    public Par(String nombre, Object objeto){
        this.nombre = nombre;
        this.objeto = objeto;
    }
    
    public String getNombre() {
        return nombre;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    public Object getObjeto() {
        return objeto;
    }

    public void setObjeto(Object objeto) {
        this.objeto = objeto;
    }
        
}
