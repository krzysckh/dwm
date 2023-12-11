#define USER "krzych"

/*
  \ 'bg0':        ['#2b3339',   '235'],
            \ 'bg1':        ['#323c41',   '236'],
            \ 'bg2':        ['#3a454a',   '237'],
            \ 'bg3':        ['#445055',   '238'],
            \ 'bg4':        ['#4c555b',   '239'],
            \ 'bg5':        ['#53605c',   '240'],
            \ 'bg_visual':  ['#503946',   '52'],
            \ 'bg_red':     ['#4e3e43',   '52'],
            \ 'bg_green':   ['#404d44',   '22'],
            \ 'bg_blue':    ['#394f5a',   '17'],
            \ 'bg_yellow':  ['#4a4940',   '136'],
               \ 'fg':         ['#d3c6aa',   '223'],
          \ 'red':        ['#e67e80',   '167'],
          \ 'orange':     ['#e69875',   '208'],
          \ 'yellow':     ['#dbbc7f',   '214'],
          \ 'green':      ['#a7c080',   '142'],
          \ 'aqua':       ['#83c092',   '108'],
          \ 'blue':       ['#7fbbb3',   '109'],
          \ 'purple':     ['#d699b6',   '175'],
          \ 'grey0':      ['#7a8478',   '243'],
          \ 'grey1':      ['#859289',   '245'],
          \ 'grey2':      ['#9da9a0',   '247'],
          \ 'statusline1':['#a7c080',   '142'],
          \ 'statusline2':['#d3c6aa',   '223'],
          \ 'statusline3':['#e67e80',   '167'],
          \ 'none':       ['NONE',      'NONE']
          */

static const char *fonts[]          = { "Lilex :size=7" };
static const char dmenufont[]       = "Lilex:size=7";
static const char col_gray1[]       = "#2b3339";
static const char col_gray2[]       = "#53605c";
static const char col_gray3[]       = "#d3c6aa";
static const char col_gray4[]       = "#2b3339";
static const char col_cyan[]        = "#d3c6aa";
static const char *colors[][3]      = {
	/*               fg         bg         border   */
	[SchemeNorm] = { col_gray3, col_gray1, col_gray2 },
	[SchemeSel]  = { col_gray4, col_cyan,  "#d699b6" },
};
