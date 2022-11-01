/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 09:59:50 by ybenlafk          #+#    #+#             */
/*   Updated: 2022/10/27 19:57:25 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int		ft_atoi(const char *str);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_isalpha(int i);
int		ft_isascii(int i);
int		ft_isdigit(int i);
int		ft_isprint(int i);
int		ft_isalnum(int i);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
int		ft_lstsize(t_list *lst);
size_t	ft_strlen(const char *str);
size_t	ft_strlcat(char *dst, const char *src, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_itoa(int n);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *src);
char	**ft_split(char const *s, char c);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strnstr(const char *str, const char *to_find, size_t n);
char	*ft_strrchr(const char *s, int c);
char	*ft_strtrim(char	*s1, char	*set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_calloc(size_t n, size_t size);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	*ft_memset(void *str, int c, size_t n);
void	ft_bzero(void *s, size_t n );
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *str, int c, size_t n);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(void *content);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_lstiter(t_list *lst, void (*f)(void *));

#endif
