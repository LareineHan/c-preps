# C Prep Works 🧠💻  
*A journey through C programming*

Welcome to **C Prep Works**, my personal study log as I explore and practice the C programming language. Each program in this repository is a small, focused project designed to build my understanding of C syntax, logic, and core programming concepts.

I'll continue to add more projects here as I learn new things!

---

## 🗂️ Projects So Far

- [`todo.c`](./todo.c): A basic terminal-based to-do list using arrays and loops
- [`transcription.c`](./transcription.c): Simulates DNA to RNA transcription by character mapping

---

## 🚀 How to Compile and Run

### General Steps

1. **Open Terminal**
2. **Navigate to the project folder:**

   ```bash
   cd /path/to/c-preps
   ```

3. **Compile the program using `gcc`:**

   ```bash
   gcc filename.c -o output_name
   ```

4. **Run the program:**

   ```bash
   ./output_name
   ```

---

### 🛠 Example (for `todo.c`)

```bash
gcc todo.c -o todo
./todo
```

**Expected Output:**

```
--- TO-DO LIST MENU ---
1. Add task
2. View task
3. Mark task as done
4. Exit
Choose an option: 1
Enter task description: Finish CS homework

--- TO-DO LIST MENU ---
1. Add task
2. View task
3. Mark task as done
4. Exit
Choose an option: 2
To-Do List:
1. [ ] Finish CS homework
```

---

### 🧬 Example (for `transcription.c`)

```bash
gcc transcription.c -o transcription
./transcription
```

**Expected Output:**

```
Enter a DNA sequence (A, T, C, G): ATCG
RNA transcript: UAGC
```

---

## 📝 License

This project is licensed under the MIT License.  
See the [LICENSE](LICENSE) file for details.

---

## 📅 Last Updated

May 6, 2025