import java.awt.*;
import java.awt.event.*;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JOptionPane;

public class Velha implements ActionListener {
    private int[][] jogoGanho = new int[][] {
            {0, 1, 2}, {3, 4, 5}, {6, 7, 8}, //Vitorias horizontais
            {0, 3, 6}, {1, 4, 7}, {2, 5, 8}, //Vitorias verticais
            {0, 4, 8}, {2, 4, 6}            //Vitorias diagonais
        };
    private JFrame janela = new JFrame(this.getClass().getName());
    private JButton tabuleiro[] = new JButton[9];
    private int nJogada = 0;
    private String marca = "";
    private boolean flagVitoria = false;

    public Velha(){
    janela.setSize(300,300);
    janela.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    janela.setLayout(new GridLayout(3,3));
    

    for(int i=0; i<=8; i++){
        tabuleiro[i] = new JButton();
        janela.add(tabuleiro[i]);
        tabuleiro[i].addActionListener(this);
    }
    

    janela.setVisible(true);
    }

    public void actionPerformed(ActionEvent a) {
        nJogada++;
        
        if(nJogada % 2 == 0){
            marca = "O";
        } else {
            marca = "X";
        }

        
         JButton pressedButton = (JButton)a.getSource(); 
         pressedButton.setText(marca);
         pressedButton.setEnabled(false);
        
        for(int i=0; i<=7; i++){
            if( tabuleiro[jogoGanho[i][0]].getText().equals(tabuleiro[jogoGanho[i][1]].getText()) && 
                tabuleiro[jogoGanho[i][1]].getText().equals(tabuleiro[jogoGanho[i][2]].getText()) && 
                tabuleiro[jogoGanho[i][0]].getText() != ""){
                flagVitoria = true;
            }
        }
        
        if(flagVitoria == true){
            JOptionPane.showMessageDialog(null, marca + " ganhou!");
            System.exit(0);
        } else if(nJogada == 9 && flagVitoria == false){
            JOptionPane.showMessageDialog(null, this.getClass().getName() + "!");
            System.exit(0);
        }        
    }
    
    public static void main(String[] args){
        Velha jogo = new Velha();
    }
}