CC = gcc
CFLAGS = -Wall -Werror -Wextra

SRC_DIR = src
SRC_FILES = $(wildcard $(SRC_DIR)/*.c)

BUILD_DIR = build
OBJ_FILES = $(patsubst $(SRC_DIR)/%.c, $(BUILD_DIR)/%.o, $(SRC_FILES))

NAME = libft.a

TEST_DIR  = test
TESTS = $(wildcard $(TEST_DIR)/*_test.c)
# automatically find test source files and coresponding source files
TEST_BINS = $(patsubst $(TEST_DIR)/%_test.c, $(BUILD_DIR)/%, $(TESTS))

all: $(NAME)

$(NAME): $(OBJ_FILES)
	ar rcs $(NAME) $(OBJ_FILES)

# compile .c into .o
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# create build dir if it does not exist
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# rule to compile each test
$(BUILD_DIR)/%: $(TEST_DIR)/%_test.c $(SRC_DIR)/*.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -rf $(BUILD_DIR)/*.o $(TEST_BINS)

fclean: clean
	rm -f $(NAME)

re: fclean all

# run all tests
test: $(TEST_BINS)
	@for test in $(TEST_BINS); do \
		echo "Running $$test..."; \
	$$test || { echo "$$test failed!"; exit 1; }; \
	done
	echo "All tests passed!"

.PHONY: all clean fclean re test
