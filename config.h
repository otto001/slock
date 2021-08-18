/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *fonts[] = {
        "monospace:size=12"
};
static const char *colors[SchemeLast][3] = {
        /*     fg         bg       */
        [SchemeNorm] = { "#eeeeee", "#555555" },
        [SchemeInput] = { "#eeeeee", "#005577" },
        [SchemeFailed] = { "#eeeeee", "#CC3333" },
        [SchemeBar] = { "#eeeeee", "#222222" },
};


/* treat a cleared input like a wrong password (color) */
static const int failOnClear = 1;
static const int bellOnFail = 0;
