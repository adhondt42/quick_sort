/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 12:51:25 by adhondt           #+#    #+#             */
/*   Updated: 2018/05/24 17:48:05 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <errno.h>
# include <dirent.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include "get_next_line.h"

typedef struct	s_pm
{
	int			*a;
	int			alen;

}				t_pm;




int				pos_str_tab(char *haystack, char **needle);
void			ft_putinttab(int *tab, int size, char *sp);
char			*add_nendchar(char *str, char c, size_t n);
char			*add_nfrontchar(char *str, char c, size_t n);
char			*add_frontchar(char *str, char c);
char			*ft_chardup(char c);
void			*ft_memalloc_c(size_t size, int c);
char			*ft_strcnew(size_t n, char c);
int				pos_c_str(char c, char *str);
int				dirlen(char *path, int a);
char			**ft_readdir(char *path, int a);
struct stat		*get_lstats(char *path, char *name);
char			*createpath(char *path, char *name);
void			ft_putnstr(const char *str, size_t n);
void			ft_putstr_c(char *str, char *color);
char			ft_ftype(int st_mode);
int				intlen(int nb);
void			sorttab_ascii(char **tab);
void			sorttab_rev(char **tab);
void			sorttab_ascii(char **tab);
void			ft_swapptr(char **ptr, char **ptr2);
void			ft_put2str(char *str, char *strb);
void			ft_put3str(char *str, char *strb, char *strc);
void			ft_put4str(char *str, char *strb, char *strc, char *strd);
char			**addtotab_f(char **tab, char *str, size_t i);
void			ft_putint(int *name, char *separator);
int				*ft_intnew(size_t size, int value);
int				ft_index(const char *str, char c);
void			ft_freetab(char **tab);
void			ft_free2tab(char **tab, char **tab2);
void			free2(void *f1, void *f2);
void			free3(void *f1, void *f2, void *f3);
void			free4(void *f1, void *f2, void *f3, void *f4);
int				get_next_line(const int fd, char **line);
char			**ft_initializetab(size_t size);
char			*ft_strrchrrev(char *s, char c);
size_t			tablen(char **src);
char			*ft_strnewc(size_t size, char c);
int				onlyins(char *s1, char *s2);
void			ft_n();
char			*ft_itoa_base(int value, int base);
char			*ft_strndup(const char *tab, int n);
char			*ft_strnjoin(char const *s1, char const *s2, int n);
int				get_next_line(const int fd, char **line);
size_t			ft_strclen(const char *src, char c);
char			*ft_strcjoin(char const *s1, char const *s2, char c);
char			*ft_strcdup(const char *tab, char c);
char			*ft_strccpy(char *dest, const char *src, char c);
void			puttab(char **tab, char *end);
int				ft_find_next_sqrt(int nb);
t_list			*ft_lstnew(void const *content, size_t content_size);
void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void			ft_lstadd(t_list **alst, t_list *new);
char			**ft_strsplit(char const *src, char c);
void			ft_striteri(char *s, void(*f)(unsigned int, char *));
void			ft_striter(char *s, void(*f)(char *));
char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ft_strsub(char const *s, unsigned int start, size_t len);
char			*ft_strtrim(char const *s);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strjoin_f(char const *s1, char const *s2, int j);
char			*ft_itoa(int n);
void			ft_putnbr_fd(int n, int fd);
void			ft_putendl_fd(char const *s, int fd);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char const *s, int fd);
int				ft_strequ(char const *s1, char const *s2);
int				ft_strnequ(char const *s1, char const *s2, size_t n);
void			ft_putnbr(int n);
void			ft_putendl(char const *s);
void			ft_putstr(char const *s);
void			ft_putchar(char c);
void			ft_strclr(char *s);
void			ft_strdel(char **as);
char			*ft_strnew(size_t size);
void			ft_memdel(void **ap);
void			*ft_memalloc(size_t size);
void			*ft_memchr(const void *s, int c, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memove(void *dest, const void *src, size_t n);
void			ft_bzero(void *s, size_t n);
void			*ft_memset(void *s, int c, size_t n);
char			*ft_strnstr(const char *str, const char *to_find, size_t n);
char			*ft_strrchr(const char *s, int c);
char			*ft_strrchrmu(const char *s, int c);
char			*ft_strchr(const char *s, int c);
char			*ft_strchruno(const char *s, int c);
char			*ft_strcat(char *dest, const char *src);
char			*ft_strncat(char *dest, const char *src, size_t n);
int				ft_strcmp(const char *tab, const char *tab2);
int				ft_strncmp(const char *tab, const char *teub, size_t n);
char			*ft_strstr(const char *string, const char *pik);
int				ft_atoi(const char *str);
int				ft_isup(char c);
int				ft_islow(char c);
int				ft_toupper(int c);
int				ft_tolower(int c);
int				ft_isprint(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
char			*ft_strcpy(char *dest, const char *str);
char			*ft_strdup(const char *tab);
size_t			ft_strlen(const char *str);
char			*ft_strncpy(char *dest, const char *src, size_t n);
char			*ft_isintab(const char *s, const char *c);
void			*ft_memccpy(void *dest, const void *src, int c, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
int				ft_isascii(int c);
#endif
