import java.lang.Runtime;

public class HelloCalc {
    public static void main(String[] args) {
		try {
			Runtime.getRuntime().exec("c:\\windows\\system32\\calc.exe");
		} catch (Exception e) {
		}
    }
}


