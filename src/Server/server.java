import java.util.Scanner;

public class server {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int programs = in.nextInt();
		int time = in.nextInt();
		int sum = 0;
		int end = 0;
		for(int i = 1; i <= programs; i++) {
			sum += in.nextInt();
			if(sum <= time) {
				end = i;
			}
		}
		in.close();
		System.out.println(end);
	}
	
}
