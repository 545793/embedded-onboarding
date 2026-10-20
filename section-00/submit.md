What command did you run?
I ran the command : Get-ChildItem -Force .. | Where-Object { $_.Name -match '\.git' } | Select-Object -ExpandProperty Name

The files I saw were:
.git
.github
.gitattributes
.gitignore

