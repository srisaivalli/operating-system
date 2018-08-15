import java.awt.*;
import javax.swing.*;
class test5 extends JFrame
{
JLabel l;
JTextField t;
JComboBox j;
JButton b;
public test5()
{
setLayout(new FlowLayout());
l=new JLabel("enter name");
t=new JTextField(15);
b=new JButton("submit");
j=new JComboBox();
j.addItem("Andhra Pradesh");
j.addItem("Telengana");
j.addItem("Kerala");
j.addItem("Karnataka");
j.addItem("Tamil Nadu");
add(l);
add(t);
add(j);
add(b);
setDefaultCloseOperation(EXIT_ON_CLOSE);
setTitle("Form");
setSize(300,300);
setVisible(true);
}
public static void main(String[] args)
{
new test5();
}
}
 
