all:
	@mkdir -p bin
	@echo "[50%] Building Core."
	@g++ main.cpp -o bin/multyterminal
	@echo "[100%] Finished building."
clean: 
	@rm -f bin/multyterminal
	@echo "All binaries removed."
