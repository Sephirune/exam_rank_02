unsigned char	reverse_bits(unsigned char octet)
{
	int		i = 8; // unsigned char son 8 bits. Aquí hay que devolver otro unsigned char con los bits invertidos: 00000010 → 01000000
	unsigned char	res = 0;

	while (i > 0)
	{
		res = res * 2 + (octet % 2); // vamos leyendo octet desde su bit mas pequeño (octet son 8 bits) y lo extraemos dividiendo entre 2 (0 o 1). Lo desplazamos a la izquierda con la multiplicación y lo agregamos con la suma
        /* res = (res << 1) | (octet & 1); */ // también se puede poner así. El & sirve para comparar bit a bit. devuelve 1 si ambos bits son 1. OJO, si se hace así hay que inicializar i en 7 para no salirnos de los bits.
		octet = octet / 2;
		i--;
	}
	return (res);
}