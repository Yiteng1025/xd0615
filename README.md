# xd0615
课堂笔记
知识点：
1.Git的基本操作：
  cd：浏览指令
  ls：将文件中的文件目录列出
  vim：编辑
  git add：git add [参数]  [--] <路径>　　//作用就是将我们需要提交的代码从工作区添加到暂存区，就是告诉git系统，我们要提交哪些文件，之后就可以使用git commit命令进行提交了。
  git commit -m：git commit 主要是将暂存区里的改动给提交到本地的版本库。
  git push：将文件编辑的结果上传到github账户对应的仓库中。
  cat：查询相应文件的内容。
  git clone：将GitHub的仓库文件下载到本地。

2.在 github 上添加 SSH key 的步骤：
  创建一个 SSH key ，输入ssh-keygen -t rsa -C "your_email@example.com"
  代码参数含义：
  -t 指定密钥类型，默认是 rsa ，可以省略。
  -C 设置注释文字，比如邮箱。
  -f 指定密钥文件存储文件名。

  添加你的 SSH key 到 github上面去：
  首先需要拷贝 id_rsa.pub 文件的内容，登录你的github账号，从右上角的设置（ Account Settings ）进入，然后点击菜单栏的 SSH key 进入页面添加 SSH key。 点击 Add SSH key 按钮添加一个 SSH key 。把你复制的 SSH key 代码粘贴到 key 所对应的输入框中即可。



学习心得：  
  开源硬件开发课程的第一节课，零基础听的是云里雾里。下载课程教学所需的软件，虽然饶了很多的弯路，遇到了很多不理解的地方，但最后也算是完成了老师的基本要求。希望通过这门课程，掌握更多的技巧。
