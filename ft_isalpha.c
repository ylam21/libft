//	checks for an alphabetic character; in the standard "C" locale, it is equivalent to (isup‐
//	per(c)  ||  islower(c)).   In  some  locales, there may be additional characters for which
//	isalpha() is true—letters which are neither uppercase nor lowercase
int ft_isalpha(int c) {
	if (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'))
		return 1;
	return 0;
}
