all:
	mkdir Per_Number/
	cd src/ && make
	cd src/ && make clean
clean:
	rm -r Per_Number
run:
	cd Per_Number && ./PERFECT


