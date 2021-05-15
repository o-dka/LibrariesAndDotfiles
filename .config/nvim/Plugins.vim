call plug#begin(has('nvim') ? stdpath('data') . '/plugged' : '~/.vim/plugged')
Plug 'matze/vim-move'
Plug 'neoclide/coc.nvim', {'branch': 'release'}
Plug 'rhysd/vim-clang-format'
Plug 'tpope/vim-sensible'
Plug 'junegunn/fzf', { 'do': { -> fzf#install() } }
Plug 'junegunn/fzf.vim'
Plug 'mhinz/vim-startify'
Plug 'preservim/nerdtree'|
	\Plug 'ryanoasis/vim-devicons'|
	\Plug 'Xuyuanp/nerdtree-git-plugin'|
	\Plug 'PhilRunninger/nerdtree-visual-selection'
Plug 'tpope/vim-fugitive'
Plug 'airblade/vim-gitgutter'
Plug 'itchyny/lightline.vim'|
	\Plug 'josa42/vim-lightline-coc'|
	\Plug 'sinetoami/lightline-hunks'|
	\Plug 'mengelbrecht/lightline-bufferline'
Plug 'tpope/vim-surround'
Plug 'lambdalisue/nerdfont.vim'
Plug 'kana/vim-operator-user' 
call plug#end()

