long fat(int);

int main()
{
   int i, n, c;

   printf("Entre com o numero de elementos: \n");
   scanf("%d",&n);

   for ( i = 0 ; i < n ; i++ )
   {
      for ( c = 0 ; c <= ( n - i - 2 ) ; c++ )
         printf(" ");

      for(c=0;c<=i;c++)

         printf("%d ",fat(i)/(fat(c)*fat(i-c)));

      printf("\n");
   }

   return 0;
}

long fat(int n)
{
int c;
long result = 1;
for(c=1;c<=n;c++)
{
result = result*c;
}

return (result);
}
