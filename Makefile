.PHONY: clean All

All:
	@echo "----------Building project:[ Ejemplo02 - Debug ]----------"
	@cd "Ejercicio02" && "$(MAKE)" -f  "Ejemplo02.mk"
clean:
	@echo "----------Cleaning project:[ Ejemplo02 - Debug ]----------"
	@cd "Ejercicio02" && "$(MAKE)" -f  "Ejemplo02.mk" clean
