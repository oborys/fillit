#ifndef FILLIT_H
# define FILLIT_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

int		ft_check(char *str);
int		ft_blockcheck(char *s, char letter);
int		ft_finalcheck(char *s);
int		ft_check4(char *s, int i);
char	*ft_shift(char *s);
char	*ft_coordinate(char **arr, char lit);
char	**ft_map_gen(int size);
int		ft_checkmap(char **map, char **tetra, int *xy, int k);
void	ft_fillmap(char **map, char **tetra, int *xy, int k);
void	ft_remap(char **map, char **tetra, int *xy, int k);
char	**ft_tetra(char **argv, int count);
int		ft_count_block(char *s, char c);
int		ft_logic(char **map, char **arr, int k, int *block);
char	**ft_strsplit(char const *s, char c);
void	ft_putstr(char const *s);
void	ft_bzero(void *s, size_t n);
void	ft_putchar(char c);
size_t	ft_strlen(const char *str);
void	*ft_memset(void *str, int c, size_t len);

#endif
