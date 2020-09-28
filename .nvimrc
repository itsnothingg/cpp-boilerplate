
nnoremap <leader>nn :!cd build && cmake .. -DCMAKE_BUILD_TYPE=Debug -DCMAKE_EXPORT_COMPILE_COMMANDS=1 && make -j 4 <Cr>
"nnoremap <leader>mm :!./build/WeAppEmuBridge <Cr>
