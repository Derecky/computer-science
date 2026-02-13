# 🎓 Computer Science — University Repository

> A structured monorepo organizing all academic content from my Computer Science degree — including coursework, challenges, exams, projects, and research notes.

---

## 👤 About

This repository is my personal academic knowledge base. It follows a consistent structure across every subject, making it easy to navigate, review, and build upon. Whether you're a fellow student looking for references or a future employer curious about my academic background — welcome.

---

## 🗂️ Repository Structure

```
university/
│
├── 📁 subjects/                        # Core academic disciplines
│   ├── algorithms-and-data-structures/
│   │   ├── notes/                      # Theory and class notes
│   │   ├── exercises/                  # Practice problems
│   │   ├── exams/                      # Past exams + solutions
│   │   └── README.md
│   │
│   ├── calculus/
│   ├── linear-algebra/
│   ├── discrete-mathematics/
│   ├── object-oriented-programming/
│   ├── computer-architecture/
│   ├── operating-systems/
│   ├── computer-networks/
│   ├── database-systems/
│   ├── software-engineering/
│   ├── artificial-intelligence/
│   ├── computer-graphics/
│   └── ...
│
├── 📁 challenges/                      # Coding challenges and competitions
│   ├── leetcode/
│   │   ├── easy/
│   │   ├── medium/
│   │   └── hard/
│   ├── hackerrank/
│   ├── beecrowd/                       # (formerly URI Online Judge)
│   ├── codeforces/
│   └── README.md
│
├── 📁 projects/                        # Academic and personal projects
│   ├── semester-01/
│   ├── semester-02/
│   ├── ...
│   └── README.md
│
├── 📁 research/                        # Papers, articles and summaries
│   ├── papers/
│   ├── summaries/
│   └── README.md
│
├── 📁 resources/                       # Books, links, cheat sheets
│   ├── books.md
│   ├── useful-links.md
│   └── cheatsheets/
│
└── 📁 _templates/                      # Reusable templates
    ├── subject-readme-template.md
    ├── challenge-template.md
    └── exam-solution-template.md
```

---

## 📚 Subjects

| Subject | Semester | Status | Notes |
|---------|----------|--------|-------|
| Algorithms & Data Structures | 2nd | ✅ Complete | — |
| Calculus I | 1st | ✅ Complete | — |
| Calculus II | 2nd | ✅ Complete | — |
| Linear Algebra | 1st | ✅ Complete | — |
| Discrete Mathematics | 1st | ✅ Complete | — |
| Object-Oriented Programming | 2nd | 🔄 In Progress | — |
| Computer Architecture | 3rd | 🔄 In Progress | — |
| Operating Systems | 3rd | 📅 Upcoming | — |
| Computer Networks | 4th | 📅 Upcoming | — |
| Database Systems | 3rd | 📅 Upcoming | — |
| Software Engineering | 4th | 📅 Upcoming | — |
| Artificial Intelligence | 5th | 📅 Upcoming | — |

> Status legend: ✅ Complete · 🔄 In Progress · 📅 Upcoming · ⏸️ On Hold

---

<!-- ## ⚔️ Challenges

Competitive programming and coding challenge solutions, organized by platform and difficulty.

