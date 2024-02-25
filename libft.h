/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 21:28:49 by jorvarea          #+#    #+#             */
/*   Updated: 2024/02/25 15:33:16 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <limits.h>
# include <stdbool.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int					ft_abs(int n);
int					ft_atoi(const char *str);
unsigned int		ft_atoi_hex(char *str);
void				ft_bzero(void *b, size_t size);
void				*ft_calloc(size_t count, size_t size);
int					ft_count_digits(int n);
int					ft_count_words(char const *str, char c);
bool				ft_isalnum(int c);
bool				ft_isalpha(int c);
bool				ft_isascii(int c);
bool				ft_isdigit(int c);
bool				ft_islowcase(int c);
bool				ft_isprintable(int c);
bool				ft_isspace(char c);
bool				ft_isupcase(int c);
char				*ft_itoa(int n);
void				ft_lstadd_back(t_list **head, t_list *new_node);
void				ft_lstadd_front(t_list **head, t_list *new_node);
void				ft_lstclear(t_list **head, void (*delete_content)(void *));
void				ft_lstdelone(t_list *node, void (*delete_content)(void *));
t_list				*ft_lstextract_first(t_list **head);
t_list				*ft_lstextract_last(t_list *head);
void				ft_lstiter(t_list *head, void (*f)(void *));
t_list				*ft_lstlast(t_list *head);
t_list				*ft_lstmap(t_list *head, void *(*f)(void *),
						void (*delete_content)(void *));
t_list				*ft_lstnew(void *content);
int					ft_lstsize(t_list *head);
int					ft_max(int a, int b);
int					ft_min(int a, int b);
void				*ft_memchr(const void *ptr, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_memset(void *pointer, int fill_character, size_t size);
void				ft_putchar_fd(char c, int fd);
void				ft_putendl_fd(char *str, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_putstr_fd(char *str, int fd);
char				**ft_split(char const *s, char c);
char				*ft_strchr(const char *str, int c);
char				*ft_strdup(const char *str);
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strjoin(char const *s1, char const *s2);
size_t				ft_strlcat(char *dest, const char *src, size_t size);
size_t				ft_strlcpy(char *dest, const char *src, size_t size);
size_t				ft_strlen(const char *str);
char				*ft_strmapi(char const *str, char (*f)(unsigned int, char));
int					ft_strncmp(const char *str1, const char *str2, size_t n);
char				*ft_strnstr(const char *str, const char *to_find, size_t n);
char				*ft_strrchr(const char *str, int c);
char				*ft_strrev(char *str);
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_substr(char const *s, unsigned int start, size_t len);
void				ft_swap_char(char *a, char *b);
void				ft_swap_int(int *a, int *b);
int					ft_uppercase(int c);
int					ft_lowcase(int c);

#endif