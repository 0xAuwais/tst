# libft (42 school project)

A C library that reimplements libc functions (Part 1), adds extra string/fd helpers (Part 2),
and a singly linked list API (Part 3). Output must be `libft.a` built with `ar`.

The subject PDF is the source of truth: check every change against it (`pdftotext -layout` extracts it).
Its location differs per device, so **ask the user for the subject PDF path** before doing a
subject comparison. Don't assume a path.

## Working with this user
- **Explain every fix and wait for approval before editing any file.**
- The user is a 42 student and has to defend this code in peer evaluation. Explain *why* a change is
  needed, so they can explain it too. Keep their naming style (`f`, `ff`, `mdre`, ...) unless asked.
- Pending: the user wants a review of NULL checks (which functions guard against NULL, which should,
  what testers expect). Remind them if it hasn't been done yet.

## Subject constraints (this version)
- Compile with `cc -Wall -Wextra -Werror`. No `-std=c99`, no `restrict` in prototypes.
- No global variables. Helper functions must be `static`.
- All files at repo root. Submit only `Makefile`, `libft.h`, `ft_*.c`, and `README.md`. **No unused files.**
- Part 1 functions must match the man page behaviour and must not call external functions
  (`calloc`/`strdup` may use `malloc`). `is*` functions return exactly 1 or 0.
- `ft_calloc(0, x)` / `ft_calloc(x, 0)` must return a unique pointer that can be freed.
- In this version the list functions are **mandatory** (Part 3), not bonus.
  `ft_lstsize` returns `unsigned int` in this subject. Don't change it to `int`.
- No crashes (segfault, bus error, double free) except for undefined behaviour. No leaks.

## Cleanup before submission
These files are tracked in git but must not be submitted:
- `a.out`: compiled test binary.
- `main.c`: scratch test file.
- `.vscode/` (`c_cpp_properties.json`, `launch.json`, `settings.json`): editor config.

Remove them with `git rm --cached` (or delete them) and add a `.gitignore` for `a.out`, `*.o`,
`libft.a`, `.vscode/`. Ask the user before deleting anything.

## Still to do
### Makefile
- `NAME = libft.a`, rules `$(NAME)`, `all`, `clean`, `fclean`, `re`.
- `CC = cc`, `CFLAGS = -Wall -Wextra -Werror`. Build with `ar rcs` (libtool is forbidden).
- List the sources explicitly (no wildcards) and build `.o` from `.c`, so there's **no relinking**:
  running `make` twice must print "Nothing to be done" on the second run.
- `libft.a` must be created at the repo root.

### Norm (norminette)
Several files (`ft_itoa.c`, `ft_split.c`, `ft_lst*.c`, `ft_put*_fd.c`, `ft_strjoin.c`, `ft_strtrim.c`,
`ft_substr.c`, `ft_strmapi.c`, `ft_striteri.c`, `ft_strdup.c`, `ft_calloc.c`, `ft_atoi.c`, `ft_memcmp.c`)
and `libft.h` are not normed yet. Main rules:
- 42 header on every file. Tabs for indentation, max 80 columns.
- Max 25 lines per function, 5 functions per file, 4 parameters, 5 variables.
- Declarations at the top of the function, one per line, no initialisation in the declaration.
  One empty line between declarations and code.
- Opening braces on their own line. `return (x);` with parentheses.
- No `for`, `do...while`, `switch`, ternary-heavy code or multiple statements per line.
- In `libft.h`: preprocessor lines indented as `# include`/`# define` inside the guard. Tab-aligned prototypes.
- After norming, rerun the tests: norm edits often break logic (for example splitting long functions).

### README.md
It is currently a placeholder. Required by the subject:
- First line in italics: *This project has been created as part of the 42 curriculum by oalbahra.*
- **Description**: what libft is and its goal, with an overview of the three parts.
- **Instructions**: how to build (`make`) and how to link it (`cc main.c -L. -lft`).
- **Resources**: man pages and other references, **plus how AI was used** (which tasks, which parts).
- A detailed description of the library (list the functions by part, with a one-line description each).

## Testing
- Compare Part 1 against libc. `strlcpy`/`strlcat`/`strnstr` need `#include <bsd/string.h>` and `-lbsd`.
  Compile tests with `-fno-builtin`.
- Run with `-fsanitize=address,undefined` and with `valgrind --leak-check=full`.
- Test malloc-failure paths (`ft_split`, `ft_lstmap`) by wrapping malloc (`-Wl,--wrap=malloc`)
  and checking that nothing leaks.
- Last full check (2026-10-25): all functions passed with 0 memory errors and 0 leaks.
