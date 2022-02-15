// Inspired by Argonaut theme (kitty themes
// https://github.com/dexpota/kitty-themes/blob/master/themes/Argonaut.conf)
/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
    /* 8 normal colors */
    "#222222",
    "#ff000f",
    "#8ce00a",
    "#ffb900",
    "#008df8",
    "#6c43a5",
    "#00d7eb",
    "#ffffff",

    /* 8 bright colors */
    "#444444",
    "#ff273f",
    "#abe05a",
    "#ffd141",
    "#0092ff",
    "#9a5feb",
    "#67ffef",
    "#ffffff",

    [255] = 0,

    /* more colors can be added after 255 to use with DefaultXX */
    "#b294bb",
    "#555555",
    "#0d0f18",
    "#fffaf3",
};

/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 259;
unsigned int defaultbg = 258;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
