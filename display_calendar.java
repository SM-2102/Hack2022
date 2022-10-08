import java.util.*;

public class display_calendar {

    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        int m;
        int counter;
        int year;
        String mon;
        int month = 0;

        //user prompt for year
        System.out.print("Enter the year: ");
        year = in.nextInt();

        int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        String months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

        //user prompt for month
        System.out.print("Enter the month: ");
        mon = in.next();

        //check for the month
        String s1 = mon.substring(0, 3);
        for (int j = 0; j < 12; j++) {
            String s2 = months[j].substring(0, 3);
            if (s1.equalsIgnoreCase(s2) == true) {
                month = j + 1;
            }
        }

        //if user's input is not a month
        if (month == 0) {
            System.exit(0);

        }
        System.out.println("\t\t\t" + months[month - 1] + "\t" + year + "\n\n");
        System.out.println("S\tM\tT\tW\tT\tF\tS\n");

        //checking for leap year
        if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
            days[2] = 29;
        }
        m = (month + 10) % 12;
        if (m == 0) {
            m = m + 12;
        }

        //for the first day of the month
        counter = (1 + (int)Math.floor(2.6 * m - 0.2) - 2 * (year / 100) + year + (int)Math.floor(year / 4) + (int)Math.floor((
                       year / 100) / 4)) % 7;
        for (int i = 1; i < counter; i ++) {
            System.out.print("\t");
        }

        //printing the calendar
        for (int i = 1; i <= days[month - 1]; i ++) {
            System.out.printf("%2d", i);
            System.out.print("\t");
            if ((i + counter - 1) % 7 == 0)  {
                System.out.println();
            }
        }
        in.close();
    }
}
