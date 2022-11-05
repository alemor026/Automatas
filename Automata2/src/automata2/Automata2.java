package automata2;
import java.util.Scanner;
/**
 *
 * @author Alemor
 */

public class Automata2 {

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
     
        System.out.println("\n\n\t AFD (ab)* ");
        System.out.print("\n\t SOLO ACEPTA VALORES a,b \n  Escribe un Automata: ");
        String cadena=sc.nextLine();
        int a=0;
        for (int i=0;i<cadena.length();i++){
        a++;
        }
     
        int x=a;
        if(a==0){
            System.out.println("\n\t EL AUTOMATA ES INVALIDO");
            System.out.println("\n\t     numero de caracteres : "+a);
        }
        else if ((x % 2) == 0) {
 // VALIDES.
            char[] cadena_caracter = cadena.toCharArray();          
            //char tabla[1]=1;
            int valido1=0;
            int valido2=0;
            for(int i=0;i<cadena.length();i++){
                if('a'==cadena_caracter[i]){
                    valido1=1;
                    i++;
                }
                else{
                valido1=0;
                break;
                }
                if('b'==cadena_caracter[i]){
                    valido2=1;
                }
                else{
                valido2=0;
                break;
             
                }
             
            }
            if(valido1==1 && valido2==1){
                System.out.println("\n\t EL AUTOMATA ES VALIDO");
                System.out.println("\n\t     numero de caracteres : "+a);
            }
            else{
                System.out.println("\n\t EL AUTOMATA ES INVALIDO");
                System.out.println("\n\t     numero de caracteres : "+a);
            }
 }
        else{
            System.out.println("\n\t EL AUTOMATA ES INVALIDO");
            System.out.println("\n\t     numero de caracteres : "+a);
        }
    }
}