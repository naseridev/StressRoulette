# 🧨 Stress Roulette (Russian Roulette)

🚨 **WARNING: This program may damage your system. Run it only in a controlled environment, such as a virtual machine or test system. DO NOT use it on your main device or critical servers.**

## ⚠️ Disclaimer
This code is provided for educational and research purposes only. Misuse of this program can result in data loss, system crashes, or other issues. The author assumes no responsibility for any damage caused by running this program.

## 🎯 About the Project
This program simulates **Russian Roulette** for your system. When executed, it has a **1 in 6 chance** of triggering extreme memory and CPU stress, which may cause a system crash.

## ⚙️ Compilation and Execution

### 1️⃣ **Compile the Program:**
```bash
make
```

### 2️⃣ Run the Program:
```bash
./stress
```

### 3️⃣ Clean Up Compiled Files:
```bash
make clean
```

## 🔬 How It Works

- The program randomly selects a number between 0 and 5.
- If the chosen number matches a predefined "chamber," the die() function is triggered.
- This function continuously spawns threads that allocate memory, leading to excessive resource consumption and potential system failure.

## ⚠️ Important Warnings

- Running this program may freeze (hang) your system.
- If executed on a real system, a hard reboot may be required.
- Do NOT run this on production servers or important machines.

## 🛑 How to Stop the Program

If the program begins consuming excessive resources, you can stop it using:

```bash
pkill stress
```

or

```bash
killall stress
```

Or with **sudo** if necessary:

```bash
sudo pkill -9 stress
```

or

```bash
sudo killall -9 stress
```

## 📝 License

This project is released under the MIT License. However, use it responsibly and at your own risk.
