#include <stdio.h>
#include <stdlib.h>
//ultima vizita a fost la data de 5.2.1986 la ora 21:29
void luni(unsigned luna[])
    {
        luna[1] = 31;
        luna[2] = 28;
        luna[3] = 31;
        luna[4] = 30;
        luna[5] = 31;
        luna[6] = 30;
        luna[7] = 31;
        luna[8] = 31;
        luna[9] = 30;
        luna[10] = 31;
        luna[11] = 30;
        luna[12] = 31;
    }

int main()
{
    unsigned luna[13], i, x, s, min1, ora1, min2, ora2, an1, an2, z1, l1, z2, l2, x2;

   luni(luna);

    printf("\n");

    s = luna[1];

    //printf("x = ");
    //scanf("%d", &x);
    printf("Din ce an sa inceapa?\nRaspuns: ");
    scanf("%d", &an1);
    printf("\nDin ce luna sa inceapa?\nRaspuns: ");
    scanf("%d", &l1);
     printf("\nDin ce zi sa inceapa?\nRaspuns: ");
    scanf("%d", &z1);
    printf("\nDin ce ora sa inceapa?\nRaspuns: ");
    scanf("%d", &ora1);
     printf("\nDin ce minut sa inceapa?\nRaspuns: ");
    scanf("%d", &min1);
    an2 = an1;
    z2 = z1;
    l2 = l1;
    unsigned li = l1;
    ora2 = ora1;
    min2 = min1;
    x = (60 * 24 * 365 * 75) + 12 + 19 * 60 + 116 * 24 * 60 ;
    x2 = x;
    //x*=365;

    i = 1;

    //if(x<365)
   while(x != 0)
   {
       min2++;
       //z2++;
       x--;
       if(min2 > 59)
       {
           min2 = 0;
           ora2++;
           if(ora2 > 23)
           {
                ora2 = 0;
                z2++;
                if(z2 > luna [l1])
                    {
                        l2++;
                        l1++;
                        if(l1 == 13) l1 = 1;
                        z2 = 1;
                        if(l2 > 12) {an2++; l2 = 1;}
                    }
           }
       }

       //i++;
       //if(i == 13) i = 1;
   }
   /*
   while(x>=0)
   {
       s = s + luna[i];
        //if(s >= 396) an2++;  // suma zilelor unui an plus prima luna din an
       i++;
       if(i == 13) i = 1;
       z2 = z2 + luna[i];
       x= x - z2;
       if(z2 > luna[i+1])
        {
            l2++;
            z2 = z2 - luna[i+1];
            if(l2 > 12) an2++;
        }

   }


    unsigned l, z;
    if((i-1)%12 == 0) l = 12; // daca e in luna a 12-a atuncea l = 12 ca altfel era 1
        else if (i == 1) l = i;  // daca luna e 1 atunci l = 1
                else l = i - 1; // l-1 pt ca i la ultima incrementare a devenit i+1
    */
    //if (x % 365 == 0) z = 31; else z = x - (s - luna[l]);

    printf("\n");

    printf("%d:%d data de %d.%d.%d cometa halley ne viziteaza la data de %d.%d.%d ora %d:%d",ora1, min1, z1, li, an1, z2, l2, an2, ora2, min2);



    return 0;
}
