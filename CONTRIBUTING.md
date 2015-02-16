# How to contribute

1. First, [fork the repository](https://guides.github.com/activities/forking/) into your own account and clone it:

    git clone git@github.com: YOUR USER NAME /DrupalCampEs.git

2. All the changes are done to the dev branch, so you should work there:

    git fetch
    git checkout dev

3. Pick an issue from the list:

    https://github.com/AsociacionDrupalES/DrupalCampEs/issues

4. Once is fixed, create a Pull Request (PR) and attach it to the issue. You can attach it to the issue if you use the Issue ID in the commit message. See

    (Create a PR)[https://help.github.com/articles/creating-a-pull-request/]
    (Closing issues via commit messages)[https://help.github.com/articles/closing-issues-via-commit-messages/]

5. Wait until someone with permissions reviews and approves your PR or requests more changes.

## Working with the Drupal profile

We are using a COD profile with some changes. To make it easier for deploys and developers, we are putting all the contrib modules directly in the profile/modules/contrib folder and not using make files. This also helps to keep the COD profile with the less changes possible.

All the custom dependencies are being handled in a custom module called aedcamp that can be found on profile/modules/custom.

### Installing the site

Install the COD profile through the web interface or with Drush:

    drush si --db-url=mysql://user:pass@localhost/db cod

Then, enable the custom dependencies:

    drush en aedcamp -y

Please note there is an old DrupalCamp profile that is not being used.

### Location of custom code

You can find the custom theme on profile/themes/drupalcamp

You should put all the required contrib modules into profile/modules/contrib

All the custom code goes into profile/modules/custom

### Installing a new dependency

1. First, add it as a hook_update_X into aedcamp.install, so the people who already has installed the profile doesn’t need to reinstall.

2. Second, add it to the aedcamp.info as a dependency.

Note: We are not using the cod.info file, as we have experienced some issues when adding dependencies there. (See this issue) [https://github.com/AsociacionDrupalES/DrupalCampEs/issues/18].

