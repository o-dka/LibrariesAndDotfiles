

  
  if &background == 'dark'
    
  let s:shade0 = "#262626"
  let s:shade1 = "#453e33"
  let s:shade2 = "#645541"
  let s:shade3 = "#836d4e"
  let s:shade4 = "#a2845b"
  let s:shade5 = "#c19c68"
  let s:shade6 = "#e0b376"
  let s:shade7 = "#ffcb83"
  let s:accent0 = "#c13900"
  let s:accent1 = "#e4a572"
  let s:accent2 = "#caaf00"
  let s:accent3 = "#a4a900"
  let s:accent4 = "#bd6d00"
  let s:accent5 = "#f79500"
  let s:accent6 = "#fc5e00"
  let s:accent7 = "#f0ffa3"
  
  endif
  

  
  if &background == 'light'
    
  let s:shade0 = "#edebe8"
  let s:shade1 = "#d5d4d0"
  let s:shade2 = "#bcbcb7"
  let s:shade3 = "#a4a59f"
  let s:shade4 = "#8b8e87"
  let s:shade5 = "#73776f"
  let s:shade6 = "#5a5f56"
  let s:shade7 = "#42483e"
  let s:accent0 = "#c13900"
  let s:accent1 = "#b97b49"
  let s:accent2 = "#c49f47"
  let s:accent3 = "#82ab55"
  let s:accent4 = "#59b07f"
  let s:accent5 = "#70a4b9"
  let s:accent6 = "#9d7a9a"
  let s:accent7 = "#b2889b"
  
  endif
  

  let s:p = {'normal': {}, 'inactive': {}, 'insert': {}, 'replace': {}, 'visual': {}, 'tabline': {}}
  let s:p.normal.left = [ [ s:shade1, s:accent5 ], [ s:shade7, s:shade2 ] ]
  let s:p.normal.right = [ [ s:shade1, s:shade4 ], [ s:shade5, s:shade2 ] ]
  let s:p.inactive.right = [ [ s:shade1, s:shade3 ], [ s:shade3, s:shade1 ] ]
  let s:p.inactive.left =  [ [ s:shade4, s:shade1 ], [ s:shade3, s:shade0 ] ]
  let s:p.insert.left = [ [ s:shade1, s:accent3 ], [ s:shade7, s:shade2 ] ]
  let s:p.replace.left = [ [ s:shade1, s:accent1 ], [ s:shade7, s:shade2 ] ]
  let s:p.visual.left = [ [ s:shade1, s:accent6 ], [ s:shade7, s:shade2 ] ]
  let s:p.normal.middle = [ [ s:shade5, s:shade1 ] ]
  let s:p.inactive.middle = [ [ s:shade4, s:shade1 ] ]
  let s:p.tabline.left = [ [ s:shade6, s:shade2 ] ]
  let s:p.tabline.tabsel = [ [ s:shade6, s:shade0 ] ]
  let s:p.tabline.middle = [ [ s:shade2, s:shade4 ] ]
  let s:p.tabline.right = copy(s:p.normal.right)
  let s:p.normal.error = [ [ s:accent0, s:shade0 ] ]
  let s:p.normal.warning = [ [ s:accent2, s:shade1 ] ]

  let g:lightline#colorscheme#ThemerVimLightline#palette = lightline#colorscheme#fill(s:p)

  