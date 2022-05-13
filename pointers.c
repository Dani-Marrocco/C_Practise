
int main(void)
{
    int x = 8;
    int *z = &x;

    printf("%p\n",z); //prints address of x
    printf("%p\n",&x); //prints address of x
    printf("%i\n",*&x); //*de-references x from its location and just prints its value
    printf("%p\n",&z); //prints address of z
}
