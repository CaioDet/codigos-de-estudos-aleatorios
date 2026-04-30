
package tiposprimitivos;

import java.util.Scanner;

 class TiposPrimitivos {


    public static void main(String[] args) {
        // TODO code application logic here
        Scanner teclado = new Scanner (System.in);
        //Importa a biblio scanner para inserir dados.
        System.out.println("Digite o nome do aluno:");
        String nome = teclado.nextLine();
        
        System.out.println("Digite a nota do aluno:");
        float nota = teclado.nextFloat();
        
        System.out.println("Sua Nota é: "+ nota);
        System.out.printf("A nota de %s é é %1f \n", nome,nota);
        System.out.format("A nota de %s é é %1f \n", nome,nota);
    }
    
}
