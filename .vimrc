set tabstop=4
set softtabstop=4
set shiftwidth=4
set noexpandtab

" highlight column number with color
set colorcolumn=110
highligh ColorColumn ctermbg=darkgray

augroup project
  autocmd!
  autocmd BufRead,BufNewFile *.h,*.c set filetype=c.doxygen
augroup END

let &path.="src/include,/usr/include/AL,"

" YouCompleteMe plugin settings
let g:ycm_key_list_select_completion=[]
let g:ycm_key_list_previous_completion=[]

set makeprg=make\ -C\ ../build\ -j9

nnoremap <F5> :make!<cr>


