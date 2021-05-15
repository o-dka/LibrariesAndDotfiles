"Adding files
runtime Plugins.vim
runtime CoConfig.vim
runtime Clang.vim
"Theme
runtime colors/ThemerVim.vim


"Number line 
set number

"Not showing modes
set noshowmode

"Tabline show
set showtabline =2
"Move key leader
let g:move_key_modifier = 'A'
"fzf 
let g:fzf_layout = { 'window': { 'width': 0.9, 'height': 0.6 } }


"Startify 
let g:startify_bookmarks = [
  \ { 'a': '~/.config/polybar/' },
  \ { 'v': '~/.config/nvim/init.vim' },
  \ { 'x': '~/ContainerForGitStuff/.config/' },
  \ { 'z': '~/.config/nvim/Plugins.vim' },
  \ ]

"let g:startify_fortune_use_unicode = 0`

let g:startify_lists = [
      \ { 'header': ['   Bookmarks'],       'type': 'bookmarks' },
      \ { 'header': ['   MRU'],            'type': 'files' },
      \ { 'header': ['   MRU '. getcwd()], 'type': 'dir' },
      \ ]

"Lightline 
let g:lightline = { 
	\'colorscheme': 'ThemerVimLightline',
	\'active': {
	\'left': [
	\['mode', 'paste' ],
      	\[ 'readonly', 'filename'],
	\[  'coc_info', 'coc_hints', 'coc_errors', 'coc_warnings', 'coc_ok' ], 
	\[ 'coc_status'  ],
	\['lightline_hunks']
	\] 
	\ },
      	\ 'tabline': {
      	\   'left': [ ['buffers'] ],
      	\   'right': [ ['close'] ]
      	\ },
      	\ 'component_expand': {
      	\   'buffers': 'lightline#bufferline#buffers'
      	\ },
      	\ 'component_type': {
      	\   'buffers': 'tabsel'
      	\ },
	\
	\'component_function': {
      	\ 'lightline_hunks':'lightline#hunks#composer',
      	\},
	\} 
"Tab bar
let g:lightline#bufferline#enable_nerdfont  = 1
let g:lightline#bufferline#unicode_symbols  = 1
let g:lightline#bufferline#show_number  = 0
let g:lightline#bufferline#shorten_path = 1
let g:lightline#bufferline#unnamed      = '[No Name]'
"Git things
let g:lightline#hunks#hunk_symbols = [ 'A:', 'M:', 'R:' ]

call lightline#coc#register()
"Mappings for Lightline Buffer mode
"Move to buffer
nmap <Leader>1 <Plug>lightline#bufferline#go(1)
nmap <Leader>2 <Plug>lightline#bufferline#go(2)
nmap <Leader>3 <Plug>lightline#bufferline#go(3)
nmap <Leader>4 <Plug>lightline#bufferline#go(4)
nmap <Leader>5 <Plug>lightline#bufferline#go(5)
nmap <Leader>6 <Plug>lightline#bufferline#go(6)
nmap <Leader>7 <Plug>lightline#bufferline#go(7)
nmap <Leader>8 <Plug>lightline#bufferline#go(8)
nmap <Leader>9 <Plug>lightline#bufferline#go(9)
nmap <Leader>0 <Plug>lightline#bufferline#go(10)
"Delete buffer
nmap <Leader>c1 <Plug>lightline#bufferline#delete(1)
nmap <Leader>c2 <Plug>lightline#bufferline#delete(2)
nmap <Leader>c3 <Plug>lightline#bufferline#delete(3)
nmap <Leader>c4 <Plug>lightline#bufferline#delete(4)
nmap <Leader>c5 <Plug>lightline#bufferline#delete(5)
nmap <Leader>c6 <Plug>lightline#bufferline#delete(6)
nmap <Leader>c7 <Plug>lightline#bufferline#delete(7)
nmap <Leader>c8 <Plug>lightline#bufferline#delete(8)
nmap <Leader>c9 <Plug>lightline#bufferline#delete(9)
nmap <Leader>c0 <Plug>lightline#bufferline#delete(10)

" Keybidings for CoCList
" Show all diagnostics.
nnoremap <silent><nowait> <space>a  :<C-u>CocList diagnostics<cr>
 " Manage extensions.
nnoremap <silent><nowait> <space>e  :<C-u>CocList extensions<cr>
" Show commands.
nnoremap <silent><nowait> <space>c  :<C-u>CocList commands<cr>
" Find symbol of current document.
nnoremap <silent><nowait> <space>o  :<C-u>CocList outline<cr>
" Search workspace symbols.
nnoremap <silent><nowait> <space>s  :<C-u>CocList -I symbols<cr>
" Do default action for next item.
nnoremap <silent><nowait> <space>j  :<C-u>CocNext<CR>
" Do default action for previous item.
nnoremap <silent><nowait> <space>k  :<C-u>CocPrev<CR>
" Resume latest coc list.
nnoremap <silent><nowait> <space>p  :<C-u>CocListResume<CR>

"Keybiding for the start/main screen:
nmap <C-s> :Startify<cr>

"Keybind for fzf:
nmap <C-f> :Files<cr>

"NerdTree Keybidings
nnoremap <C-n> :NERDTree<CR>
nnoremap <C-g> :NERDTreeFocus<CR>
nnoremap <C-t> :NERDTreeToggle<CR>
