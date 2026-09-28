The command I ran was:



Get-ChildItem .. -Force | Where-Object { $\_.Name -match '\\.git' }



The files I see are:



.git

.github

.gitattributes

.gitignore



