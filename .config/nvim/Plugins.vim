call plug#begin(has('nvim') ? stdpath('data') . '/plugged' : '~/.vim/plugged')
"Language and format tools
Plug 'neoclide/coc.nvim', {'branch': 'release'}
Plug 'cdelledonne/vim-cmake'
Plug 'rhysd/vim-clang-format'
Plug 'junegunn/fzf', { 'do': { -> fzf#install() } }
Plug 'pboettch/vim-cmake-syntax'
"QoL improvments
Plug 'sakhnik/nvim-gdb', { 'do': ':!./install.sh' }
Plug 'matze/vim-move'
Plug 'jiangmiao/auto-pairs'
Plug 'kana/vim-operator-user'
Plug 'tpope/vim-fugitive'
Plug 'airblade/vim-gitgutter'
"Eye candy and such
Plug 'lambdalisue/nerdfont.vim'
Plug 'mhinz/vim-startify'
Plug 'preservim/nerdtree'|
        \Plug 'ryanoasis/vim-devicons'|
        \Plug 'Xuyuanp/nerdtree-git-plugin'|
        \Plug 'PhilRunninger/nerdtree-visual-selection'
Plug 'itchyny/lightline.vim'|
        \Plug 'josa42/vim-lightline-coc'|
        \Plug 'sinetoami/lightline-hunks'|
        \Plug 'mengelbrecht/lightline-bufferline'
call plug#end()
