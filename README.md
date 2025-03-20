
*I. Basic Movement (Normal Mode):*

*   **h, j, k, l:** Left, Down, Up, Right.  These are your primary movement keys.  Resist the urge to use the arrow keys!
*   **w:**  Move forward one word at a time (to the beginning of the next word).
*   **b:**  Move backward one word at a time (to the beginning of the current/previous word).
*   **e:** Move to the end of the current word.
*   **ge:** Move to the end of the previous word.
*   **0 (zero):** Move to the beginning of the line.
*   **$:** Move to the end of the line.
*   **^:** Move to the first non-blank character of the line.
*   **gg:**  Move to the very beginning of the file.
*   **G (Shift+g):** Move to the very end of the file.  You can also prefix it with a number to go to a specific line, e.g., 10G goes to line 10.
*   **:# (e.g. :10):** Jump to line number #. Press Enter to execute.
*   **Ctrl+d:** Scroll down half a page.
*   **Ctrl+u:** Scroll up half a page.
*   **Ctrl+f:** Scroll forward one full page.
*   **Ctrl+b:** Scroll backward one full page.
*   **zz:** Centers the current line on the screen.  Very useful!
*   **zt:** Moves the current line to the top of the screen.
*   **zb:** Moves the current line to the bottom of the screen.

*II. Editing (Normal Mode):*

*   **i:**  Insert before the cursor.  Enters Insert Mode.
*   **a:**  Append after the cursor.  Enters Insert Mode.
*   **o:** Open a new line below the current line.  Enters Insert Mode.
*   **O (Shift+o):** Open a new line above the current line. Enters Insert Mode.
*   **I (Shift+i):** Insert at the beginning of the line.  Enters Insert Mode.
*   **A (Shift+a):** Append to the end of the line. Enters Insert Mode.
*   **r:** Replace the character under the cursor. (e.g., ra replaces the character with 'a'). Stays in Normal mode.
*   **R (Shift+r):** Enter Replace Mode, where you overwrite characters as you type.
*   **x:**  Delete the character under the cursor.
*   **X (Shift+x):** Delete the character before the cursor.
*   **dd:** Delete the entire current line.
*   **D (Shift+d):** Delete from the cursor to the end of the line. (alias for d$).
*   **cc:** Change the entire current line. (deletes the line and enters insert mode)
*   **C (Shift+c):** Change from the cursor to the end of the line. (alias for c$).  Deletes to the end of line and enters insert mode.
*   **yy:**  Yank (copy) the current line.
*   **Y (Shift+y):** Same as yy (yank current line)
*   **p:**  Paste after the cursor.
*   **P (Shift+p):** Paste before the cursor.
*   **. (period):**  Repeat the last command.  Incredibly useful!
*   **u:** Undo the last change.
*   **Ctrl+r:** Redo (opposite of undo).

*III. Visual Mode:*

*   **v:**  Enter Visual Character Mode (select character by character).
*   **V (Shift+v):** Enter Visual Line Mode (select entire lines).
*   **Ctrl+v:** Enter Visual Block Mode (select rectangular blocks of text).  Very powerful for column editing.
*   Once in Visual Mode, use movement keys (h, j, k, l, w, b, etc.) to select the text.
*   **y:**  Yank (copy) the selected text.
*   **d:**  Delete the selected text.
*   **c:** Change the selected text. (deletes and enters insert mode)
*   **>:** Indent the selected text to the right.
*   **<:** Indent the selected text to the left.
*   **:** (colon): After selecting text in Visual Mode, press colon to enter command-line mode pre-populated with :'<,'>.  You can then add a command to be executed on the selected lines.  For example, :'<,'>s/old/new/g will replace all occurrences of "old" with "new" in the selected lines.

*IV.  Counts and Motions (Combining for Power):*

You can combine numbers (counts) with motions to perform actions on multiple words, lines, etc.

*   **2w:**  Move forward two words.
*   **3j:** Move down three lines.
*   **10dd:** Delete ten lines.
*   **d2w:** Delete two words.
*   **y3j:** Yank (copy) three lines.
*   **caw:** Change a word (around the cursor).  Deletes the entire word and enters insert mode.
*   **daw:** Delete a word (around the cursor).

*V. Searching and Replacing:*

