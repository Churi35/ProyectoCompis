package vista;
import java.awt.BorderLayout;
import java.awt.Color;
import java.awt.Dimension;
import java.awt.Font;
import java.awt.GridLayout;
import java.awt.Image;
import java.awt.Insets;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.image.BufferedImage;
import javax.swing.BorderFactory;
import javax.swing.ImageIcon;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JScrollPane;
import javax.swing.JTextArea;
import modelo.compilador.Parser;
/* Ventana principal implementa un frame, definiendo los distintos
componentes que lo conforman*/
/*Aqui se hace uso del Parser, archivo generado al compilar el archivo de
yacc.*/
public class VentanaPrincipal extends JFrame{
    JTextArea areaDeCodigo;
    JScrollPane scrollCodigo;
    PanelDeDibujo panelDeDibujo;
    JButton ejecutar;
    JButton estrella;
    JButton pentagono;
    JButton pentagrama;
    JButton triangulo;
    JButton cuadrado;
    JButton hexagono;
    JButton heptagono;
    JButton octagono;
    JButton nonagono;
    JButton decagono;
    JButton espiral;
    JButton arbol;
    JButton espirografo;
    JButton esp_flor;
    JButton hilbert;
    JButton regla;
    JButton koch;
    JButton debug;
    JButton siguiente;
    Parser parser;
    boolean modoDebug;
    //se define color (hex) de la barra menu
    public static final Color accent = new Color(0xFEC463);
    public VentanaPrincipal(){
        //Definimos el panel barra menu
        JPanel top = new JPanel();
        top.setBackground(accent);
        //Propiedades de localizacion de barra menu
        top.setBounds(0,0,1150,70);
        add(top);
        modoDebug = false;
        //Parser es como el ytab, se genera una vez compilado el archivo maquina
        //de pila.
        parser = new Parser();
        //Se ejecutan insertan instrucciones de acuerdo al parser, que viene de        
        //compilar el archivo maquina de pila, donde se tiene la gramatica en
        //terminos de compiladores
        parser.insertarInstrucciones();
        //Se define al area de codio, se acomoda, y se estabelecen sus
        //propiedades
        areaDeCodigo = new JTextArea();
        areaDeCodigo.setBackground(new Color(0xDCDCDC));
        areaDeCodigo.setCaretColor(accent);
        areaDeCodigo.setLineWrap(true);
        areaDeCodigo.setWrapStyleWord(true);
        areaDeCodigo.setTabSize(2);        
        //se definen caracteristicas de la letra (codigo)
        areaDeCodigo.setMargin(new Insets(10,10,10,10));
        areaDeCodigo.setFont(new Font("Consolas", Font.PLAIN, 12));
        areaDeCodigo.setForeground(Color.BLACK);
        //Se coloca el area de codigo y el panel y se muestran en interfaz
        scrollCodigo = new JScrollPane (areaDeCodigo);
        scrollCodigo.setBorder(BorderFactory.createEmptyBorder());
        scrollCodigo.setBounds(0,70,595,725);        
        add(scrollCodigo);
        //Ahora se definen las propiedades y se coloca el panel principal
        panelDeDibujo = new PanelDeDibujo();
        setTitle("Proyecto: Logo");
        panelDeDibujo.setBounds(595,70,Propiedades.PANEL_DE_DIBUJO_ANCHO,Propiedades.PANEL_DE_DIBUJO_LARGO);
        panelDeDibujo.setBackground(new Color(0x080808));
        areaDeCodigo.setText("Cambia las propiedades en \nel codigo para mover, rotar \no cambiar el tamaño de las figuras. \n");
        add(panelDeDibujo);
        //Boton de ejecucion, practicamente manda a parser el codigo a ejecutar,
        //modificando la configuracion de la nueva figura y mostrandola en pantalla:
        ejecutar = new ButtonUI(new ImageIcon(System.getProperty("user.dir") + "/play.png"));
        ejecutar.setBounds(10,-1,50,40);
        ejecutar.addActionListener(new ActionListener(){ //Añadir evento al dar clic
            @Override
            public void actionPerformed(ActionEvent ae){
                parser.limpiar();      //Limpiamos el area de codigo
                if(parser.compilar(areaDeCodigo.getText()))     //Compilamos el codigo escrito en el area de docido
                    panelDeDibujo.setConfiguracion(parser.ejecutar());  //Ejecutamos, cambiando las propiedades de la figura
                else{
                    parser = new Parser();
                    parser.insertarInstrucciones();
                    panelDeDibujo.setConfiguracion(parser.getConfiguracion()); //Establecemos la nueva figura
                }
                panelDeDibujo.repaint();    //Dibujamos la nueva figura
            }
        });
        /* Las siguientes instrucciones son la definicion de los botones de cada figura, asi como su evento, 
        todos practicamente realizan la misma funcion, la diferencia estara en el codigo a compilar. */
        
        /* Primeramente se obtiene el icono del boton, luego se define su evento (al dar clic al boton de 
        la figura, se cambiara el texto en el area codigo, para luego al darle clic al boton de ejecucion,
        este sea mandado a parser para compilarse. */
        estrella = new ButtonUI(new ImageIcon(System.getProperty("user.dir") + "/estrellaCopia.png"));
        estrella.addActionListener(new ActionListener(){
            @Override
            public void actionPerformed(ActionEvent ae) {
                 areaDeCodigo.setText("");
                 areaDeCodigo.setText("for(i=0;i<6;i=i+1){\n" +
                                        "Move[200];\n" +
                                        "Rotate[120];\n" +
                                        "Color[0, i*26, i*51];\n" +
                                        "}\n" +
                                        "\n" +
                                        "Move[66];\n" +
                                        "Rotate[300];\n" +
                                        "Move[66];\n" +
                                        "\n" +
                                        "for(i=0;i<3;i=i+1){\n" +
                                        "Rotate[120];\n" +
                                        "Move[200];\n" +
                                        "}");
            }
        });
        pentagono = new ButtonUI(new ImageIcon(System.getProperty("user.dir") + "/pentagono.png"));
        pentagono.addActionListener(new ActionListener(){
            @Override
            public void actionPerformed(ActionEvent ae) {
                 areaDeCodigo.setText("");
                 areaDeCodigo.setText("for( i=0; i<5; i=i+1){\n" +
                                        "Move[100];\n" +
                                        "Rotate[72];\n" +
                                        "Color[132+i, i*56, i*91];\n" +
                                        "}");

            }
        });
        pentagrama = new ButtonUI(new ImageIcon(System.getProperty("user.dir") + "/pentagrama.png"));
        pentagrama.addActionListener(new ActionListener(){
            @Override
            public void actionPerformed(ActionEvent ae) {
                 areaDeCodigo.setText("");
                 areaDeCodigo.setText("Rotate[75];\n" +
                                        "for(i=0;i<5;i=i+1){\n" +
                                        "Move[200];\n" +
                                        "Rotate[180+36];\n" +
                                        "Color[255, i*226, i*251];\n" +
                                        "}");
            }
        }); 
        espiral = new ButtonUI(new ImageIcon(System.getProperty("user.dir") + "/espiral.png"));
        espiral.addActionListener(new ActionListener(){
            @Override
            public void actionPerformed(ActionEvent ae) {
                areaDeCodigo.setText("");
                areaDeCodigo.setText("func potencia () {\n" +
                                        "    retorno = 1;\n" +
                                        "    for(aux=0; aux<$2; aux=aux+1){\n" +
                                        "        retorno = retorno*$1;\n" +
                                        "    }\n" +
                                        "    return retorno;\n" +
                                        "}\n" +
                                        "for(i=0; i<24; i=i+1){\n" +
                                        "    Move[potencia(i,2)];\n" +
                                        "    Color[\n" +
                                        "      5*potencia(i,1),\n" +
                                        "      5*potencia(i,2),\n" +
                                        "      5*potencia(i,3)\n" +
                                        "   ];\n" +
                                        "    Rotate[90];\n" +
                                        "}");
            }
        });
        triangulo = new ButtonUI(new ImageIcon(System.getProperty("user.dir") + "/triangulo.png"));
        triangulo.addActionListener(new ActionListener(){
            @Override
            public void actionPerformed(ActionEvent ae) {
                 areaDeCodigo.setText("");
                 areaDeCodigo.setText("for(i=0; i<3; i=i+1){\n" +
                                        "   Color[600, i*126, i*511];\n" +
                                        "    Move[100];\n" +
                                        "    Rotate[120];\n" +
                                        "}");
            }
        });
        cuadrado = new ButtonUI(new ImageIcon(System.getProperty("user.dir") + "/cuadrado.png"));
        cuadrado.addActionListener(new ActionListener(){
            @Override
            public void actionPerformed(ActionEvent ae) {
                 areaDeCodigo.setText("");
                 areaDeCodigo.setText("for(i=0; i<4; i=i+1){\n" +
                                        "   Color[27, 130, i*255];\n" +
                                        "    Move[100];\n" +
                                        "    Rotate[90];\n" +
                                        "   } ");
            }
        });
        hexagono = new ButtonUI(new ImageIcon(System.getProperty("user.dir") + "/hexagono.png"));
        hexagono.addActionListener(new ActionListener(){
            @Override
            public void actionPerformed(ActionEvent ae) {
                 areaDeCodigo.setText("");
                 areaDeCodigo.setText("for( i=0; i< 6; i=i+1){\n" +
                                        "Color[2.4+i, i+99, i*1];\n" +
                                        "Move[150];\n" +
                                        "Rotate[60];\n" +
                                        "}");
            }
        });
        heptagono = new ButtonUI(new ImageIcon(System.getProperty("user.dir") + "/heptagono.png"));
        heptagono.addActionListener(new ActionListener(){
            @Override
            public void actionPerformed(ActionEvent ae) {
                 areaDeCodigo.setText("");
                 areaDeCodigo.setText("for( i=0; i< 7; i=i+1){\n" +
                                        "Move[100];\n" +
                                        "Rotate[51];\n" +
                                        "}");
            }
        });
        octagono = new ButtonUI(new ImageIcon(System.getProperty("user.dir") + "/octagono.png"));
        octagono.addActionListener(new ActionListener(){
            @Override
            public void actionPerformed(ActionEvent ae) {
                 areaDeCodigo.setText("");
                 areaDeCodigo.setText(" for( i=0; i< 8; i=i+1){\n" +
                                        "Move[100];\n" +
                                        "Rotate[45];\n" +
                                        "}");
            }
        });
        nonagono = new ButtonUI(new ImageIcon(System.getProperty("user.dir") + "/nonagono.png"));
        nonagono.addActionListener(new ActionListener(){
            @Override
            public void actionPerformed(ActionEvent ae) {
                 areaDeCodigo.setText("");
                 areaDeCodigo.setText(" for( i=0; i< 9; i=i+1){\n" +
                                        "Move[100];\n" +
                                        "Rotate[40];\n" +
                                        "}"
                                        );
            }
        });
        decagono = new ButtonUI(new ImageIcon(System.getProperty("user.dir") + "/decagono.png"));
        decagono.addActionListener(new ActionListener(){
            @Override
            public void actionPerformed(ActionEvent ae) {
                 areaDeCodigo.setText("");
                 areaDeCodigo.setText(" for( i=0; i< 9; i=i+1){ \n"+
                                        "Move[100];\n"+
                                        "Rotate[40];\n"+
                                        "}\n"+
                                        " for( i=0; i< 8; i=i+1){\n"+
                                        "Move[100];\n"+
                                        "Rotate[45];\n"+
                                        "}\n"+
                                        "for( i=0; i< 7; i=i+1){\n"+
                                        "Move[100];\n"+
                                        "Rotate[51];\n"+
                                        "}\n"+
                                        "for( i=0; i<6; i=i+1){\n"+
                                        "Move[100];\n"+
                                        "Rotate[60];\n"+
                                        "}\n"+
                                        "for( i=0; i<5; i=i+1){\n"+
                                        "Move[100];\n"+
                                        "Rotate[72];\n"+
                                        "}\n"+
                                        "for(i=0; i<4; i=i+1){\n"+
                                        "    Move[100];\n"+
                                        "    Rotate[90];\n"+
                                        "   } \n"+
                                        "for(i=0; i<3; i=i+1){\n"+
                                        "    Move[100];\n"+
                                        "    Rotate[120];\n"+
                                        "}\n"
                                        );
            }
        });
        regla = new ButtonUI(new ImageIcon(System.getProperty("user.dir") + "/regla.png"));
        regla.addActionListener(new ActionListener(){
            @Override
            public void actionPerformed(ActionEvent ae) {
                 areaDeCodigo.setText("");
                 areaDeCodigo.setText("func seccion(){\n" +
                                        "    Rotate[90];\n" +
                                        "    Move[100];\n" +
                                        "    Rotate[180];\n" +
                                        "    Move[100];\n" +
                                        "    Rotate[90];\n" +
                                        "    Move[50];\n" +
                                        "    Rotate[90];\n" +
                                        "    Move[50];\n" +
                                        "    Rotate[180];\n" +
                                        "    Move[50];\n" +
                                        "    Rotate[90];\n" +
                                        "    Move[50];\n" +
                                        "}\n" +
                                        "Rotate[180];\n" +
                                        "Move[250];\n" +
                                        "Rotate[180];\n" +
                                        "Color[255,0,255];\n" +
                                        "seccion();\n" +
                                        "seccion();\n" +
                                        "seccion();\n" +
                                        "seccion();\n" +
                                        "seccion();\n" +
                                        "Rotate[90];\n" +
                                        "Move[100];");
            }
        });
        koch = new ButtonUI(new ImageIcon(System.getProperty("user.dir") + "/koch.png"));
        koch.addActionListener(new ActionListener(){
            @Override
            public void actionPerformed(ActionEvent ae) {
                 areaDeCodigo.setText("");
                 areaDeCodigo.setText(" Color[9,9,9];\n" +
                                        " Move[-250];\n" +
                                        " Color[255,255,255];\n" +
                                        " \n" +
                                        "func generaKoch(){\n" +
                                        "   if($1==0){\n" +
                                        "     Move[$2];\n" +
                                        "   }\n" +
                                        "   else{\n" +
                                        "     generaKoch($1-1,$2*.33);\n" +
                                        "     Rotate[60];\n" +
                                        "     generaKoch($1-1,$2*.33);\n" +
                                        "     Rotate[-120];\n" +
                                        "     generaKoch($1-1,$2*.33);\n" +
                                        "     Rotate[60];\n" +
                                        "     generaKoch($1-1,$2*.33);\n" +
                                        "   }\n" +
                                        "}\n" +
                                        "\n" +
                                        "generaKoch(3,300);");
            }
        });
        arbol = new ButtonUI(new ImageIcon(System.getProperty("user.dir") + "/arbol.png"));
        arbol.addActionListener(new ActionListener(){
            @Override
            public void actionPerformed(ActionEvent ae) {
                 areaDeCodigo.setText("");
                 areaDeCodigo.setText("func tree (){\n" +
                                        " if($1>5){\n" +
                                        "   Move[$1];\n" +
                                        "   Rotate[20];\n" +
                                        "   tree($1-15);\n" +
                                        "   Rotate[320];\n" +
                                        "   tree($1-15);\n" +
                                        "   Rotate[20];\n" +
                                        "   Move[(-1)*($1)];\n" +
                                        " }\n" +
                                        "}\n" +
                                        "\n" +
                                        "Rotate[90];\n" +
                                        "Color[0,0,0];\n" +
                                        "Rotate[180];\n" +
                                        "Move[200];\n" +
                                        "Rotate[180];\n" +
                                        "Color[0,255,0];\n" +
                                        "tree(100);");
            }
        });
        espirografo = new ButtonUI(new ImageIcon(System.getProperty("user.dir") + "/espirografo.png"));
        espirografo.addActionListener(new ActionListener(){
            @Override
            public void actionPerformed(ActionEvent ae){
                 areaDeCodigo.setText("");
                 areaDeCodigo.setText("for(i=0; i<200; i=i+1){\n" +
                                        "  Color[0, i*26, i*51];\n" +
                                        "  Move[i*4];\n" +
                                        "  Rotate[145];\n" +
                                        "}");
            }
        });
        esp_flor = new ButtonUI(new ImageIcon(System.getProperty("user.dir") + "/esp_flor.png"));
        esp_flor.addActionListener(new ActionListener(){
            @Override
            public void actionPerformed(ActionEvent ae) {
                 areaDeCodigo.setText("");
                 areaDeCodigo.setText("func circulo () {  \n" +
                                        "  for(i=0; i<366; i=i+1){\n" +
                                        "    Move[2];\n" +
                                        "		Rotate[1];\n" +
                                        "  }\n" +
                                        "}\n" +
                                        "\n" +
                                        "func espirografo(){\n" +
                                        "	for(j=0; j<45; j=j+1){\n" +
                                        "		Color[j*30,j*40,j*20];\n" +
                                        "		circulo();\n" +
                                        "		Rotate[90];\n" +
                                        "	}\n" +
                                        "}\n" +
                                        "espirografo(); ");
            }
        });
        hilbert = new ButtonUI(new ImageIcon(System.getProperty("user.dir") + "/hilbert.png"));
        hilbert.addActionListener(new ActionListener(){
            @Override
            public void actionPerformed(ActionEvent ae) {
                 areaDeCodigo.setText("");
                 areaDeCodigo.setText("func right() { Rotate[-$1]; }\n" +
                                        "\n" +
                                        "func left() { Rotate[$1]; }\n" +
                                        "\n" +
                                        "func forward() { Move[$1]; }\n" +
                                        "\n" +
                                        "size = 15;\n" +
                                        "\n" +
                                        "func hilbert() {\n" +
                                        "    if ($1 > 0) {\n" +
                                        "        right($2);\n" +
                                        "        hilbert($1 - 1, -$2);\n" +
                                        "        forward(size);\n" +
                                        "        left($2);\n" +
                                        "        hilbert($1 - 1, $2);\n" +
                                        "        forward(size);\n" +
                                        "        hilbert($1 - 1, $2);\n" +
                                        "        left($2);\n" +
                                        "        forward(size);\n" +
                                        "        hilbert($1 - 1, -$2);\n" +
                                        "        right($2);\n" +
                                        "    }\n" +
                                        "}\n" +
                                        "\n" +
                                        "func setLeftSuperiorCorner() {\n" +
                                        "    Color[0, 0, 0];\n" +
                                        "    Move[-240];\n" +
                                        "    Rotate[90];\n" +
                                        "    Move[370];\n" +
                                        "    Rotate[-90];\n" +
                                        "    Color[255, 255, 255];\n" +
                                        "}\n" +
                                        "\n" +
                                        "setLeftSuperiorCorner();\n" +
                                        "hilbert(5, 90);");
            }
        });
        siguiente = new ButtonUI(new ImageIcon(System.getProperty("user.dir") + "/Next.png"));
        siguiente.setBounds(210,10,50,40);
        siguiente.addActionListener(new ActionListener(){
            @Override
            public void actionPerformed(ActionEvent ae) {
                parser.ejecutarSiguiente();
                panelDeDibujo.setConfiguracion(parser.getConfiguracion());
                panelDeDibujo.repaint();
            }
        });
        siguiente.setEnabled(false); 
        /* A continuacion se define el panel de botones, se le agregan cada uno de los botones figura y el ejecutar y se añaden al panel top (barra menu) */
        JPanel btns = new JPanel();
        btns.setBackground(new Color(0x00FF00));
        btns.setLayout(new GridLayout(1,3,0,0));
        btns.add(triangulo);
        btns.add(cuadrado);
        btns.add(pentagono);
        btns.add(hexagono);
        btns.add(heptagono);
        btns.add(octagono);
        btns.add(nonagono);
        btns.add(decagono);
        btns.add(estrella);
        btns.add(pentagrama);
        btns.add(arbol);
        btns.add(espiral);
        btns.add(esp_flor);
        btns.add(espirografo);
        btns.add(hilbert);
        btns.add(regla);
        btns.add(koch);
        btns.add(ejecutar);
        top.setLayout(new BorderLayout());
        top.add(btns, BorderLayout.EAST);
        JLabel title = new JLabel("   Figuras:");
        title.setFont(new Font("Arial", Font.PLAIN, 14));
        title.setForeground(Color.WHITE);
        top.add(title, BorderLayout.WEST);
        setLayout(null);            //Caracteristicas del panel e iconos
        setBounds(50,50,750,550);
        setVisible(true);
        getContentPane().setBackground(new Color(0x000000));
        setResizable(false);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setPreferredSize(new Dimension(1150,900));
        Image icon = new BufferedImage(1, 1, BufferedImage.TYPE_INT_ARGB_PRE);
        setIconImage(icon);
        pack();
    }
}
class ButtonUI extends JButton{     //Caracteristicas de los botones, de acuerdo al icono que incluiran
    public ButtonUI(ImageIcon i){ 
        this.setOpaque(false);
        this.setFocusPainted(false);
        this.setBorderPainted(false);
        this.setBorder(null);
        this.setBackground(null);
        this.setFocusable(false);
        this.setContentAreaFilled(false);
        this.setMinimumSize(new Dimension(60,50));
        this.setPreferredSize(new Dimension(60,50));
        this.setSize(new Dimension(60,50));
        setIcon(i);        
    }
}