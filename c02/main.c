#include "./ex12/ft_print_memory.c"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s[] = "Bonjour les aminches…c  est fou.tout.ce qu on peut faire avec…print_memory….lol.lol. .";
	s[20] = 0x09, s[21] = 0x0a, s[22] = 0x09, s[33] = 0x09, s[38] = 0x09,
	s[63] = 0x09, s[64] = 0x0a, s[65] = 0x09, s[78] = 0x0a;
	s[79] = 0x0a, s[80] = 0x0a, s[81] = 0x09, s[85] = 0x2e, s[89] = 0x0a;
	s[91] = 0x00;
	ft_print_memory(s, 93);
}
