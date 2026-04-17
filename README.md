# Graph Adjacency Matrix Implementation

This repository contains C++ implementations of graph representation using **Adjacency Matrix** for both:

* Directed Graph
* Undirected Graph

---

## 📂 Project Structure

```
Graph Adjacency Matrix_Directed graphs/
│── Graph Adjacency Matrix_Directed graphs.cpp
│── graph values.txt

Graph Adjacency Matrix_Undirected graphs/
│── Graph Adjacency Matrix_Undirected graphs.cpp
│── graph values.txt
```

---

## 🚀 Features

* Dynamic adjacency matrix creation
* File-based graph input
* Supports:

  * Directed Graph
  * Undirected Graph
* Matrix output display

---

## 🧠 How It Works

1. Read number of nodes (n) and edges (m)
2. Create a n × n matrix initialized with 0
3. Read edges (u, v)
4. Update matrix:

   * Directed: g[u][v] = 1
   * Undirected: g[u][v] = g[v][u] = 1
5. Print adjacency matrix

---

## 📥 Input Format (graph values.txt)

```
n m
u1 v1
u2 v2
...
um vm
```

### Example

```
4 3
0 1
1 2
2 3
```

---

### Run

```
./directed
./undirected
```

---

## 🖥️ Sample Output

```
0 1 0 0
0 0 1 0
0 0 0 1
0 0 0 0
```

---

## ⚠️ Notes

* Keep `graph values.txt` in same folder
* Node index starts from 0
* Basic implementation (no error handling)

---

## 📌 Future Improvements

* Add weighted graph support
* Use vector instead of array
* Add BFS & DFS
* Add input validation

---

## 👨‍💻 Author

Abtahi Islam
CSE Student | Aspiring Software Engineer
