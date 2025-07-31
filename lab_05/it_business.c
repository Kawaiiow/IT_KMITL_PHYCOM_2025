#include <stdio.h>

#ifndef ERR_LIMIT
# define ERR_LIMIT 3
#endif

typedef struct	s_prompt
{
	char	act;
	float	amount;
}	t_prompt;


typedef struct	s_balance
{
	float	account;
	float	pocket;
	int		err;
}	t_balance;

static void	read_prompt(t_prompt *prompt)
{
	scanf("%c", &prompt->act);
	if (prompt->act != 'E')
		scanf("%f", &prompt->amount);
	else
		prompt->amount = 0;
}

static void	init_balance(t_balance *balance)
{
	scanf("%f %f", &balance->account, &balance->pocket);
	balance->err = 0;
}

int	main()
{
	t_balance	balance;
	t_prompt	prompt;

	init_balance(&balance);
	read_prompt(&prompt);
	while (prompt.act != 'E' && balance.err != 3)
	{
		if (prompt.act == 'D')
		{
			if (balance.pocket < prompt.amount)
				balance.err++;
			else
			{
				balance.pocket -= prompt.amount;
				balance.account += prompt.amount;
				balance.err = 0;
			}
		}
		else if (prompt.act == 'W')
		{
			if (balance.account < prompt.amount)
				balance.err++;
			else
			{
				balance.account -= prompt.amount;
				balance.pocket += prompt.amount;
				balance.err = 0;
			}
		}
		read_prompt(&prompt);
	}
	printf("%.2f\n%.2f", balance.account, balance.pocket);
	return (0);
}
