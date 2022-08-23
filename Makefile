wasm:
	clang \
   	--target=wasm32 \
   -nostdlib \
   -Wl,--no-entry \
   -Wl,--export-all \
    -o c.wasm \
   cwasm.c


server:
	python3 -m http.server
