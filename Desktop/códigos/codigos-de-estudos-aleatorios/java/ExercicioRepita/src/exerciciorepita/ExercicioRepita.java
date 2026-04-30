/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package exerciciorepita;

import javax.swing.JOptionPane;

/**
 *
 * @author Usuario
 */
public class ExercicioRepita {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        //JOptionPane.showMessageDialog( null, "Olá, Mundo!");
        //int n = Integer.parseInt(JOptionPane.showInputDialog(null, "Informe um número: "));
        //JOptionPane.showMessageDialog(null, "Você digitou: " +n);
        int n, s =0;
       
        do{
          n = Integer.parseInt(JOptionPane.showInputDialog
        (null, "<html>Informe um número: <br><em>(Valor 0 Interrompe)</em></html>"));
            
          s +=n; 
        }while(n !=0);
        JOptionPane.showMessageDialog(null, 
                "<html>Resultado final <hr>" + "Somatório vale " + s+ "</html>");
    }
    
}
