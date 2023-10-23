# VSC Assignment Report

1. Created a new repository on GitHub.
2. Followed the instructions to connect it to a local repo `git init ... git push-u origin master`.
3. Implemented the logic for **_getSum_** function and pushed to the repo.
4. Created 2 branches `average` and `sum` via the command `git branch <name>`.
5. Checked out to the `average` branch.
6. Implemented the **_getAverage_** function.
7. Pushed it to the remote repo using the command `git push --set-upstream origin average`.
8. Did the same for the `min` branch and **_getMin_** function.
9. Now we have 3 branches as seen in the picture.

   ![Screenshot](/Screenshot.png)

10. Checked out to the `main` branch and merged the `average` branch with it via the command `git merge average`.
11. Pushed the new changes to GitHub via the command `git push`.
12. Repeated the same steps for merging the `min` branch.
13. A conflict happened, so I opened **_vim_** to solve it via the command `vim main.cpp`.
14. After resolving the conflict, I added the files, committed and pushed.
15. All is done, I just added the report file to the repo’s README.md.

> ⚠️
>
> The PDF didn’t say anything about deleting the `average` & `min` branches, so I left them in case you needed to check them.
