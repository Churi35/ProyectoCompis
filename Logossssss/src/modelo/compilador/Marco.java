package modelo.compilador;


import java.util.ArrayList;

/* Esta clase define al objeto marco, el cual es el que se utiliza para los procedimientos dentro de la maquina.
Aqui es importante tomar en cuenta el nombre del procedimiento, los parametros y el retorno que da.
*/
public class Marco {

    private ArrayList parametros;
    private int retorno;
    private String nombre;

    public Marco(){
        parametros = new ArrayList();   //Inicializamos cada "atributo" del objeto
        retorno = 0;
        nombre = null;
    }
    
    public void agregarParametro(Object parametro){ //Implementamos adicion de parametros, asi como metodos getter y setter
        parametros.add(parametro);
    }
    
    public Object getParametro(int i){
        return parametros.get(i);
    }
    
    public void setParametros(ArrayList parametros) {
        this.parametros = parametros;
    }

    public int getRetorno() {
        return retorno;
    }

    public void setRetorno(int retorno) {
        this.retorno = retorno;
    }

    public String getNombre() {
        return nombre;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }
 
}
