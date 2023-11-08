#define USER "kpm"
#error "i don't use it, and i don't update it anymore"

static const char *fonts[]          = { "Lilex :size=7" };
static const char dmenufont[]       = "Lilex:size=7";
static const char col_gray1[]       = "#282a36";
static const char col_gray2[]       = "#bfbfbf";
static const char col_gray3[]       = "#f8f8f2";
static const char col_gray4[]       = "#282a36";
static const char col_cyan[]        = "#f8f8f2";
static const char *colors[][3]      = {
	/*               fg         bg         border   */
	[SchemeNorm] = { col_gray3, col_gray1, col_gray2 },
	[SchemeSel]  = { col_gray4, col_cyan,  "#5af78e" },
};
