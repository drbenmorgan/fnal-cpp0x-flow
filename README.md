FNAL cpp0x using gitflow
========================
Improving cpp0x requires a "chasing upstream" workflow to ensure LBNE
can follow this work to specific points whilst allowing us to patch.
LBNE, following FNAL's lead, also want to implement a gitflow style
branching model.

In this model, the authoratative LBNE repo is on github (here), and the
authoratative FNAL repo is on Redmine. The construction of the github
repo was done locally via:

```
... start in empty dir ...
... use defaults for everything, except use 'v' for tag prefix ...
$ git flow init

... this is a feature branch to track upstream ...
$ git flow feature start upstream

... add FNAL authoratative as remote and fetch it ...
$ git remote add -f upstream http://cdcvs.fnal.gov/projects/cpp0x

... merge the tag we want onto our upstream branch ...
$ git merge v1_04_00

... finish the feature and retain the branch for future tags ...
$ git flow feature finish -k

... Either direct or after patching with features, create release ...
$ git flow release start 1_04_00-0

... Usual gitflow release process, then ...
$ git flow release finish 1_04_00-0

... To bring in a new upstream tag ...
$ git flow feature checkout upstream

... Then repeat merge from new upstream tag ...

... If new patches on top of a FNAL tag come in, start a new release ...
$ git flow release start 1_04_00-1
```

Everything was then pushed up to github.

The next step is to use this repo as a submodule in a FNALCore copy.
It should be possible to use this as an "integration repo", whereby
we create a feature branch in the submodule to make patches needed
for integration/portability. The feature branch can then be published
to *this* repo, and the submodule commit move to use it (or the tag
that is made off of it). More later...

# Creating a feature branch when working as a submodule
Well, this is being done on a feature branch as a submodule!

