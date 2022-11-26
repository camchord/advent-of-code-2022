default:
	@echo "Specify a branch"

# Commands for Part One

compile-one:
	@g++ -std=c++20 -o part-one.out part-one.cpp 

compiled-test-one:
	@./part-one.out test-input.txt
	@echo

compiled-run-one:
	@./part-one.out real-input.txt
	@echo

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

# Copies answer into clipboard to quickly paste into thing
one:
	@make compile-one
	@./part-one.out real-input.txt | tr -d "\n" | pbcopy
	@make delete-one

# Commands for Part Two

compile-two:
	@g++ -std=c++20 -o part-two.out part-two.cpp 

compiled-test-two:
	@./part-two.out test-input.txt
	@echo

compiled-run-two:
	@./part-two.out real-input.txt
	@echo

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

two:
	@make compile-two
	@./part-two.out real-input.txt | tr -d "\n" | pbcopy
	@make delete-two