```markdown
# Calculator

A simple C project implementing basic arithmetic operations (addition, subtraction, multiplication, division) with unit tests using the Unity framework. The project includes a GitHub Actions workflow to run tests automatically on every push.

## Directory Structure

```
calculator/
├── include/
│   └── calculator.h
├── src/
│   └── calculator.c
├── tests/
│   ├── test_calculator.c
│   ├── unity.c
│   ├── unity.h
│   └── unity_internals.h
├── .github/
│   └── workflows/
│       └── ci.yml
└── README.md
```

## Prerequisites

- C compiler (e.g., MinGW for Windows, GCC for Linux)
- Git (for pushing to GitHub)

## Setup

1. **Clone the Repository**:
   ```bash
   git clone https://github.com/your-username/calculator.git
   cd calculator
   ```

2. **Ensure Unity Files**:
   - The `tests/` directory should contain `unity.c`, `unity.h`, `unity_internals.h`.
   - If missing, download from https://github.com/ThrowTheSwitch/Unity/tree/master/src.

## Compile and Run Tests Locally

### MinGW (Windows)
```bash
gcc -o calculator_test tests/test_calculator.c src/calculator.c tests/unity.c -I include -I tests -lm
./calculator_test
```

### MSVC (Windows)
```bash
cl /EHsc /I include /I tests tests\test_calculator.c src\calculator.c tests\unity.c /link /OUT:calculator_test.exe
calculator_test.exe
```

## GitHub Actions

The `.github/workflows/ci.yml` file configures a CI pipeline that:
- Runs on every push or pull request to the `main` branch.
- Compiles and executes the tests on Ubuntu with GCC.
- Reports pass/fail status.

To use:
1. Push the project to a GitHub repository.
2. Check the Actions tab for test results.

## Adding New Tests

Edit `tests/test_calculator.c` to add new test cases. Follow the Unity format:
```c
void test_new_function(void) {
    TEST_ASSERT_EQUAL_INT(expected, actual);
}
RUN_TEST(test_new_function);
```

## License

MIT License
```