//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/     /*Command*/                                                           /*Update Interval*/    /*Update Signal*/
	{"",           "date '+%a %d/%m/%Y - %H:%M;'",                                       60,                    0},

	{" ",        "tocando musica",                                                    5,                     0},

	{"",           "echo ' │ '",                                                         0,                     0},

	{" ",        "amixer sget Master | grep 'Right:' | awk -F'[][]' '{ print $2 }'",   0,                     9},

	{"",           "echo ' │'",                                                          0,                     0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "";
static unsigned int delimLen = 5;
