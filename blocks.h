//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	/*{"", "cat ~/.pacupdate | sed /📦0/d",					0,		9},*/
	/*{"", "echo ' '☕:$(~/mysh/caffeine.sh status char)' '",5,		7},*/
	{"", "~/mysh/cputemp.sh",							5,		8},
	{"", "~/mysh/get-volume.sh",						5,		10},
	{"", "~/mysh/mydatetime.sh",						5,		0},
	/*{"🧠", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},*/
	/*{"", "~/bin/statusbar/battery",						5,		0},*/
	/*{"🌡", "sensors | awk '/^temp1:/{print $2}'",				5,		0},*/
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
