# Author : ysh
# 2025/05/04 Sun 12:33:38
template = '''Q: Why can't I run my code?
A: Haven't you considered looking at your own problems first?
Q: What does this error message mean?
A: This error message alienates the effort people put in, you get it?
Q: How can I optimize the performance of this code?
A: Why bother being so concerned about performance?'''

pre = '''The server is busy. Please try again later.'''

p = list(map(lambda x: x.split(' ', 1)[1], template.split('\n')))
p = dict([[p[i], p[i + 1]] for i in range(0, len(p), 2)])

print(p.get(input(), pre))