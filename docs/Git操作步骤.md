# Git 操作步骤（零基础版）

> 这份文档解决一个问题：**命令该在哪敲、敲什么、敲错了怎么办。**
> 原理部分见《原理速查》第 9 节；本文只讲操作。

---

## 0. 先学会打开"终端"

**方法一（推荐）**
1. 打开**文件资源管理器**，地址栏输入 `D:\code` 回车
2. 在文件夹空白处**右键** → **「在终端中打开」**
3. 弹出黑窗口，提示符显示 `PS D:\code>`

**方法二**
1. 开始菜单搜 `PowerShell` → 打开
2. 输入 `cd D:\code` 回车
3. 提示符变成 `PS D:\code>`

---

## 1. 敲命令前的第一件事：看提示符

**git 是"按目录"工作的**。`git init` 会把"当前目录"变成仓库的根，敲错目录 = 仓库建错地方。

| 提示符显示 | 说明 |
| --- | --- |
| `PS D:\code>` | ✅ 正确，可以敲 git 命令 |
| `PS D:\code\2026>` | ⚠️ 在子目录里，git 仍能找到上层仓库，但容易搞混 |
| `PS C:\Users\ray>` | ❌ 错地方了，先 `cd D:\code` |

**规矩：每次敲 git 命令前，扫一眼提示符里的路径。**

---

## 2. 首次配置（一台电脑只做一次）

```bash
git config --global user.name "你的GitHub用户名"
git config --global user.email "你的GitHub邮箱"
```

- `--global` = 全局，以后在这台电脑的任何目录都不用再配
- **邮箱必须和 GitHub 账号里的一致**，否则提交不会出现在你的 GitHub 贡献记录里（战队看「积极程度」正是看这个）
- 验证：`git config --global --list`

> 如果 `git commit` 报 `Please tell me who you are`，就是这一步没做。

---

## 3. 每天的三条命令（最常用）

```bash
git add .                                    # ① 把当前目录所有改动放进"待提交清单"
git commit -m "今天做了什么"                  # ② 封箱存档，盖上时间戳
git log --oneline                            # ③ 查看所有存档点
```

**提交信息怎么写**：写具体动作，别写"更新"。

- ❌ `git commit -m "更新"`
- ✅ `git commit -m "启动段 D3：while 循环 + 数组遍历练习"`

**中间状态怎么看**：不确定现在什么情况，敲 `git status`，它会告诉你下一步该干什么。

---

## 4. 首次上传到 GitHub（一次性）

### 4.1 在网页上建一个空仓库

1. 登录 github.com → 右上角 **`+`** → **New repository**
2. **Repository name**：`51-learn`（或你喜欢的名字）
3. 选 **Private**（私有）
4. **三个勾全部不要勾**（Add a README / .gitignore / license）——勾了会和本地冲突
5. **Create repository** → 复制页面上的仓库地址，形如
   `https://github.com/你的用户名/51-learn.git`

### 4.2 本地关联并推送

```bash
git remote add origin https://github.com/你的用户名/51-learn.git
git branch -M main
git push -u origin main
```

- `remote add origin` = 给远程仓库起个代号叫 `origin`
- `branch -M main` = 把当前分支改名为 `main`（GitHub 的默认分支名）
- `push -u origin main` = 推送上去，并用 `-u` 记住这个对应关系，**以后直接敲 `git push` 就行**
- **首次推送会弹出登录窗口** → 用浏览器登录 GitHub 授权（Git 自带凭据管理器会记住，之后不用再登）

### 4.3 以后的每天

```bash
git add .
git commit -m "今天做了什么"
git push
```

---

## 5. 常见报错对照

| 报错 | 原因 | 解决 |
| --- | --- | --- |
| `Please tell me who you are` | 没配身份 | 做第 2 步 |
| `fatal: not a git repository` | 当前目录不是仓库 | 先 `cd D:\code` |
| `nothing to commit, working tree clean` | 没有改动，或忘了先 `git add` | 先 `git add .` |
| `remote origin already exists` | 之前加过远程仓库了 | `git remote set-url origin <新地址>` |
| `rejected ... fetch first` | GitHub 仓库里已有文件（建仓时勾了 README） | `git pull --rebase origin main` 再 `git push` |
| `src refspec main does not match any` | 本地还没有任何提交 | 先 `git commit` |
| 推送时卡住 / 登录失败 | 浏览器授权没走通 | 改用 Personal Access Token 当密码 |

---

## 6. `.gitignore` 是干什么的

它是一张"**不要上传**"的清单。本仓库的 `.gitignore` 挡掉了：

- `.vs\`（VS 的缓存，占了 19MB）
- `x64\`、`Debug\`、`Release\`（编译产物）
- `*.exe`、`*.obj`、`*.pdb`（编译出来的二进制）
- `*.vcxproj.user`（你本机的个人配置）

**判断一个文件该不该上传，只问一句话**：

> **"别人克隆下来，需要它吗？"**

| 文件 | 需要吗 | 结论 |
| --- | --- | --- |
| 你写的 `.c` 源码 | 需要 | 上传 |
| 编译出来的 `.exe` | 不需要（他自己编译就有） | 不上传 |
| 你本机的 VS 配置 | 不需要 | 不上传 |

**为什么必须挡掉**：这些文件每次编译、每次打开 VS 都会变。不挡掉的话，`git status` 永远显示一堆"改动"，你会分不清哪些是自己写的、哪些是电脑生成的。

---

## 7. 只上传 `.c` 源码：把已提交的文件"移出仓库"

**场景**：仓库里已经提交了 VS 工程文件（`.slnx`、`.vcxproj`、`.vscode\`），现在想让仓库里**只留 `.c` 源码和 `.md` 笔记**。

**关键区分**（Git 里最值得记住的一组对比）：

| 命令 | 效果 |
| --- | --- |
| `git rm 文件` | 从仓库**和本地磁盘**都删掉 ⚠️ 危险 |
| `git rm --cached 文件` | **只从仓库记录里删掉，本地文件完好无损** ✅ 安全 |

**做法（三步，本地文件一个都不会丢）**：

```bash
# ① 先改 .gitignore，把不要的东西写进去（见第 6 节）
# ② 把所有文件从"仓库记录"里清出来（本地文件不动）
git rm -r --cached .
# ③ 重新按新的 .gitignore 加回去
git add .
```

**提交前先看一眼清单**，确认只剩 `.c` 和 `.md`：

```bash
git status --short
```

确认无误后提交：

```bash
git commit -m "只保留 .c 源码与学习笔记，排除 VS 工程文件"
git log --oneline
```

> `git rm -r --cached .` 里的 `.` 表示"当前目录所有文件"，`-r` 表示"连同子目录"。它**只动 Git 的记录（索引），不碰磁盘上的文件**——所以不用担心代码被删。

---

## 8. 本仓库的当前状态（2026-09-19 晚）

- ✅ 首次提交完成：`e777054 启动段 D2：C 语言前三个练习 + 原理速查笔记`
- ✅ 身份已配置（`user.name` / `user.email`）
- ⬜ 待做：按第 7 节把仓库精简成"只有 `.c` 与 `.md`"
- ⬜ 待做：按第 4 节上传到 GitHub 私有仓库

**每天收尾的固定动作**：

```bash
cd D:\code
git add .
git commit -m "启动段 Dx：今天做了什么"
git push
```
