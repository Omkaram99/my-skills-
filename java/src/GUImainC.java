import javax.swing.JOptionPane;
public class GUImainC {
	
public static void main(String arg[]) {
	String x,y,op;
	x=JOptionPane.showInputDialog("enter first number");
	y=JOptionPane.showInputDialog("enter second number");
	double fn=Double.parseDouble(x);
	double sn=Double.parseDouble(y);

	op=JOptionPane.showInputDialog("choose your option from below list\n1)addition\n2)subration\n3)multiplication\n4)division");
	double opi=Double.parseDouble(op);
	
	if(opi==1) {
	double Sum=fn+sn;
	JOptionPane.showMessageDialog(null,"total is "+Sum,"adition of two numbers",JOptionPane.PLAIN_MESSAGE);
	}
	else if  (opi==2) {double subration =fn-sn;
	JOptionPane.showMessageDialog(null,"diffrence is "+subration,"diffrence of two numbers",JOptionPane.PLAIN_MESSAGE);
	}
	else if (opi==3) {double mul =fn*sn;
	JOptionPane.showMessageDialog(null,"multiplication is "+mul,"multiplation of two numbers",JOptionPane.PLAIN_MESSAGE);
	}
	else if(opi==4) {double div=fn/sn;
	JOptionPane.showMessageDialog(null,"division is "+div,"division of two numbers",JOptionPane.PLAIN_MESSAGE);
	}
	else {;}
}
}
