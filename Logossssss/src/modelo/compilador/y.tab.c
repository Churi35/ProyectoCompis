#ifndef lint
static char yysccsid[] = "@(#)yaccpar	1.8 (Berkeley) 01/20/90";
#endif
#define YYBYACC 1
#line 2 "P2.y"
    import java.lang.Math;
    import java.io.*;
    import java.util.StringTokenizer;
    import modelo.Configuracion;
#line 11 "y.tab.c"
#define IF 257
#define ELSE 258
#define WHILE 259
#define FOR 260
#define COMP 261
#define DIFERENTES 262
#define MAY 263
#define MEN 264
#define MAYI 265
#define MENI 266
#define FNCT 267
#define NUMBER 268
#define VAR 269
#define AND 270
#define OR 271
#define FUNC 272
#define RETURN 273
#define PARAMETRO 274
#define PROC 275
#define YYERRCODE 256
short yylhs[] = {                                        -1,
    0,    0,    0,    1,    1,    1,    1,    2,    2,    2,
    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,
    2,    2,    2,    2,    2,    2,    2,    5,    5,    5,
    6,    3,    3,    3,    3,    3,    3,    3,   15,   14,
   12,    4,   13,    8,    7,    9,   10,   11,   11,   11,
};
short yylen[] = {                                         2,
    0,    2,    3,    2,    1,    3,    2,    1,    2,    1,
    3,    3,    3,    3,    3,    3,    3,    3,    3,    3,
    3,    3,    3,    2,    2,    1,    4,    0,    1,    3,
    0,   14,   11,   10,   16,    8,    8,    5,    1,    1,
    1,    1,    0,    0,    1,    1,    1,    0,    1,    3,
};
short yydefred[] = {                                      1,
    0,   45,   46,   47,   39,   10,    0,   41,    0,   26,
   40,    0,    0,    2,    0,    0,    0,    5,    0,    0,
    0,    0,    0,    0,    0,    0,   25,    0,    0,    0,
    3,    0,    7,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    4,    0,    0,    0,    0,   42,
    0,    0,    0,    0,   15,    6,    0,    0,    0,    0,
    0,    0,    0,   23,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   27,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   38,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   36,   37,    0,   44,
    0,    0,   44,   34,    0,    0,   33,    0,    0,    0,
    0,    0,   32,    0,   44,   35,
};
short yydgoto[] = {                                       1,
   16,   17,   18,   19,   69,  113,   20,   79,   21,   22,
   73,   23,  102,   24,   25,
};
short yysindex[] = {                                      0,
    9,    0,    0,    0,    0,    0,  -49,    0,  -13,    0,
    0,  -13,  -13,    0,  -13,   28,   75,    0,  -24,   -9,
   -4,   10, -255, -255,  -48,  -13,    0,  108, -242,   54,
    0,   86,    0,  -13,  -13,  -13,  -13,  -13,  -13,  -13,
  -13,  -13,  -13,  -13,    0,  -13,  -13,  -13,  -13,    0,
   17,   19,  -13,   97,    0,    0,  217,  152,  190, -194,
 -225, -242, -190,    0,  108,  108,  -57,   97,    3,   97,
   97,   97,   45,   49,   57,  -35,    0,  -13,   70,   71,
  -13,   62,   14,   15,   73,   97,   18,   20,   97,  -13,
  -32,  -32,    0,  -32,  -32,   97,  -32,  -32,  -32,  -32,
   76,   23,   24,   27,   29,  -13,    0,    0, -114,    0,
   45,   32,    0,    0,  105,  -32,    0,   33,  -32,  -32,
   40,  -32,    0,   52,    0,    0,
};
short yyrindex[] = {                                      0,
    0,    0,    0,    0,    0,    0,   43,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  -19,  119,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   38,    0,    0,  -42,    0,
    0,    0,  -33,  -26,    0,    0,  -38,  158,  151,  131,
  138,  125,   65,    0,   60,  230,   21,    7,    0,  116,
  116,   -7,  100,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   34,    0,    0,   12,    0,
    0,    0,    0,    0,    0,  100,   61,   61,   63,   63,
    0,    0,    0,    0,    0,   89,    0,    0,  -10,    0,
  116,    0,    0,    0,    0,    0,    0,    0,   63,    0,
    0,   63,    0,    0,    0,    0,
};
short yygindex[] = {                                      0,
   31,  395,   -6,   46,  118,    0,    0,  353,    0,    0,
   79,    0,   91,    0,    0,
};
#define YYTABLESIZE 517
short yytable[] = {                                      31,
   13,   48,   16,   16,   16,   16,   16,   15,   78,   33,
   28,   26,   12,   50,   11,   46,   48,   11,   14,   13,
   16,    9,   31,    9,    9,    9,   15,   40,   41,   31,
   47,   12,   11,   49,   31,   48,   49,   31,   37,    9,
   39,   13,   53,   77,   40,   41,   78,   29,   15,   49,
   29,   49,   50,   12,   16,   50,   74,   85,   75,   28,
   13,   12,   12,   12,   12,   12,   11,   15,   51,   52,
   50,   39,   12,    9,   30,   40,   41,   30,   28,   12,
   41,   28,   42,    8,    8,    8,    8,    8,   81,   83,
   33,   33,   33,   33,   55,   44,   42,   84,   43,   29,
   13,    8,   13,   13,   13,   22,   22,   22,   22,   22,
   87,   88,   33,   12,   31,   33,   44,   42,   13,   43,
   90,   97,   98,   22,   99,  100,   30,   44,   42,   48,
   43,   93,   48,   45,  106,    8,   91,   92,   44,   42,
   94,   43,   95,  112,   56,  118,  119,  107,  108,   44,
  122,  109,   13,  110,  116,  120,   44,   22,   44,   24,
   24,   24,   24,   24,  123,   19,   19,   19,   19,   19,
   76,   18,   18,   18,   18,   18,  125,   24,   21,   21,
   21,   21,   21,   19,  111,   43,    0,   44,  103,   18,
    0,   20,   20,   20,   20,   20,   21,    0,   17,   17,
   17,   17,   17,   34,   35,   36,   37,   38,   39,   20,
    0,   24,   40,   41,    0,    0,   17,   19,    0,    0,
    0,    0,   16,   18,    2,    0,    3,    4,    0,    0,
   21,    0,    0,    0,    5,    6,    7,    0,    0,    8,
    9,   10,   11,   20,    0,    0,   31,    0,   31,   31,
   17,    0,    0,    0,    6,    7,   31,   31,   31,    9,
   10,   31,   31,   31,   31,    2,    0,    3,    4,    0,
   14,    0,   14,   14,   14,    5,    6,    7,    0,    0,
    8,    9,   10,   11,    2,    0,    3,    4,   14,    0,
    0,    0,    0,    0,    5,    6,    7,    0,    0,    8,
    9,   10,   11,    8,    8,    8,    8,    8,    8,    0,
    0,    0,    8,    8,   34,   35,   36,   37,   38,   39,
    0,    0,   14,   40,   41,   22,   22,   22,   22,   22,
   22,    0,    0,    0,   22,   34,   35,   36,   37,   38,
   39,    0,    0,    0,   40,   41,   34,   35,   36,   37,
   38,   39,    0,    0,    0,   40,   41,   34,   35,   36,
   37,   38,   39,    0,    0,    0,   40,   41,   34,   35,
   36,   37,   38,   39,    0,    0,    0,   40,   41,   24,
   24,   24,   24,   24,   24,   19,   19,   19,   19,   19,
   19,   18,   18,   18,   18,   18,    0,    0,   21,   21,
   21,    0,   21,   27,    0,    0,   28,   29,    0,   30,
   32,   20,   20,   20,   36,   37,   38,   39,   17,   17,
   54,   40,   41,   80,    0,   82,    0,    0,   57,   58,
   59,   60,   61,   62,   63,   64,   65,   66,   67,    0,
   68,   70,   71,   72,    0,    0,    0,   68,  101,    0,
    0,  104,  105,   37,   38,   39,    0,    0,    0,   40,
   41,    0,  114,  115,    0,  117,    0,    0,    0,    0,
    0,  121,   86,    0,  124,   89,    0,  126,   35,   36,
   37,   38,   39,    0,   96,    0,   40,   41,    0,    0,
    0,   32,   32,   32,   32,    0,    0,    0,    0,    0,
   72,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   32,    0,    0,   32,
};
short yycheck[] = {                                      10,
   33,   44,   41,   42,   43,   44,   45,   40,   44,   16,
   44,   61,   45,  269,   41,   40,   59,   44,   10,   33,
   59,   41,   33,   43,   44,   45,   40,  270,  271,   40,
   40,   45,   59,   41,   45,   40,   44,   10,  264,   59,
  266,   33,   91,   41,  270,  271,   44,   41,   40,   40,
   44,   59,   41,   45,   93,   44,   40,   93,   40,   93,
   33,   41,   42,   43,   44,   45,   93,   40,   23,   24,
   59,  266,   45,   93,   41,  270,  271,   44,   41,   59,
  271,   44,   40,   41,   42,   43,   44,   45,   44,   41,
   97,   98,   99,  100,   41,   42,   43,   41,   45,   93,
   41,   59,   43,   44,   45,   41,   42,   43,   44,   45,
   41,   41,  119,   93,  125,  122,   42,   43,   59,   45,
   59,   91,   92,   59,   94,   95,   93,   42,   43,   41,
   45,   59,   44,   59,   59,   93,  123,  123,   42,   43,
  123,   45,  123,  258,   59,   41,  116,  125,  125,   42,
  120,  125,   93,  125,  123,  123,   41,   93,   59,   41,
   42,   43,   44,   45,  125,   41,   42,   43,   44,   45,
   53,   41,   42,   43,   44,   45,  125,   59,   41,   42,
   43,   44,   45,   59,  106,  125,   -1,  125,   98,   59,
   -1,   41,   42,   43,   44,   45,   59,   -1,   41,   42,
   43,   44,   45,  261,  262,  263,  264,  265,  266,   59,
   -1,   93,  270,  271,   -1,   -1,   59,   93,   -1,   -1,
   -1,   -1,  261,   93,  257,   -1,  259,  260,   -1,   -1,
   93,   -1,   -1,   -1,  267,  268,  269,   -1,   -1,  272,
  273,  274,  275,   93,   -1,   -1,  257,   -1,  259,  260,
   93,   -1,   -1,   -1,  268,  269,  267,  268,  269,  273,
  274,  272,  273,  274,  275,  257,   -1,  259,  260,   -1,
   41,   -1,   43,   44,   45,  267,  268,  269,   -1,   -1,
  272,  273,  274,  275,  257,   -1,  259,  260,   59,   -1,
   -1,   -1,   -1,   -1,  267,  268,  269,   -1,   -1,  272,
  273,  274,  275,  261,  262,  263,  264,  265,  266,   -1,
   -1,   -1,  270,  271,  261,  262,  263,  264,  265,  266,
   -1,   -1,   93,  270,  271,  261,  262,  263,  264,  265,
  266,   -1,   -1,   -1,  270,  261,  262,  263,  264,  265,
  266,   -1,   -1,   -1,  270,  271,  261,  262,  263,  264,
  265,  266,   -1,   -1,   -1,  270,  271,  261,  262,  263,
  264,  265,  266,   -1,   -1,   -1,  270,  271,  261,  262,
  263,  264,  265,  266,   -1,   -1,   -1,  270,  271,  261,
  262,  263,  264,  265,  266,  261,  262,  263,  264,  265,
  266,  261,  262,  263,  264,  265,   -1,   -1,  261,  262,
  263,   -1,  265,    9,   -1,   -1,   12,   13,   -1,   15,
   16,  261,  262,  263,  263,  264,  265,  266,  261,  262,
   26,  270,  271,   71,   -1,   73,   -1,   -1,   34,   35,
   36,   37,   38,   39,   40,   41,   42,   43,   44,   -1,
   46,   47,   48,   49,   -1,   -1,   -1,   53,   96,   -1,
   -1,   99,  100,  264,  265,  266,   -1,   -1,   -1,  270,
  271,   -1,  110,  111,   -1,  113,   -1,   -1,   -1,   -1,
   -1,  119,   78,   -1,  122,   81,   -1,  125,  262,  263,
  264,  265,  266,   -1,   90,   -1,  270,  271,   -1,   -1,
   -1,   97,   98,   99,  100,   -1,   -1,   -1,   -1,   -1,
  106,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  119,   -1,   -1,  122,
};
#define YYFINAL 1
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 275
#if YYDEBUG
char *yyname[] = {
"end-of-file",0,0,0,0,0,0,0,0,0,"'\\n'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,"'!'",0,0,0,0,0,0,"'('","')'","'*'","'+'","','","'-'",0,0,0,0,0,0,0,0,0,0,0,
0,0,"';'",0,"'='",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"'['",0,"']'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'{'",0,
"'}'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,"IF","ELSE","WHILE","FOR","COMP","DIFERENTES","MAY",
"MEN","MAYI","MENI","FNCT","NUMBER","VAR","AND","OR","FUNC","RETURN",
"PARAMETRO","PROC",
};
char *yyrule[] = {
"$accept : list",
"list :",
"list : list '\\n'",
"list : list linea '\\n'",
"linea : exp ';'",
"linea : stmt",
"linea : linea exp ';'",
"linea : linea stmt",
"exp : VAR",
"exp : '-' exp",
"exp : NUMBER",
"exp : VAR '=' exp",
"exp : exp '*' exp",
"exp : exp '+' exp",
"exp : exp '-' exp",
"exp : '(' exp ')'",
"exp : exp COMP exp",
"exp : exp DIFERENTES exp",
"exp : exp MEN exp",
"exp : exp MENI exp",
"exp : exp MAY exp",
"exp : exp MAYI exp",
"exp : exp AND exp",
"exp : exp OR exp",
"exp : '!' exp",
"exp : RETURN exp",
"exp : PARAMETRO",
"exp : nombreProc '(' arglist ')'",
"arglist :",
"arglist : exp",
"arglist : arglist ',' exp",
"nop :",
"stmt : if '(' exp stop ')' '{' linea stop '}' ELSE '{' linea stop '}'",
"stmt : if '(' exp stop ')' '{' linea stop '}' nop stop",
"stmt : while '(' exp stop ')' '{' linea stop '}' stop",
"stmt : for '(' instrucciones stop ';' exp stop ';' instrucciones stop ')' '{' linea stop '}' stop",
"stmt : funcion nombreProc '(' ')' '{' linea null '}'",
"stmt : procedimiento nombreProc '(' ')' '{' linea null '}'",
"stmt : instruccion '[' arglist ']' ';'",
"instruccion : FNCT",
"procedimiento : PROC",
"funcion : FUNC",
"nombreProc : VAR",
"null :",
"stop :",
"if : IF",
"while : WHILE",
"for : FOR",
"instrucciones :",
"instrucciones : exp",
"instrucciones : instrucciones ',' exp",
};
#endif
#ifndef YYSTYPE
typedef int YYSTYPE;
#endif
#define yyclearin (yychar=(-1))
#define yyerrok (yyerrflag=0)
#ifdef YYSTACKSIZE
#ifndef YYMAXDEPTH
#define YYMAXDEPTH YYSTACKSIZE
#endif
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 500
#define YYMAXDEPTH 500
#endif
#endif
int yydebug;
int yynerrs;
int yyerrflag;
int yychar;
short *yyssp;
YYSTYPE *yyvsp;
YYSTYPE yyval;
YYSTYPE yylval;
short yyss[YYSTACKSIZE];
YYSTYPE yyvs[YYSTACKSIZE];
#define yystacksize YYSTACKSIZE
#line 154 "P2.y"
TablaDeSimbolos tablaDeSimbolos = new TablaDeSimbolos();
MaquinaDePila maquina = new MaquinaDePila(tablaDeSimbolos);
int i = 0;
int j = 0;
double[][] auxiliar;
Funcion funcionAux;
boolean huboError;
String ins;
StringTokenizer st;
void yyerror(String s){
	huboError = true;
	System.out.println("error:"+s);
	System.exit(0);
}
boolean newline;
int yylex(){
	String s;
	int tok = 0;
	Double d;
	if(!st.hasMoreTokens()){
		if (!newline){
			newline = true;
			return '\n'; //So we look like classic YACC example
		}else{return 0;}
	}
	s = st.nextToken();
	try{
		d = Double.valueOf(s);/*this may fail*/
		yylval = new ParserVal(d.doubleValue()); //SEE BELOW
		return NUMBER;
	}catch (Exception e){}
	if(esVariable(s)){
		if(s.equals("procedure")){return PROC;}
		if(s.charAt(0) == '$'){yylval = new ParserVal((int)Integer.parseInt(s.substring(1))); return PARAMETRO;}
		if(s.equals("return")){return RETURN;}
		if(s.equals("function")){return FUNC;}
		if(s.equals("if")){return IF;}
		if(s.equals("else")){return ELSE;}
		if(s.equals("while")){return WHILE;}
		if(s.equals("for")){return FOR;}
		boolean esFuncion = false;
		Object objeto = tablaDeSimbolos.encontrar(s);
		if(objeto instanceof Funcion){
			funcionAux = (Funcion)objeto;
			yylval = new ParserVal(objeto);
			esFuncion = true;
			return FNCT;
		}
		if(!esFuncion){
			yylval = new ParserVal(s);
			return VAR;
		}
	}else{
		if(s.equals("==")){return COMP;}
		if(s.equals("!=")){return DIFERENTES;}
		if(s.equals("<")){return MEN;}
		if(s.equals("<=")){return MENI;}
		if(s.equals(">")){return MAY;}
		if(s.equals(">=")){return MAYI;}
		if(s.equals("&&")){return AND;}
		if(s.equals("||")){return OR;}
		tok = s.charAt(0);
	}
	//System.out.println("Token: " + tok);
	return tok;
}
String reservados[] = {">=", "&&", "||", "<=","==", "!=", "=", "{", "}", ",", "*", "+", "-", "(", ")", "|", "[", "]", ";", "!", "<", ">"};
public String ajustarCadena(String cadena){
    String nueva = "";
    boolean encontrado = false;
    for(int i = 0; i < cadena.length() - 1; i++){
        encontrado = false;
        for(int j = 0; j < reservados.length; j++){
            if(cadena.substring(i, i + reservados[j].length()).equals(reservados[j])){
                i += reservados[j].length()-1;
                nueva += " " + reservados[j] + " ";
                encontrado = true;
                break;
            }
        }
        if(!encontrado)
			nueva += cadena.charAt(i);
    }
    nueva += cadena.charAt(cadena.length()-1);
    return nueva;
}
boolean esVariable(String s){
	boolean cumple = true;
	for(int i = 0; i < reservados.length; i++)
		if(s.equals(reservados[i]))
			cumple = false;
	return cumple;
}
public void insertarInstrucciones(){
	tablaDeSimbolos.insertar("TURN", new MaquinaDePila.Girar());
	tablaDeSimbolos.insertar("FORWARD", new MaquinaDePila.Avanzar());
	tablaDeSimbolos.insertar("COLOR", new MaquinaDePila.CambiarColor());
}
public Configuracion ejecutarCodigo(String codigo){
    st = new StringTokenizer(ajustarCadena(codigo));
    newline=false;
    yyparse();
    if(!huboError)
		maquina.ejecutar();
	return maquina.getConfiguracion();
} 
public boolean compilar(String codigo){
    st = new StringTokenizer(ajustarCadena(codigo));
    newline=false;
    yyparse();
    return !huboError;
}
public boolean ejecutarSiguiente(){
    return maquina.ejecutarSiguiente();
}
public Configuracion getConfiguracion(){
    return maquina.getConfiguracion();
}
public void limpiar(){
    tablaDeSimbolos = new TablaDeSimbolos();
    insertarInstrucciones();
    maquina = new MaquinaDePila(tablaDeSimbolos);
}
public Configuracion ejecutar(){
    maquina.ejecutar();
    return maquina.getConfiguracion();
}
void dotest() throws Exception{
	insertarInstrucciones();
	BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
	while (true){
		huboError = false;
		try{ins = ajustarCadena(in.readLine());}
		catch (Exception e){}
		st = new StringTokenizer(ins);
		newline=false;
		//maquina = new MaquinaDePila(tablaDeSimbolos);
		yyparse();
		if(!huboError)
			maquina.ejecutar();
	}
}
public static void main(String args[]) throws Exception{
	Parser par = new Parser(false);
	par.dotest();
}
#line 455 "y.tab.c"
#define YYABORT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR goto yyerrlab
int
yyparse()
{
    register int yym, yyn, yystate;
#if YYDEBUG
    register char *yys;
    extern char *getenv();

    if (yys = getenv("YYDEBUG"))
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = (-1);

    yyssp = yyss;
    yyvsp = yyvs;
    *yyssp = yystate = 0;

yyloop:
    if (yyn = yydefred[yystate]) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = yylex()) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("yydebug: state %d, reading %d (%s)\n", yystate,
                    yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("yydebug: state %d, shifting to state %d (%s)\n",
                    yystate, yytable[yyn],yyrule[yyn]);
#endif
        if (yyssp >= yyss + yystacksize - 1)
        {
            goto yyoverflow;
        }
        *++yyssp = yystate = yytable[yyn];
        *++yyvsp = yylval;
        yychar = (-1);
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;
#ifdef lint
    goto yynewerror;
#endif
yynewerror:
    yyerror("syntax error");
#ifdef lint
    goto yyerrlab;
#endif
yyerrlab:
    ++yynerrs;
yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yyssp]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("yydebug: state %d, error recovery shifting\
 to state %d\n", *yyssp, yytable[yyn]);
