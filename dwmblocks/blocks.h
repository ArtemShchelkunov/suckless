//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const char *fonts[]          = { "monospace:size=16", "-misc-font Noto Color Emoji:style=Regular"};
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/

	{"🧠 ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},
	{"📦 ", "checkupdates | wc -l",				86400,		0},
	{"🔉 ", "pamixer --get-volume",				5,		0},
	{"🕒 ", "date '+%R'",					60,		0},
	{"📅 ", "date '+%D %a'",					3600,		0},
	{"🔋 ", "cat /sys/class/power_supply/BAT0/capacity",	30,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " \0 ";
static unsigned int delimLen = 5;
