<h1 align="center">🔀 push_swap 📈</h1>

<p align="center">
  <a href="https://fr.wikipedia.org/wiki/MacOS_Mojave" target="_blank">
    <img alt="platform: osx 10.14.x" src="https://img.shields.io/badge/platform-osx%20v10.14.x-red?style=flat-square"/>
  </a>
  <a href="https://fr.wikipedia.org/wiki/C_(langage)" target="_blank">
    <img alt="language: c" src="https://img.shields.io/badge/language-C-purple?style=flat-square"/>
  </a>
  <a href="https://github.com/LoisDuplain/best-libft" target="_blank">
    <img alt="library: best-libft" src="https://img.shields.io/badge/library-best--libft-orange?style=flat-square"/>
  </a>
  <a href="https://profile.intra.42.fr/users/lduplain" target="_blank">
    <img alt="42 login: lduplain" src="https://img.shields.io/badge/42%20login-lduplain-2DD57B?style=flat-square"/>
  </a>
</p>

<p align="left">
  A sort algorithm using two stacks with a limited set of instructions.
  <br>
  Created by Loïs Duplain. (42login: lduplain, 42mail: lduplain@student.42lyon.fr)
</p>

<h2 align="left">🏗️ Compile</h2>
<p align="left">To compile both programs:</p>

```bash
make
```

<p align="left">To compile checker program:</p>

```bash
make checker
```

<p align="left">To compile push_swap program:</p>

```bash
make push_swap
```

<p align="left">To recompile both programs:</p>

```bash
make re
```

<p align="left">To clean all *.o in project and libraries:</p>

```bash
make clean
```

<p align="left">To clean all *.o and compiled things in project and libraries:</p>

```bash
make fclean
```

<h2 align="left">▶️ Run</h2>
<p align="left">Run push_swap:</p>

```bash
./push_swap <number_1> <number_2> <number_3> ... <number_n>		(Numbers should be between INT_MIN (-2147483648) and INT_MAX (2147483647))
```

<p align="left">Run checker:</p>

```bash
./checker <number_1> <number_2> <number_3> ... <number_n>		(Numbers should be between INT_MIN (-2147483648) and INT_MAX (2147483647))
```

Then write actions into STDIN.
When terminated press CTRL+D to write EOF.
The checker will display if numbers are correctly sorted.

<p align="left">Run push_swap and check if the algorithm sort numbers correctly:</p>

```bash
ARG="<number_1> <number_2> <number_3> ... <number_n>" ; ./push_swap $ARG | ./checker $ARG
```

<p align="left">Visualize:</p>

```bash
With random values: python3 pyviz.py `ruby -e "puts (-200..200).to_a.shuffle.join(' ')"`
```

This is o-reo's visualizer, check his work: <a href="https://github.com/o-reo/push_swap_visualizer">Visualizer repository</a>.

<h2 align="left">🖥️ 42</h2>

<a href="https://github.com/LoisDuplain/42cursus/blob/master/push_swap/push_swap.pdf">Subject</a>
<p align="left">
  Mark:
  <img alt="42-project-mark" src="https://badge42.herokuapp.com/api/project/lduplain/42cursus-push_swap"/>
</p>

<h2 align="left">⚖️ Copyright</h2>
<p align="left">
  Loïs Duplain (lduplain) © 2021
</p>