#endif
                if (yyssp >= yyss + yystacksize - 1)
                {
                    goto yyoverflow;
                }
                *++yyssp = yystate = yytable[yyn];
                *++yyvsp = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("yydebug: error recovery discarding state %d\n",
                            *yyssp);
#endif
                if (yyssp <= yyss) goto yyabort;
                --yyssp;
                --yyvsp;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("yydebug: state %d, error recovery discards token %d (%s)\n",
                    yystate, yychar, yys);
        }
#endif
        yychar = (-1);
        goto yyloop;
    }
yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("yydebug: state %d, reducing by rule %d (%s)\n",
                yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    yyval = yyvsp[1-yym];
    switch (yyn)
    {
case 4:
#line 28 "P2.y"
{yyval = yyvsp[-1];}
break;
case 5:
#line 29 "P2.y"
{yyval = yyvsp[0];}
break;
case 6:
#line 30 "P2.y"
{yyval = yyvsp[-2];}
break;
case 7:
#line 31 "P2.y"
{yyval = yyvsp[-1];}
break;
case 8:
#line 33 "P2.y"
{yyval = new ParserVal(maquina.agregarOperacion("varPush_Eval")); maquina.agregar(yyvsp[0].sval);}
break;
case 9:
#line 34 "P2.y"
{yyval = new ParserVal(maquina.agregarOperacion("negativo"));}
break;
case 10:
#line 35 "P2.y"
{
			yyval = new ParserVal(maquina.agregarOperacion("constPush"));
			maquina.agregar(yyvsp[0].dval);}
break;
case 11:
#line 38 "P2.y"
{
			yyval = new ParserVal(yyvsp[0].ival);
			maquina.agregarOperacion("varPush");
			maquina.agregar(yyvsp[-2].sval);
			maquina.agregarOperacion("asignar");
			maquina.agregarOperacion("varPush_Eval"); 
			maquina.agregar(yyvsp[-2].sval);}
break;
case 12:
#line 45 "P2.y"
{
			yyval = new ParserVal(yyvsp[-2].ival);
			maquina.agregarOperacion("MUL");}
break;
case 13:
#line 48 "P2.y"
{
			yyval = new ParserVal(yyvsp[-2].ival);
			maquina.agregarOperacion("SUM");}
break;
case 14:
#line 51 "P2.y"
{
			yyval = new ParserVal(yyvsp[-2].ival);
			maquina.agregarOperacion("RES");}
break;
case 15:
#line 54 "P2.y"
{yyval = new ParserVal(yyvsp[-1].ival);}
break;
case 16:
#line 55 "P2.y"
{
			maquina.agregarOperacion("EQ");
			yyval = yyvsp[-2];}
break;
case 17:
#line 58 "P2.y"
{
			maquina.agregarOperacion("NE");
			yyval = yyvsp[-2];}
break;
case 18:
#line 61 "P2.y"
{
			maquina.agregarOperacion("LE");
			yyval = yyvsp[-2];}
break;
case 19:
#line 64 "P2.y"
{
			maquina.agregarOperacion("LQ");
			yyval = yyvsp[-2];}
break;
case 20:
#line 67 "P2.y"
{
			maquina.agregarOperacion("GR");
			yyval = yyvsp[-2];}
break;
case 21:
#line 70 "P2.y"
{
			maquina.agregarOperacion("GE");
			yyval = yyvsp[-2];}
break;
case 22:
#line 73 "P2.y"
{
			maquina.agregarOperacion("AND");
			yyval = yyvsp[-2];}
break;
case 23:
#line 76 "P2.y"
{
			maquina.agregarOperacion("OR");
			yyval = yyvsp[-2];}
break;
case 24:
#line 79 "P2.y"
{
			maquina.agregarOperacion("NOT");
			yyval = yyvsp[0];}
break;
case 25:
#line 82 "P2.y"
{yyval = yyvsp[0]; maquina.agregarOperacion("_return");}
break;
case 26:
#line 83 "P2.y"
{yyval = new ParserVal(maquina.agregarOperacion("push_parametro")); maquina.agregar((int)yyvsp[0].ival);}
break;
case 27:
#line 85 "P2.y"
{yyval = new ParserVal(maquina.agregarOperacionEn("invocar",(yyvsp[-3].ival))); maquina.agregar(null);}
break;
case 29:
#line 88 "P2.y"
{yyval = yyvsp[0]; maquina.agregar("Limite");}
break;
case 30:
#line 89 "P2.y"
{yyval = yyvsp[-2]; maquina.agregar("Limite");}
break;
case 31:
#line 91 "P2.y"
{yyval = new ParserVal(maquina.agregarOperacion("nop"));}
break;
case 32:
#line 93 "P2.y"
{
			yyval = yyvsp[-13];
			maquina.agregar(yyvsp[-7].ival, yyvsp[-13].ival + 1);
			maquina.agregar(yyvsp[-2].ival, yyvsp[-13].ival + 2);
			maquina.agregar(maquina.numeroDeElementos() - 1, yyvsp[-13].ival + 3);}
break;
case 33:
#line 98 "P2.y"
{
			yyval = yyvsp[-10];
			maquina.agregar(yyvsp[-4].ival, yyvsp[-10].ival + 1);
			maquina.agregar(yyvsp[-1].ival, yyvsp[-10].ival + 2);
			maquina.agregar(maquina.numeroDeElementos() - 1, yyvsp[-10].ival + 3);}
break;
case 34:
#line 103 "P2.y"
{
			yyval = yyvsp[-9];
			maquina.agregar(yyvsp[-3].ival, yyvsp[-9].ival + 1);
			maquina.agregar(yyvsp[0].ival, yyvsp[-9].ival + 2);}
break;
case 35:
#line 107 "P2.y"
{
			yyval = yyvsp[-15];
			maquina.agregar(yyvsp[-10].ival, yyvsp[-15].ival + 1);
			maquina.agregar(yyvsp[-7].ival, yyvsp[-15].ival + 2);
			maquina.agregar(yyvsp[-3].ival, yyvsp[-15].ival + 3);
			maquina.agregar(yyvsp[0].ival, yyvsp[-15].ival + 4);}
break;
case 38:
#line 115 "P2.y"
{ 
			yyval = new ParserVal(yyvsp[-4].ival);
			maquina.agregar(null);}
break;
case 39:
#line 119 "P2.y"
{yyval = new ParserVal(maquina.agregar((Funcion)(yyvsp[0].obj)));}
break;
case 40:
#line 121 "P2.y"
{maquina.agregarOperacion("declaracion");}
break;
case 41:
#line 123 "P2.y"
{maquina.agregarOperacion("declaracion");}
break;
case 42:
#line 125 "P2.y"
{yyval = new ParserVal(maquina.agregar(yyvsp[0].sval));}
break;
case 43:
#line 127 "P2.y"
{maquina.agregar(null);}
break;
case 44:
#line 129 "P2.y"
{yyval = new ParserVal(maquina.agregarOperacion("stop"));}
break;
case 45:
#line 131 "P2.y"
{
			yyval = new ParserVal(maquina.agregarOperacion("IF_ELSE"));
	        maquina.agregarOperacion("stop");/*then*/
	        maquina.agregarOperacion("stop");/*else*/
	        maquina.agregarOperacion("stop");}
break;
case 46:
#line 137 "P2.y"
{
			yyval = new ParserVal(maquina.agregarOperacion("WHILE"));
			maquina.agregarOperacion("stop");/*cuerpo*/
			maquina.agregarOperacion("stop");}
break;
case 47:
#line 142 "P2.y"
{
			yyval = new ParserVal(maquina.agregarOperacion("FOR"));
	        maquina.agregarOperacion("stop");/*condicion*/
	        maquina.agregarOperacion("stop");/*instrucción final*/
	        maquina.agregarOperacion("stop");/*cuerpo*/
	        maquina.agregarOperacion("stop");}
break;
case 48:
#line 149 "P2.y"
{ yyval = new ParserVal(maquina.agregarOperacion("nop"));}
break;
case 49:
#line 150 "P2.y"
{yyval = yyvsp[0];}
break;
case 50:
#line 151 "P2.y"
{yyval = yyvsp[-2];}
break;
#line 833 "y.tab.c"
    }
    yyssp -= yym;
    yystate = *yyssp;
    yyvsp -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("yydebug: after reduction, shifting from state 0 to\
 state %d\n", YYFINAL);
#endif
        yystate = YYFINAL;
        *++yyssp = YYFINAL;
        *++yyvsp = yyval;
        if (yychar < 0)
        {
            if ((yychar = yylex()) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = 0;
                if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
                if (!yys) yys = "illegal-symbol";
                printf("yydebug: state %d, reading %d (%s)\n",
                        YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("yydebug: after reduction, shifting from state %d \
to state %d\n", *yyssp, yystate);
#endif
    if (yyssp >= yyss + yystacksize - 1)
    {
        goto yyoverflow;
    }
    *++yyssp = yystate;
    *++yyvsp = yyval;
    goto yyloop;
yyoverflow:
    yyerror("yacc stack overflow");
yyabort:
    return (1);
yyaccept:
    return (0);
}
