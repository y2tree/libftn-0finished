void fill_bytes(void *ptr, unsigned char val, int n)
{
    // TON CODE ICI

    // 1. Caste ptr en unsigned char *
    unsigned char *ptrcast = (unsigned char *)ptr;
    // 2. Boucle de 0 à n
    for (int i = 0; i < n; i++)
    {
        ptrcast[i] = val;
    }
    // 3. Écris val dans chaque byte
}
int main()
{
    int arr[2] = {100, 200};
    printf("Avant : %d, %d\n", arr[0], arr[1]);

    fill_bytes(arr, 0, 8);

    printf("Apres : %d, %d\n", arr[0], arr[1]);

    return 0;
}