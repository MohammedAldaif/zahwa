#include "main.h"

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_RESET   "\x1b[0m"

void printSuccessInGreen()
{
     printf(ANSI_COLOR_GREEN "Success!" ANSI_COLOR_RESET "\n");
}

void printLengthDifferInRed()
{
    printf(ANSI_COLOR_RED "Lengths differ here." ANSI_COLOR_RESET "\n");
}

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */

int main(void)
{
	int len, len2;

    	_printf("--------------------------------------------------------\n");
    	len = _printf("%c\n", 'S');
	len2 = printf("%c\n", 'S');
	fflush(stdout);
	if (len != len2)
	{
		printLengthDifferInRed();
		fflush(stdout);
		return (1);
	}
	else if (len == len2)
	{
		printSuccessInGreen();
	}
    printf("---------------------------------------------------------\n");
    	len = _printf("A char inside a sentence: %c. Did it work?\n", 'F');
	_printf("\n");
	len2 = printf("A char inside a sentence: %c. Did it work?\n", 'F');
	printf("\n");
	fflush(stdout);
	if (len != len2)
	{
		printLengthDifferInRed();
		fflush(stdout);
		return (1);
	}
	else if (len == len2)
		printSuccessInGreen();
    _printf("---------------------------------------------------------\n");
   len = _printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
	len2 = printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
	fflush(stdout);
	if (len != len2)
	{
		printLengthDifferInRed();
		fflush(stdout);
		return (1);
	}
     else if (len == len2)
                printSuccessInGreen();
    _printf("---------------------------------------------------------\n");
   len = _printf("%s", "This sentence is retrieved from va_args!\n");
	len2 = printf("%s", "This sentence is retrieved from va_args!\n");
	fflush(stdout);
	if (len != len2)
	{
		printLengthDifferInRed();
		fflush(stdout);
		return (1);
	}
     else if (len == len2)
                printSuccessInGreen();
    _printf("---------------------------------------------------------\n");
   len = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
	len2 = printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
	fflush(stdout);
	if (len != len2)
	{
		printLengthDifferInRed();
		fflush(stdout);
		return (1);
	}
     else if (len == len2)
                printSuccessInGreen();
    _printf("---------------------------------------------------------\n");
   /*len = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0); */
	/* len2 = printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0) ;*/
	fflush(stdout);
	if (len != len2)
	{
		printLengthDifferInRed();
		fflush(stdout);
		return (1);
	}
     else if (len == len2)
                printSuccessInGreen();
    _printf("---------------------------------------------------------\n");
   len = _printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
	len2 = printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
	fflush(stdout);
	if (len != len2)
	{
		printLengthDifferInRed();
		fflush(stdout);
		return (1);
	}
     else if (len == len2)
                printSuccessInGreen();
    _printf("---------------------------------------------------------\n");
   len = _printf("%%");
	len2 = printf("%%");
	fflush(stdout);
	if (len != len2)
	{
		printLengthDifferInRed();
		fflush(stdout);
		return (1);
	}
     else if (len == len2)
                printSuccessInGreen();
    _printf("---------------------------------------------------------\n");
   len = _printf("Should print a single percent sign: %%\n");
	len2 = printf("Should print a single percent sign: %%\n");
	fflush(stdout);
	if (len != len2)
	{
		printLengthDifferInRed();
		fflush(stdout);
		return (1);
	}
     else if (len == len2)
                printSuccessInGreen();
    _printf("---------------------------------------------------------\n");
   len = _printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
	len2 = printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
	fflush(stdout);
	if (len != len2)
	{
		printLengthDifferInRed();
		fflush(stdout);
		return (1);
	}
     else if (len == len2)
                printSuccessInGreen();
    _printf("---------------------------------------------------------\n");
    len = _printf("css%ccs%scscscs", 'T', "Test");
	len2 = printf("css%ccs%scscscs", 'T', "Test");
	fflush(stdout);
	if (len != len2)
	{
		printLengthDifferInRed();
		fflush(stdout);
		return (1);
	}
     else if (len == len2)
                printSuccessInGreen();
    _printf("---------------------------------------------------------\n");
    char *str = "When you invoke GCC , it normally does preprocessing, compilation, assembly and linking. The \"overall options\" allow you to stop this process at an intermediate stage. For example, the -c option says not to run the linker. Then the output consists of object files output by the assembler.\n\nOther options are passed on to one stage of processing. Some options control the preprocessor and others the compiler itself. Yet other options control the assembler and linker; most of these are not documented here, since you rarely need to use any of them.\n\nMost of the command line options that you can use with GCC are useful for C programs; when an option is only useful with another language (usually C ++ ), the explanation says so explicitly. If the description for a particular option does not mention a source language, you can use that option with all supported languages.\n\nThe gcc program accepts options and file names as operands. Many options have multi-letter names; therefore multiple single-letter options may not be grouped: -dv is very different from -d -v.\n\nYou can mix options and other arguments. For the most part, the order you use doesn't matter. Order does matter when you use several options of the same kind; for example, if you specify -L more than once, the directories are searched in the order specified. Also, the placement of the -l option is significant.\n\nMany options have long names starting with -f or with -W---for example, -fmove-loop-invariants, -Wformat and so on. Most of these have both positive and negative forms; the negative form of -ffoo would be -fno-foo. This manual documents only one of these two forms, whichever one is not the default.\n";

	len = _printf("%s",str);
	len2 = printf("%s",str);
	fflush(stdout);
	if (len != len2)
	{
		printLengthDifferInRed();
		fflush(stdout);
		return (1);
	}
     else if (len == len2)
                printSuccessInGreen();
    _printf("---------------------------------------------------------\n");
    char *str2 = "When you invoke GCC , it normally does preprocessing, compilation, assembly and linking. The \"overall options\" allow you to stop this process at an intermediate stage. For example, the -c option says not to run the linker. Then the output consists of object files output by the assembler.\n\nOther options are passed on to one stage of processing. Some options control the preprocessor and others the compiler itself. Yet other options control the assembler and linker; most of these are not documented here, since you rarely need to use any of them.\n\nMost of the command line options that you can use with GCC are useful for C programs; when an option is only useful with another language (usually C ++ ), the explanation says so explicitly. If the description for a particular option does not mention a source language, you can use that option with all supported languages.\n\nThe gcc program accepts options and file names as operands. Many options have multi-letter names; therefore multiple single-letter options may not be grouped: -dv is very different from -d -v.\n\nYou can mix options and other arguments. For the most part, the order you use doesn't matter. Order does matter when you use several options of the same kind; for example, if you specify -L more than once, the directories are searched in the order specified. Also, the placement of the -l option is significant.\n\nMany options have long names starting with -f or with -W---for example, -fmove-loop-invariants, -Wformat and so on. Most of these have both positive and negative forms; the negative form of -ffoo would be -fno-foo. This manual documents only one of these two forms, whichever one is not the default.\n";

	len = _printf("man gcc:\n%s", str2);
	len2 = printf("man gcc:\n%s", str2);
	fflush(stdout);
	if (len != len2)
	{
		printLengthDifferInRed();
		fflush(stdout);
		return (1);
	}
	 else if (len == len2)
                printSuccessInGreen();
    _printf("---------------------------------------------------------\n");
	
    /* len = _printf(NULL); */
	/* len2 = printf(NULL); */
	fflush(stdout);
	if (len != len2)
	{
		printLengthDifferInRed();
		fflush(stdout);
		return (1);
	}
     else if (len == len2)
                printSuccessInGreen();
    _printf("---------------------------------------------------------\n");
    len = _printf("%c", '\0');
	len2 = printf("%c", '\0');
	fflush(stdout);
	if (len != len2)
	{
		printLengthDifferInRed();
		fflush(stdout);
		return (1);
	}
     else if (len == len2)
                printSuccessInGreen();
    _printf("---------------------------------------------------------\n");
    /*len = _printf("%");*/
	/*len2 = printf("%");*/
	fflush(stdout);
	if (len != len2)
	{
		printLengthDifferInRed();
		fflush(stdout);
		return (1);
	}
     else if (len == len2)
                printSuccessInGreen();
    _printf("---------------------------------------------------------\n");
    /*len = _printf("%!\n");*/
	/*len2 = printf("%!\n");*/
	fflush(stdout);
	if (len != len2)
	{
		printLengthDifferInRed();
		fflush(stdout);
		return (1);
	}
	 else if (len == len2)
                printSuccessInGreen();
    _printf("---------------------------------------------------------\n");
    /*len = _printf("%K\n");*/
	/*len2 = printf("%K\n");*/
	fflush(stdout);
	if (len != len2)
	{
		printLengthDifferInRed();
		fflush(stdout);
		return (1);
	}
     else if (len == len2)
                printSuccessInGreen();
    _printf("---------------------------------------------------------\n");
   len = _printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
	len2 = printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
	fflush(stdout);
	if (len != len2)
	{
		printLengthDifferInRed();
		fflush(stdout);
		return (1);
	}
     else if (len == len2)
                printSuccessInGreen();
    _printf("---------------------------------------------------------\n");
	return (0);
}
