#include <stdio.h>

int	main()
{
	int	first;
	int	suf2;
	int	fpre3;
	int	spre3;
	int	fsuf3;
	int	ssuf3;
	int	mine;
	size_t	prize;

	prize = 0;
	scanf("%d %d %d %d %d %d %d", &first, &suf2, &fpre3, &spre3, &fsuf3, &ssuf3, &mine);
	if (mine == first)
		prize += 6000000;
	if (mine == (1000000 + first + 1) % 1000000 || (1000000 + first - 1) % 1000000)
		prize += 100000;
	if (mine % 1000 == fsuf3)
		prize += 4000;
	if (mine % 1000 == ssuf3)
		prize += 4000;
	if (mine / 1000 == fpre3)
		prize += 4000;
	if (mine / 1000 == spre3)
		prize += 4000;
	if (prize % 100 == suf2)
		prize += 2000;
	return(0);
}