*   **/pattern:** Search forward for the given pattern.  Press n to go to the next match, and N (Shift+n) to go to the previous match.
*   **?pattern:** Search backward for the given pattern. Press n to go to the next match, and N to go to the previous match.
*   **:%s/old/new/g:**  Replace all occurrences of "old" with "new" in the entire file.
    *   % means "entire file."
    *   s means "substitute."
    *   /old/new/ is the pattern to find and the replacement.
    *   g means "global" (replace all occurrences on a line).
*   **:%s/old/new/gc:**  Same as above, but with "confirm."  It will ask you to confirm each replacement.
*   **:s/old/new/:** Replace only the first occurrence of "old" with "new" on the current line.
*   ***:** Search forward for the word under the cursor.
*   **#:** Search backward for the word under the cursor.

*VI.  Buffers, Tabs, and Windows:*

*   **:e <filename>:**  Open a file for editing.
*   **:b <partial_filename>:** Switch to a buffer by its name (tab completion works here).  e.g., :b myfi and then press Tab will likely complete to myfile.txt if that's the only file starting with "myfi".
*   **:ls:** List all open buffers.
*   **:bn:** Go to the next buffer.
*   **:bp:** Go to the previous buffer.
*   **:bd:** Close (delete) the current buffer.
*   **:tabnew:** Open a new tab.
*   **:tabn:** Go to the next tab.
*   **:tabp:** Go to the previous tab.
*   **:tabc:** Close the current tab.
*   **Ctrl+w s:** Split the current window horizontally.
*   **Ctrl+w v:** Split the current window vertically.
*   **Ctrl+w w:** Cycle through the windows.
*   **Ctrl+w h:** Switch to the window on the left.
*   **Ctrl+w j:** Switch to the window below.
*   **Ctrl+w k:** Switch to the window above.
*   **Ctrl+w l:** Switch to the window on the right.
*   **Ctrl+w =:** Make all windows the same size.
*   **Ctrl+w _:** Maximize the current window's height.
*   **Ctrl+w |:** Maximize the current window's width.
*   **Ctrl+w c:** Close the current window.
*   **Ctrl+w o:** Close all windows except the current one.

*VII.  Quality of Life (QoL):*

*   **:set number or :set nu:** Show line numbers.  Add set number to your init.vim or init.lua to make it permanent.
*   **:set relativenumber or :set rnu:** Show relative line numbers (distance from current line). Also helpful for navigation.
*   **:set hlsearch:** Highlight search results.  Add to your config to make permanent.
*   **:set incsearch:** Show search results as you type. Add to your config.
*   **:set ignorecase:** Ignore case in searches. Add to your config.
*   **:set smartcase:** Ignore case unless the search pattern contains uppercase characters. Add to your config.  This is often preferred over just ignorecase.
*   **:set tabstop=4:** Set the number of spaces a tab represents.  Add to your config.
*   **:set shiftwidth=4:** Set the number of spaces used for indentation. Add to your config.
*   **:set expandtab:**  Use spaces instead of tabs.  Add to your config. Highly recommended for consistency.
*   **:set autoindent:** Automatically indent new lines. Add to your config.
*   **:set smartindent:**  Smarter auto-indenting. Add to your config.
*   **Esc:**  Always, always, always press Esc to return to Normal Mode.  This is your home base.
*   **:help <command>:**  Use Neovim's built-in help system!  e.g., :help :w for help on the :w command, or :help w for help on the w (word) movement.

**VIII.  Command-Line Mode (after pressing :):**

*   *Tab Completion:*  Use Tab to complete filenames, commands, options, etc.  Press Tab repeatedly to cycle through options.
*   *Up/Down Arrows:*  Navigate through your command history.

*IX. Folding (for code organization):*
* za: toggle fold at cursor
* zc: close fold at cursor
* zo: open fold at cursor
* zr: open all folds
* zm: close all folds
* zR: open all folds recursively
* zM: close all folds recursively

*How to Learn:*

*   *Practice, Practice, Practice:*  The key is to use these shortcuts consistently.  Start with the basic movement keys (h, j, k, l) and then gradually add more.
*   *Cheat Sheets:*  Keep a cheat sheet handy.  There are many available online.
*   *Type Racer:*  Practice using hjkl in a typing game.
*   *Neovim Tutor:*  Run :Tutor in Neovim for an interactive tutorial.
*   *Incremental Learning:* Don't try to learn everything at once.  Focus on a few shortcuts each day or week.
*   *Customize (Mappings):* Once you're comfortable, customize key mappings to suit your preferences.  For example, if you prefer jk to Esc to return to normal mode, you can map jk to Esc.
