#define USER "kpm"

static const char *fonts[]          = { "Lilex :size=7" };
static const char dmenufont[]       = "Lilex:size=7";
static const char col_gray1[]       = "#eeeeee";
static const char col_gray2[]       = "#ababab";
static const char col_gray3[]       = "#101010";
static const char col_gray4[]       = "#eeeeee";
static const char col_cyan[]        = "#101010";
static const char *colors[][3]      = {
	/*               fg         bg         border   */
	[SchemeNorm] = { col_gray3, col_gray1, col_gray2 },
	[SchemeSel]  = { col_gray4, col_cyan,  "#00baff" },
};
