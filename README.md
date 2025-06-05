# PRNG-E-64: A Fast, Statistically-Strong PRNG 🌟

![PRNG-E-64](https://img.shields.io/badge/Version-1.0.0-blue.svg) ![License](https://img.shields.io/badge/License-MIT-green.svg)

Welcome to the PRNG-E-64 repository! This project features a fast and statistically-strong pseudo-random number generator (PRNG) that works with 64-bit integers. It boasts a minimum period ranging from \(2^{1024}\) to \(2^{65536}\), ensuring robust randomness for your applications.

## Table of Contents

1. [Introduction](#introduction)
2. [Features](#features)
3. [Installation](#installation)
4. [Usage](#usage)
5. [Examples](#examples)
6. [Performance](#performance)
7. [Contributing](#contributing)
8. [License](#license)
9. [Contact](#contact)

## Introduction

Randomness is essential in many fields, from cryptography to simulations. The PRNG-E-64 offers a reliable solution for generating 64-bit random integers. Its long period and strong statistical properties make it suitable for various applications.

## Features

- **Fast Performance**: Designed for speed, the PRNG-E-64 can generate random numbers quickly.
- **Statistically Strong**: It passes various statistical tests, ensuring quality randomness.
- **Large Period**: With a minimum period of \(2^{1024}\) to \(2^{65536}\), it provides a vast sequence of numbers before repeating.
- **Easy to Use**: Simple API for easy integration into your projects.

## Installation

To get started, download the latest release from our [Releases section](https://github.com/Uarthit/prng-e-64/releases). Follow these steps:

1. Go to the link above.
2. Download the appropriate file for your system.
3. Execute the file as per the instructions provided in the documentation.

## Usage

Using PRNG-E-64 is straightforward. Here’s a quick example of how to generate random numbers:

```python
from prng_e_64 import PRNG

prng = PRNG(seed=12345)  # Initialize with a seed
random_number = prng.generate()  # Generate a random number
print(random_number)
```

### Initializing the PRNG

You can initialize the PRNG with a seed value. This seed determines the starting point of the random number sequence.

### Generating Random Numbers

The `generate()` method returns a 64-bit random integer. You can call this method as many times as needed to get new random values.

## Examples

### Basic Example

Here’s a simple example to illustrate how to use the PRNG:

```python
from prng_e_64 import PRNG

prng = PRNG(seed=42)

for _ in range(5):
    print(prng.generate())
```

### Using in Simulations

The PRNG can be used in simulations where random inputs are required:

```python
def simulate_dice_rolls(num_rolls):
    prng = PRNG(seed=1)
    results = [prng.generate() % 6 + 1 for _ in range(num_rolls)]
    return results

print(simulate_dice_rolls(10))
```

## Performance

The PRNG-E-64 is optimized for performance. It can handle high volumes of random number generation without significant delays. Benchmarks show that it outperforms many traditional PRNGs, making it ideal for applications that require rapid random number generation.

## Contributing

We welcome contributions! If you would like to contribute to the PRNG-E-64 project, please follow these steps:

1. Fork the repository.
2. Create a new branch for your feature or bug fix.
3. Make your changes and commit them with clear messages.
4. Push your branch to your forked repository.
5. Submit a pull request.

Please ensure your code follows the project's style guidelines and includes tests where applicable.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for more details.

## Contact

For questions or suggestions, please feel free to reach out. You can open an issue on the GitHub repository or contact the maintainers directly.

Visit our [Releases section](https://github.com/Uarthit/prng-e-64/releases) for the latest updates and downloads.