| Platform | Solved | Languages |
|----------|--------|-----------|
| [LeetCode](https://leetcode.com) | 0 | Python, TypeScript |
| [HackerRank](https://hackerrank.com) | 0 | Python, Java |
| [Beecrowd](https://judge.beecrowd.com) | 0 | C, C++ |
| [Codeforces](https://codeforces.com) | 0 | C++, Python |

Each solution includes:
- Problem statement (link to original)
- Approach and reasoning
- Time and space complexity analysis
- Code with comments

---

## 🛠️ Projects

Academic projects developed throughout the degree. Each project lives in its own folder with its own README, setup instructions and documentation.

```
projects/
├── semester-01/
│   └── basic-calculator/        # First semester intro project
├── semester-02/
│   └── student-management-app/  # OOP fundamentals
└── ...
```

---

## 🔬 Research

Summaries and notes from papers and articles read throughout the course, organized by topic.

```
research/
├── papers/
│   └── [author-year-title].pdf
└── summaries/
    └── [author-year-title].md   # Key takeaways + personal notes
```

---

## 📁 Subject Folder Convention

Every subject folder follows the same structure for consistency:

```
subject-name/
├── notes/
│   ├── 01-introduction.md
│   ├── 02-topic-name.md
│   └── ...
├── exercises/
│   ├── week-01/
│   │   ├── problem.md
│   │   └── solution.py
│   └── ...
├── exams/
│   ├── midterm-YYYY/
│   │   ├── exam.pdf           # Original (if available)
│   │   └── solutions.md
│   └── final-YYYY/
│       ├── exam.pdf
│       └── solutions.md
└── README.md                  # Subject overview + resources
```

---

## 🏷️ Naming Conventions

| Type | Convention | Example |
|------|-----------|---------|
| Folders | `kebab-case` | `algorithms-and-data-structures` |
| Notes | `##-topic-name.md` | `03-binary-trees.md` |
| Solutions | `problem-name.ext` | `two-sum.py` |
| Exams | `type-YYYY.md` | `midterm-2024.md` |
| Papers | `author-year-short-title.pdf` | `knuth-1974-structured-programming.pdf` |

---

## 🧰 Tech Stack

The main languages and tools used across this repository:

![Python](https://img.shields.io/badge/Python-3776AB?style=flat&logo=python&logoColor=white)
![TypeScript](https://img.shields.io/badge/TypeScript-3178C6?style=flat&logo=typescript&logoColor=white)
![C](https://img.shields.io/badge/C-A8B9CC?style=flat&logo=c&logoColor=white)
![C++](https://img.shields.io/badge/C++-00599C?style=flat&logo=cplusplus&logoColor=white)
![Java](https://img.shields.io/badge/Java-ED8B00?style=flat&logo=openjdk&logoColor=white)
![Markdown](https://img.shields.io/badge/Markdown-000000?style=flat&logo=markdown&logoColor=white)

---

## 🚀 Getting Started

Clone the repository and navigate to any subject or challenge:

```bash
git clone https://github.com/your-username/university.git
cd university

# Navigate to a subject
cd subjects/algorithms-and-data-structures

# Navigate to challenges
cd challenges/leetcode/medium
```

Most solutions are self-contained and can be run directly:

```bash
# Python
python solution.py

# TypeScript
npx ts-node solution.ts

# C/C++
gcc solution.c -o solution && ./solution
```

---

## 📌 How I Take Notes

Notes are written in **Markdown** and follow a simple structure:

```markdown
# Topic Title

## Summary
Brief overview of the topic.

## Key Concepts
- Concept 1: explanation
- Concept 2: explanation

## Examples
...code or diagrams...

## References
- Book: Author - Title - Chapter X
- Video: [Title](url)
```

---
-->

## 📈 Progress Tracker


<!-- ████████████████████ -->
<!-- ░░░░░░░░░░░░░░░░░░░░ -->
<!-- 🔄 📅-->
```
Semester 2026.1  ░░░░░░░░░░░░░░░░░░░░  000% 🔄
Semester 2026.2  ░░░░░░░░░░░░░░░░░░░░  000% 📅
```

---

## 🤝 Contributing

This is a personal academic repository, but feel free to open an issue if you spot an error in any solution or note. Corrections and suggestions are welcome!

---

## 📄 License

This repository is licensed under the [MIT License](LICENSE).

> Notes and summaries are my own work. Problem statements belong to their respective platforms/institutions. Solutions are shared for educational purposes only.

---

## Subjects Progress

### 📅 2026.1

|SUBJECT|PROGRESS|PERCENT|
|-|-|-|
|DGT3285 - Introdução á programação de computadores| ████████████████░░░░| 80% |