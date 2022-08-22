import sys
from typing import List

def gen_corpus_body(bal_path: str, output_path: str) -> List[str]:
    body = []
    test_name = bal_path.strip().split("/")[-1]
    body.append("=" * (len(test_name) + 1))
    body.append(test_name)
    body.append("=" * (len(test_name) + 1))
    body.append("")
    add_file_to_buffer(body, bal_path)
    body.append("")
    body.append("---")
    body.append("")
    add_file_to_buffer(body, output_path)
    return body

def add_file_to_buffer(buffer: List[str], file_path: str) -> None:
    with open(file_path) as file:
        for line in file.readlines():
            buffer.append(line.rstrip())
    return

def write_buffer_to_file(buffer: List[str], file_path: str) -> None:
    with open(file_path, "w") as file:
        file.writelines(map(lambda line: line + "\n", buffer))

if __name__ == "__main__":
    _, bal_path, output_path, target_path = sys.argv
    write_buffer_to_file(gen_corpus_body(bal_path, output_path), target_path)
