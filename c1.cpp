# include <stdio.h>
# include <conio.h>
main ()
{
     int choice;
     printf ("choice of destinations:\n");
     printf ("\t1-mercury\n");
     printf ("\t2-venus\n");
     printf ("\t3-mars\n");
     printf ("enter the number corresponding to your choice:");
     scanf ("%i", &choice);
     if (choice==1)
     {
          printf ("mercury is the closest to the sun.");
          printf ("so the weather may be quite hot there.");
          printf ("the journey will cost you rs. 620 IGCS.");
     }
     else if (choice==2)
     {
          printf ("venus is the saecond planet.");
          printf ("the weather maybe hot and poisonous.");
          printf ("the journey will cost you rs. 4200 IGCS.");
     }
     else if (choice==3)
     {
          printf ("mars is the closest planet to the earth.");
          printf ("the weather has been excellent till now.");
          printf ("the journey will cost you rs. 1200 IGCS.");
     }
     else
     {
         printf ("unknown destination. unpredictable cost.");
         printf ("\n note: IGC= inter-galactic currency");
     }
     }
          
          
         
