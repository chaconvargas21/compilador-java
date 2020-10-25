using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading.Tasks;

namespace TraductorEspañolInglesCodigoJava
{
    class Program
    {
        static void Main(string[] args)
        {

            String[] PalabrasIngles = new string[] { "short", "int", "long", "float", "double", "char", "String", "boolean", "abstract", "catch",
                "assert", "case", "class", "const", "continue", "default", "instanceof", "enum", "static", "this", "exports", "extends", "final",
                "finally", "do", "implements", "import", "try", "interface", "break", "switch", "throw", "while", "module", "native", "new", "null",
                "package", "for", "private", "protected", "public", "requires", "return", "if", "synchronized", "else", "transient", "used", "void",
                "volatile", "true", "false", "main", "System", "out", "println", "abs", "asin", "atan", "acos", "tan", "tanh", "cbrt", "ceil", "sqrt", "cosh",
                "sinh", "exp", "random", "floor", "max", "min", "round", "sin", "cos", "err", "in", "Math" };
            Console.WriteLine("C:/Users/Marcelo/Desktop/parser5/");


            Console.Write("Ingrese la direccion del archivo en disco: ");
            string fichero = Console.ReadLine();

            string traduccion = "";

            
            try
            {
                using (StreamReader lector = new StreamReader(fichero))
                {
                    while (lector.Peek() > -1)
                    {
                        string linea = lector.ReadLine();
                        linea = linea.Trim();

                        if (!String.IsNullOrEmpty(linea))
                        {

                            List<string> palabras = Separar(linea);

                            for (int i=0; i<palabras.Count; i++)
                            {
                                int posicion = Posicion(palabras[i]);

                         
                                if (posicion!=-1)
                                {
                                    palabras[i] = PalabrasIngles[posicion];
                                }

                                //validamos si son puntos
                                if (palabras[i].Equals("."))
                                    traduccion = traduccion + palabras[i];
                                else
                                {
                                    //validamos que la cadena no sea la ultima del arreglo
                                    if(i < palabras.Count - 1)
                                    {
                                        //validamos que el siguiente caracter sea un punto, y no le ponemos separacion
                                        if (palabras[i+1].Equals("."))
                                            traduccion = traduccion + palabras[i];
                                        //si no es, si le ponemos separacion
                                        else
                                            traduccion = traduccion + palabras[i] + " ";
                                    }
                                    else
                                    {
                                        traduccion = traduccion + palabras[i] + " ";
                                    }
                                }

                            }
                        }
                        traduccion = traduccion + "\n";

                    }
                }
            }
            catch (Exception ex)
            {
                Console.WriteLine("Error: " + ex.Message);
            }

            string nombreTraduccion = "";
            Console.Write("Introduzca el nombre del archivo de traduccion: ");
            nombreTraduccion = Console.ReadLine() + ".java";

            // Set a variable to the Documents path.
            string docPath = Environment.GetFolderPath(Environment.SpecialFolder.Desktop);

            // Write the text to a new file named "WriteFile.txt".
            File.WriteAllText(Path.Combine(docPath, nombreTraduccion), traduccion);

            Console.WriteLine("Listo");
            Console.ReadLine();
            
        }

        private static List<string> Separar(string linea)
        {
            char[] caracteres = linea.ToCharArray();
            List<string> salida = new List<string>();
            string token = "";
            for (int i = 0; i < caracteres.Length; i++)
            {
                if (esCaracterSeparador(caracteres[i]))
                {
                    if (!token.Equals(""))
                    {
                        salida.Add(token);
                        token = "";
                    }
                    salida.Add(caracteres[i] + "");

                    if ((i+1) == caracteres.Length)
                        return salida;
                }
                else if (esComparador(caracteres[i]))
                {
                    if (!esComparador(caracteres[i + 1]) && !esComparador(caracteres[i - 1]))
                    {
                        salida.Add(token);
                        salida.Add("=");
                        token = "";
                    }
                    else
                    {
                        token = token + caracteres[i];
                        if ((i + 1) == caracteres.Length)
                            return salida;
                    }
                }
                else
                {
                    if(caracteres[i].Equals(' '))
                    {
                        salida.Add(token);
                        token = "";
                    }
                    else if (caracteres[i].Equals('.'))
                    {
                        salida.Add(token);
                        salida.Add(".");
                        token = "";
                    }
                    else
                    {
                        token = token + caracteres[i];
                        if ((i + 1) == caracteres.Length)
                            return salida;
                    }
                }
            }

            return salida;
        }

        private static bool esComparador(char v)
        {
            if (v.Equals('<') || v.Equals('=') || v.Equals('>') || v.Equals('!'))
                return true;
            return false;
        }

        private static bool esCaracterSeparador(char v)
        {
            if (v.Equals(',') || v.Equals(';') || v.Equals('(') || v.Equals(')') || v.Equals('[') || v.Equals(']') || v.Equals('{') || v.Equals('}'))
                return true;
            return false;
        }

        private static int Posicion(string palabra)
        {

            String[] PalabrasEspanhol = new string[] { "corto", "entero", "largo", "flotante", "doble", "caracter", "Cadena", "booleano",
                "abstracto", "captura", "afirmar", "caso", "clase", "constante", "continuar", "defecto", "envezde", "enumeracion", "estatico",
                "esto", "exportar", "extender", "final", "finalmente", "hacer", "implementar", "importar", "intentar", "interface", "interrupcion",
                "interruptor", "lanzar", "mientras", "modulo", "nativo", "nuevo", "nulo", "paquete", "para", "privado", "protegido", "publico",
                "requerir", "retornar", "si", "sincronizado", "sino", "transitorio", "uses", "vacio", "volatil", "verdadero", "falso", "principal",
            "Sistema", "salida", "imprimirlinea", "absoluto", "arcoseno", "arcitangente", "arcocoseno", "tangente", "tanghiperb", "cbrt", "ceil", "raizcuadrada",
                "cosenohiperb", "senohiperb", "exp", "random", "floor", "maximo", "minimo", "redondear", "seno", "coseno", "error", "entrada", "Matematica"
};


            bool encontrado = false;
            int posicion = -1;
            int contador = 0;
            while(!encontrado && contador < PalabrasEspanhol.Length)
            {
                if (palabra.Equals(PalabrasEspanhol[contador]))
                {
                    encontrado = true;
                    posicion = contador;
                }

                contador++;
            }

            return posicion;
        }
    }
}
