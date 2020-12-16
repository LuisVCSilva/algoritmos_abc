import javax.swing.*;
import javax.swing.JOptionPane;
import java.awt.*;
import java.awt.event.*;


public class Calc2 extends JApplet {
   @Override
   public void init() {
      GUICalc2 calc=new GUICalc2();
      getContentPane().add(calc);
      }
   }

    class GUICalc2 extends JPanel implements ActionListener {
      JButton n1,n2,n3,n4,n5,n6,n7,n8,n9,n0,addBot,subBot,prdBot,quoBot,expBot,iguBot,ptoBot,potBot,log10Bot,log2Bot,lnBot,senBot,cosBot,tgtBot;
      JRadioButton flagBot;
      boolean flagDegRad = true;
      static JTextField resultado=new JTextField("0",45);
      static String ultimoComando=null;
      static boolean flagUn = false;
      JOptionPane p=new JOptionPane();
      double e1=0,e2=0,res;

      
      
      private static void define(String no)
        {
         if((resultado.getText()).equals("0"))
            resultado.setText(no);
          else if("=".equals(ultimoComando))
           {
            resultado.setText(no);
            ultimoComando=null;
           }
          else
            resultado.setText(resultado.getText()+no);
         }

      public GUICalc2 () {
         setLayout(new BorderLayout());
         resultado.setEditable(false);
         resultado.setSize(300,200);
         add(resultado,BorderLayout.NORTH);
         JPanel panel=new JPanel();
         panel.setLayout(new GridLayout(6,5));

         n7=new JButton("7");
         panel.add(n7);
         n7.addActionListener(this);
         n8=new JButton("8");
         panel.add(n8);
         n8.addActionListener(this);
         n9=new JButton("9");
         panel.add(n9);
         n9.addActionListener(this);
         quoBot=new JButton("/");
         panel.add(quoBot);
         quoBot.addActionListener(this);

         flagBot = new JRadioButton("rad",flagDegRad);
         panel.add(flagBot);
         flagBot.addActionListener(this);
         
         n4=new JButton("4");
         panel.add(n4);
         n4.addActionListener(this);
         n5=new JButton("5");
         panel.add(n5);
         n5.addActionListener(this);
         n6=new JButton("6");
         panel.add(n6);
         n6.addActionListener(this);
         prdBot=new JButton("*");
         panel.add(prdBot);
         prdBot.addActionListener(this);

         
         
         n1=new JButton("1");
         panel.add(n1);
         n1.addActionListener(this);
         n2=new JButton("2");
         panel.add(n2);
         n2.addActionListener(this);
         n3=new JButton("3");
         panel.add(n3);
         n3.addActionListener(this);
         subBot=new JButton("-");
         panel.add(subBot);
         subBot.addActionListener(this);

         

         n0=new JButton("0");
         panel.add(n0);
         n0.addActionListener(this);
         
         iguBot=new JButton("=");
         panel.add(iguBot);
         iguBot.addActionListener(this);
         
         addBot=new JButton("+");
         panel.add(addBot);
         addBot.addActionListener(this);
         
         potBot=new JButton("^");
         panel.add(potBot);
         potBot.addActionListener(this);
         
         ptoBot=new JButton(".");
         panel.add(ptoBot);
         ptoBot.addActionListener(this);         
         
         senBot = new JButton("sen");
         panel.add(senBot);
         senBot.addActionListener(this);
         
         cosBot = new JButton("cos");
         panel.add(cosBot);
         cosBot.addActionListener(this);
         
         tgtBot = new JButton("tgt");
         panel.add(tgtBot);
         tgtBot.addActionListener(this);
         
        log2Bot = new JButton("log2");
        panel.add(log2Bot);
        log2Bot.addActionListener(this);
        
        log10Bot = new JButton("log10");
        panel.add(log10Bot);
        log10Bot.addActionListener(this);        
        
        lnBot = new JButton("ln");
        panel.add(lnBot);
        lnBot.addActionListener(this);
        
        expBot = new JButton("exp");
        panel.add(expBot);
        expBot.addActionListener(this);
        add(panel,BorderLayout.CENTER);
        }
      
      public void actionPerformed(ActionEvent ae)
      {
      if(ae.getSource()==flagBot)
      flagDegRad = flagBot.isSelected();
      else if(ae.getSource()==n1) define("1");
      else if(ae.getSource()==n2) define("2");
      else if(ae.getSource()==n3) define("3");
      else if(ae.getSource()==n4) define("4");
      else if(ae.getSource()==n5) define("5");
      else if(ae.getSource()==n6) define("6");
      else if(ae.getSource()==n7) define("7");
      else if(ae.getSource()==n8) define("8");
      else if(ae.getSource()==n9) define("9");
      else if(ae.getSource()==n0) define("0");
      else if(ae.getSource()==ptoBot) define(".");
      else if(ae.getSource()==subBot)
             {
             e1=Double.parseDouble(resultado.getText());
             ultimoComando="-";
             resultado.setText("0");
             }
      else if(ae.getSource()==potBot)
            {
            e1 = Double.parseDouble(resultado.getText());
            ultimoComando="^";
            resultado.setText("0");
            }
            else if((ae.getSource()==senBot) || (ae.getSource()==cosBot) || (ae.getSource()==tgtBot) || (ae.getSource()==log10Bot) || (ae.getSource()==log2Bot) || (ae.getSource()==lnBot) || (ae.getSource()==expBot))
            {
            e1 = Double.parseDouble(resultado.getText());
            e2 = 0;
            ultimoComando= (ae.getSource()==senBot) ? "sen" : (ae.getSource()==cosBot) ? "cos" : (ae.getSource()==tgtBot) ? "tgt" : (ae.getSource()==log10Bot) ? "log10" : (ae.getSource()==log2Bot) ? "log2" : (ae.getSource()==lnBot) ? "lnx" : "exp";
            resultado.setText("0");
            flagUn = true;
            }
      else if(ae.getSource()==quoBot)
             {
             e1=Double.parseDouble(resultado.getText());
             ultimoComando="/";
             resultado.setText("0");
             }
      else if((ae.getSource()==iguBot))
             {
             if(flagUn==false)
             {
             e2=Double.parseDouble(resultado.getText());
             }
          switch (ultimoComando) {
              case "/":
                  res=e1/e2;
                  break;
              case "*":
                  res=e1*e2;
                  break;
              case "-":
                  res=e1-e2;
                  break;
              case "+":
                  res=e1+e2;
                  break;
              case "^":
                  res=Math.pow(e1, e2);
                  break;
              case "sen":
                  res= flagDegRad==true ? Math.toDegrees(Math.toRadians(Math.sin(e1))) : Math.toRadians(Math.sin(e1));
                  break;
              case "cos":
                  res= flagDegRad==true ? Math.toDegrees(Math.toRadians(Math.cos(e1))) : Math.toRadians(Math.cos(e1));
                  break;
              case "tgt":
                  res= flagDegRad==true ? Math.toDegrees(Math.toRadians(Math.tan(e1))) : Math.toRadians(Math.tan(e1));
                  break;
              case "log10":
                  res=Math.log10(e1);
                  break;
              case "log2":
                  res=Math.log(e1)/Math.log(2);
                  break;
              case "lnx":
                  res=Math.log(e1);
                  break;
              case "exp":
                  res=Math.exp(e1);
                  break;
          }
             resultado.setText(" "+res);
             ultimoComando="=";
             flagUn = false;
             }
      else if(ae.getSource()==prdBot)
             {
              e1=Double.parseDouble(resultado.getText());
              ultimoComando="*";
              resultado.setText("0");
              }
      else if(ae.getSource()==addBot)
              {
              e1=Double.parseDouble(resultado.getText());
              ultimoComando="+";
              resultado.setText("0");
              }
       }
}