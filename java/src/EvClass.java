import java.awt.FlowLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JFrame;
import javax.swing.JTextField;
import javax.swing.JPasswordField;
import javax.swing.JOptionPane;
public class EvClass extends JFrame  {
	private JTextField field1;
	private JTextField field2;
	private JTextField field3; 
	private JPasswordField pwfield;
	
	public EvClass(){
	super("my sowftware");
	setLayout(new FlowLayout());
	field1=new JTextField(10);
	add(field1);
	field2=new JTextField("enter hear");
	add(field2);
	field3=new JTextField(" can't edit this");
	field3.setEditable(false);
	add(field3);
	pwfield=new JPasswordField("    ");
	add(pwfield);
	thehandler handler =new thehandler();
	field1.addActionListener(handler);
	field2.addActionListener(handler);
	field3.addActionListener(handler);
	pwfield.addActionListener(handler);}
	private class thehandler implements ActionListener
	{
		public void actionPerformed(ActionEvent myEvent) {
			String mytext=" ";
			if (myEvent.getSource()==field1) {
			mytext=String.format("you tioed : %s",myEvent.getActionCommand());
				}	
			else if (myEvent.getSource()==field2) {
				mytext=String.format("you tioed : %s",myEvent.getActionCommand());
					}	
			else if (myEvent.getSource()==field3) {
				mytext=String.format("you tioed : %s",myEvent.getActionCommand());
					}	
			else if (myEvent.getSource()==pwfield) {
				mytext=String.format("you tioed : %s",myEvent.getActionCommand());
					}	
			JOptionPane.showMessageDialog(null,mytext);
	}
}}
	
