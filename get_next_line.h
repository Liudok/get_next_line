/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lberezyn <lberezyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 16:59:11 by lberezyn          #+#    #+#             */
/*   Updated: 2017/11/30 12:42:17 by lberezyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "./libft/libft.h"
# include <fcntl.h>

typedef struct		s_listik
{
	int				fd;
	char			*str;
	struct s_listik	*next;
}					t_listik;

# define BUFF_SIZE  32

int					get_next_line(const int fd, char **line);

#endif
