
public class time 
{
	
	private int hours;
	private int minutes;
	private int secondes;
	
	public time(int h,int m,int s) 
	{ settime(h,m,s);}
	public time(int h,int m) {this(h,m,0);}
	public time(int h) {this(h,0,0);}
	public time(){this(0,0,0);}
 public void settime(int h,int m,int s)
 {
	 hours=((h>=0 && h<=12)? h:h-12);
	 minutes=((m>=0 && m<60) ? m:0);
	 secondes=((s>=0 && s<60)? s:0);
 }
 public String gettime()
 {
	 return String.format("%02d:%02d:%02d",hours,minutes,secondes);
 }
}
