# include <stdio.h>
int main ()

{
    int cem, cin, vint, dez, cinco, dois, aux;
    double valor, um, cinquen, vintc, dezi, cinc, cent;
    scanf ("%lf", &valor);
    cem = valor/100;
    aux = valor - (cem*100);
    cin = aux/50;
    aux = aux - (cin*50);
    vint = aux/20;
    aux = aux - (vint*20);
    dez = aux/10;
    aux = aux - (dez*10);
    cinco = aux/5;
    aux = aux - (cinco*5);
    dois = aux/2;
    aux = aux - (dois*2);
    printf ("NOTAS:\n");
    printf ("%d nota(s) de R$ 100.00\n", cem);
    printf ("%d nota(s) de R$ 50.00\n", cin);
    printf ("%d nota(s) de R$ 20.00\n", vint);
    printf ("%d nota(s) de R$ 10.00\n", dez);
    printf ("%d nota(s) de R$ 5.00\n", cinco);
    printf ("%d nota(s) de R$ 2.00\n", dois);
    valor = (double)valor - (cem*100) - (cin*50) - (vint*20) - (dez*10) - (cinco*5) - (dois*2);
    aux = valor;
    um = aux;
    aux %= 1;
    aux = valor*100 - (int)valor*100;
    cinquen = aux/50;
    aux %= 50;
    vintc = aux/25;
    aux %= 25;
    dezi = aux/10;
    aux %= 10;
    cinc = aux/5;
    aux %= 5;
    cent = aux;
    printf ("MOEDAS:\n");
    printf ("%.0lf moeda(s) de R$ 1.00\n", um);
    printf ("%.0lf moeda(s) de R$ 0.50\n", cinquen);
    printf ("%.0lf moeda(s) de R$ 0.25\n", vintc);
    printf ("%.0lf moeda(s) de R$ 0.10\n", dezi);
    printf ("%.0lf moeda(s) de R$ 0.05\n", cinc);
    printf ("%.0lf moeda(s) de R$ 0.01\n", cent);
    return 0;
}