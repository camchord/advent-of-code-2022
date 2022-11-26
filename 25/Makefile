default:
	@echo "Specify a branch"

# Commands for Part One

compile-one:
	@g++ -std=c++20 -o part-one.out part-one.cpp 

compiled-test-one:
	@./part-one.out test-input.txt

compiled-run-one:
	@./part-one.out real-input.txt

delete-one:
	@rm part-one.out

test-one:
	@make compile-one
	@make compiled-test-one
	@make delete-one

run-one:
	@make compile-one
	@make compiled-run-one
	@make delete-one

# Commands for Part Two

compile-two:
	@g++ -std=c++20 -o part-two.out part-two.cpp 

compiled-test-two:
	@./part-two.out test-input.txt

compiled-run-two:
	@./part-two.out real-input.txt

delete-two:
	@rm part-two.out

test-two:
	@make compile-two
	@make compiled-test-two
	@make delete-two

run-two:
	@make compile-two
	@make compiled-run-two
	@make delete-two