#include "push_swap.h"

void	ft_rra(t_mem *mem, int tele)
{
	mem->a.lst = mem->a.lst->next;
	if (tele == 1)
		mem->trie = ft_ajoute_trie(&(mem->trie), 5);
}

void	ft_rrb(t_mem *mem, int tele)
{
	mem->b.lst = mem->b.lst->next;
	if (tele == 1)
		mem->trie = ft_ajoute_trie(&(mem->trie), 6);
}

void	ft_rrr(t_mem *mem, int tele)
{
	ft_rra(mem, 0);
	ft_rrb(mem, 0);
	if (tele == 1)
		mem->trie = ft_ajoute_trie(&(mem->trie), 7);
}