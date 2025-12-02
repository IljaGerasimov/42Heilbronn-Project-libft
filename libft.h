/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igerasim <igerasim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 14:22:38 by igerasim          #+#    #+#             */
/*   Updated: 2025/11/16 20:55:58 by igerasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdarg.h>
# include <stddef.h>
# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/// @brief Parse a decimal integer from a string
/// @param nptr NUL-terminated input string to parse
/// @return The parsed int value, overflow is not checked by this function
int					ft_atoi(const char *nptr);
/// @brief Allocate and return a NUL-terminated decimal string for n
/// @details The returned buffer must be freed by the caller
/// @param n Integer value to convert
/// @return Pointer to newly allocated string, or NULL on allocation failure
char				*ft_itoa(int n);
/// @brief Set n bytes of the buffer to zero
/// @details Pointed-to buffer must be valid for writes of at least n bytes
/// @param s Pointer to the memory area to zero
/// @param n Number of bytes to set to '\0'
void				ft_bzero(void *s, size_t n);
/// @brief Allocate zero-initialized memory for an array
/// @details The result must be freed by the caller
/// @param nmemb Number of elements
/// @param size Size in bytes of each element
/// @return Pointer to the allocated zeroed memory, or NULL on failure
void				*ft_calloc(size_t nmemb, size_t size);

/// @return Non-zero if c is alphabetic
int					ft_isalpha(int c);
/// @return Non-zero if c is alphanumeric
int					ft_isalnum(int c);
/// @return Non-zero if c is ASCII (0 ... 127)
int					ft_isascii(int c);
/// @return Non-zero if c is a digit ('0' ... '9')
int					ft_isdigit(int c);
/// @return Non-zero if c is printable
int					ft_isprint(int c);

/// @brief Scan memory for byte c within n bytes
/// @return Pointer to first occurrence in s or NULL if not found
void				*ft_memchr(const void *s, int c, size_t n);
/// @brief Compare two memory areas byte by byte
/// @return <0, 0, >0
int					ft_memcmp(const void *s1, const void *s2, size_t n);
/// @brief Copy n bytes from src to dest (undefined if overlapping)
/// @return dest
void				*ft_memcpy(void *dest, const void *src, size_t n);
/// @brief Copy n bytes from src to dest (handles overlap)
/// @return dest
void				*ft_memmove(void *dest, const void *src, size_t n);
/// @brief Fill n bytes of s with byte c
/// @return s
void				*ft_memset(void *s, int c, size_t n);

/// @brief Locate character c in string s (first occurrence)
/// @return Pointer to char in s or NULL if not found
char				*ft_strchr(const char *s, int c);
/// @brief Locate character c in string s (last occurrence)
/// @return Pointer to char in s or NULL if not found
char				*ft_strrchr(const char *s, int c);
/// @brief Locate substring little in big, searching at most len bytes of big
/// @return Pointer to first occurrence or NULL if not found
char				*ft_strnstr(const char *big, const char *little,
						size_t len);
/// @brief Compare up to n characters of two strings
/// @return <0, 0, >0
int					ft_strncmp(const char *s1, const char *s2, size_t n);
/// @brief Compute length of string (excluding terminating NUL)
/// @return Number of bytes before NUL
size_t				ft_strlen(const char *s);
/// @brief Copy src to dst ensuring NUL-termination (size-bounded)
/// @return Total length of src
size_t				ft_strlcpy(char *dst, const char *src, size_t size);
/// @brief Duplicate a NUL-terminated string
/// @return Newly allocated copy or NULL on failure
char				*ft_strdup(const char *s);
/// @brief Concatenate two strings into a newly allocated string
/// @return New string or NULL on allocation failure
char				*ft_strjoin(char const *s1, char const *s2);
/// @brief Append src to dst of total size size (NUL-terminated)
/// @return Length dst + src would have
size_t				ft_strlcat(char *dst, const char *src, size_t size);
/// @brief Create a substring from s starting at start of length len
/// @return Newly allocated substring or NULL on allocation failure
char				*ft_substr(char const *s, unsigned int start, size_t len);
/// @brief Split string s by delimiter c into a NULL-terminated array
/// @return Array of strings or NULL on allocation failure
char				**ft_split(char const *s, char c);
/// @brief Trim characters in set from both ends of s1
/// @return Newly allocated trimmed string or NULL on failure
char				*ft_strtrim(char const *s1, char const *set);
/// @brief Apply function f to each char of s with its index (in-place)
/// @param s String to modify
/// @param f Function receiving index and pointer to char
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
/// @brief Create new string by applying f to each char of s
/// @return Newly allocated mapped string or NULL on failure
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/// @brief Convert uppercase letter to lowercase
/// @return Converted character (or original if non-alphabetic)
int					ft_tolower(int c);
/// @brief Convert lowercase letter to uppercase
/// @return Converted character (or original if non-alphabetic)
int					ft_toupper(int c);

/// @brief Write a character to file descriptor fd
void				ft_putchar_fd(char c, int fd);
/// @brief Write an integer as decimal to file descriptor fd
void				ft_putnbr_fd(int n, int fd);
/// @brief Write string s to file descriptor fd
void				ft_putstr_fd(char *s, int fd);
/// @brief Write string s followed by newline to file descriptor fd
void				ft_putendl_fd(char *s, int fd);

/// @brief Create a new list node with content
/// @return Pointer to new node or NULL on allocation failure
t_list				*ft_lstnew(void *content);
/// @brief Return last node of the list
/// @return Pointer to last node or NULL if lst is NULL
t_list				*ft_lstlast(t_list *lst);
/// @brief Map list by applying f to each content, build new list
/// @param del Function to free content on failure
/// @return New list head or NULL on failure
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));
/// @brief Count nodes in list
/// @return Number of nodes
int					ft_lstsize(t_list *lst);
/// @brief Iterate over list and apply f to each content
void				ft_lstiter(t_list *lst, void (*f)(void *));
/// @brief Add new node at the front of list
void				ft_lstadd_front(t_list **lst, t_list *new);
/// @brief Add new node at the back of list
void				ft_lstadd_back(t_list **lst, t_list *new);
/// @brief Delete a single node using del to free content
void				ft_lstdelone(t_list *lst, void (*del)(void *));
/// @brief Clear entire list and free nodes using del
void				ft_lstclear(t_list **lst, void (*del)(void *));

#endif