import java.awt.*;
import javax.swing.*;
import java.awt.event.*;
import java.io.*;

class test7 extends JFrame implements ActionListener{
JLabel l;
JTextField t;
JButton b;
JTextArea ta;
JScrollPane jsp;
JPanel p;
public test7()
{
setLayout(new FlowLayout());
setSize(300,300);
setVisible(true);
setDefaultCloseOperation(EXIT_ON_CLOSE);
l= new JLabel("Enter TextName:");
t=new JTextField(10);
b=new JButton("submit");
ta=new JTextArea(80,90);
jsp=new JScrollPane(ta);
p=new JPanel();
p.add(l);
p.add(t);
p.add(b);
add(p,"North");
add(jsp);
b.addActionListener(this);
setTitle("Search");
}
public void actionPerformed(ActionEvent ae)
{
ta.setText("");
try{
String fname=ta.getText();
FileInputStream fis=new FileInputStream(fname);
int size=fis.available();
for(int i=1;i<=size;i++)
{
System.out.println((char)fis.read());
ta.setText((char)fis.read()+"");
ta.append((char)fis.read()+"");
}
}catch(Exception e){
JOptionPane.showMessageDialog(null,e.getMessage());
}
}
public static void main(String[] args)
{
new test7();
	}

}
