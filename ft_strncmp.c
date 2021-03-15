#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_;
	unsigned char	*s2_;

	s1_ = (unsigned char *)s1;
	s2_ = (unsigned char *)s2;
	i = 0;
	while (s1_[i] && s2_[i] && s1_[i] == s2_[i] && i + 1 < n)
		i++;
	if (n > 0)
		return (s1_[i] - s2_[i]);
	return (0);
}
