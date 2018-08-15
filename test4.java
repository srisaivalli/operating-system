import java.awt.*;
import javax.swing.*;
class test4 extends JFrame
{
JLabel l;
JTextField t;
JButton b;
public test4()
{
setLayout(new FlowLayout());
setTitle("Registration");
setDefaultCloseOperation(EXIT_ON_CLOSE);
setSize(300,300);
setVisible(true);
l=new JLabel("Enter Name");
t=new JTextField(10);
b=new JButton("submit");
add(l);
add(t);
add(b);
}
public static void main(String[] args)
{
new test4();
}
}
