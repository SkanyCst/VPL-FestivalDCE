CC := g++
FLAGS := -I include/ -Wall
BUILD := build/
SRC := src/
TARGET := main.out

all: main

acai:
	@mkdir build/fogao/
	$(CC) $(CFLAGS) -c src/acai.cpp -o build/acai.o

cachorro_quente:
	@mkdir build/cachorro_quente/
	$(CC) $(CFLAGS) -c src/cachorro_quente.cpp -o build/cachorro_quente.o

pizza:
	@mkdir build/pizza/
	$(CC) $(CFLAGS) -c src/pizza.cpp -o build/pizza.o

produto:
	@mkdir build/produto/
	$(CC) $(CFLAGS) -c src/produto.cpp -o build/produto.o

pedido:
	@mkdir build/pedido/
	$(CC) $(CFLAGS) -c src/pedido.cpp -o build/pedido.o

venda:
	@mkdir build/venda/
	$(CC) $(CFLAGS) -c src/venda.cpp -o build/venda.o

main: venda pedido produto pizza cachorro_quente acai
	$(CC) $(CFLAGS) build/venda.o build/pedido.o build/produto.o 
	build/pizza.o build/cachorro_quente.o build/acai.o src/main.cpp -o $(TARGET)

clean: 
	$(RM) -r $(BUILDDIR) $(TARGET)