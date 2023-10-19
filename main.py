import tkinter as tk
from tkinter import filedialog
import subprocess

class Compiler:
    def __init__(self):
        self.source_code = ""
        self.c_code = ""

    def load_source_code(self, source_code):
        self.source_code = source_code

    def compile(self):
        c_code = self.source_code.replace("print(", "printf(")
        c_code = f'#include <stdio.h>\n\nint main() {{\n{c_code}\nreturn 0;\n}}'
        self.c_code = c_code

    def save_c_code(self, filename):
        with open(filename, "w") as file:
            file.write(self.c_code)

# /import tokenize
# # Define a Python source code string
# source_code = """
# def add(a, b):
#     return a + b
# """//

# Create a generator of tokens
# tokens = tokenize.tokenize(io.BytesIO(source_code.encode('utf-8')).readline)

# Iterate through the tokens
# for token in tokens:
#     print(token)


def open_file():
    file_path = filedialog.askopenfilename(filetypes=[("Python Files", "*.py")])
    if file_path:
        with open(file_path, 'r') as file:
            code_editor.delete("1.0", tk.END)
            code_editor.insert("1.0", file.read())
        set_file_path(file_path)

def save_file():
    if file_path:
        with open(file_path, 'w') as file:
            file.write(code_editor.get("1.0", tk.END))

def save_file_as():
    file_path = filedialog.asksaveasfilename(filetypes=[("Python Files", "*.py")])
    if file_path:
        with open(file_path, 'w') as file:
            file.write(code_editor.get("1.0", tk.END))
        set_file_path(file_path)

def run_code():
    source_code = code_editor.get("1.0", tk.END)
    compiler = Compiler()
    compiler.load_source_code(source_code)
    compiler.compile()
    compiler.save_c_code("temp_script.c")

    process = subprocess.Popen(["gcc", "temp_script.c", "-o", "temp_script"], stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    output, error = process.communicate()

    if not error:
        process = subprocess.Popen(["./temp_script"], stdout=subprocess.PIPE, stderr=subprocess.PIPE)
        output, error = process.communicate()

    code_output.delete("1.0", tk.END)
    code_output.insert("1.0", output.decode())
    code_output.insert("1.0", error.decode())




def set_file_path(path):
    global file_path
    file_path = path

file_path = ""

root = tk.Tk()
root.title("Python Text Editor")

menu_bar = tk.Menu(root)
root.config(menu=menu_bar)

file_menu = tk.Menu(menu_bar, tearoff=0)
menu_bar.add_cascade(label="File", menu=file_menu)
file_menu.add_command(label="Open", command=open_file)
file_menu.add_command(label="Save", command=save_file)
file_menu.add_command(label="Save As", command=save_file_as)
file_menu.add_command(label="Exit", command=root.quit)

run_menu = tk.Menu(menu_bar, tearoff=0)
menu_bar.add_cascade(label="Run", menu=run_menu)
run_menu.add_command(label="Execute", command=run_code)

code_editor = tk.Text(root)
code_editor.pack()

code_output = tk.Text(root, height=10)
code_output.pack()

root.mainloop()
