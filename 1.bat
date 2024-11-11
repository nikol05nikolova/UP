@echo off
:: Fetch the list of branches
for /f "tokens=*" %%b in ('git branch --list') do (
    :: Switch to the branch
    git checkout %%b

    :: Add all changes
    git add .

    :: Commit with message if there are changes
    git commit -m "Removing unnecessary files"

    :: Optional: Push changes (uncomment to push)
    :: git push origin %%b
)

:: Switch back to the main branch after committing
git checkout main
