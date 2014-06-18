




<!DOCTYPE html>
<html class="   ">
  <head prefix="og: http://ogp.me/ns# fb: http://ogp.me/ns/fb# object: http://ogp.me/ns/object# article: http://ogp.me/ns/article# profile: http://ogp.me/ns/profile#">
    <meta charset='utf-8'>
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    
    
    <title>Arduino/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h at master · arduino/Arduino · GitHub</title>
    <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub" />
    <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub" />
    <link rel="apple-touch-icon" sizes="57x57" href="/apple-touch-icon-114.png" />
    <link rel="apple-touch-icon" sizes="114x114" href="/apple-touch-icon-114.png" />
    <link rel="apple-touch-icon" sizes="72x72" href="/apple-touch-icon-144.png" />
    <link rel="apple-touch-icon" sizes="144x144" href="/apple-touch-icon-144.png" />
    <meta property="fb:app_id" content="1401488693436528"/>

      <meta content="@github" name="twitter:site" /><meta content="summary" name="twitter:card" /><meta content="arduino/Arduino" name="twitter:title" /><meta content="Arduino - open-source electronics prototyping platform" name="twitter:description" /><meta content="https://avatars0.githubusercontent.com/u/379109?s=400" name="twitter:image:src" />
<meta content="GitHub" property="og:site_name" /><meta content="object" property="og:type" /><meta content="https://avatars0.githubusercontent.com/u/379109?s=400" property="og:image" /><meta content="arduino/Arduino" property="og:title" /><meta content="https://github.com/arduino/Arduino" property="og:url" /><meta content="Arduino - open-source electronics prototyping platform" property="og:description" />

    <link rel="assets" href="https://assets-cdn.github.com/">
    <link rel="conduit-xhr" href="https://ghconduit.com:25035">
    

    <meta name="msapplication-TileImage" content="/windows-tile.png" />
    <meta name="msapplication-TileColor" content="#ffffff" />
    <meta name="selected-link" value="repo_source" data-pjax-transient />
      <meta name="google-analytics" content="UA-3769691-2">

    <meta content="collector-new.githubapp.com" name="octolytics-host" /><meta content="collector-cdn.github.com" name="octolytics-script-host" /><meta content="github" name="octolytics-app-id" /><meta content="86ADF175:4761:98D2ADD:5398B3A5" name="octolytics-dimension-request_id" />
    

    
    
    <link rel="icon" type="image/x-icon" href="https://assets-cdn.github.com/favicon.ico" />


    <meta content="authenticity_token" name="csrf-param" />
<meta content="LXEgVMxPHOJ3tGlABfT+X/VtMjEF0XB8pFFbC/4tJzn671DzxGzGZT4f7vVpOktPxz7tW0p8vseTSsE0vGxYYw==" name="csrf-token" />

    <link href="https://assets-cdn.github.com/assets/github-e3bc44d99a5c83dfa1f8fd5618b2bf5595dd9023.css" media="all" rel="stylesheet" type="text/css" />
    <link href="https://assets-cdn.github.com/assets/github2-a1fd2161b2d8ea3aef1c3d15c79772ff80eb5523.css" media="all" rel="stylesheet" type="text/css" />
    


    <meta http-equiv="x-pjax-version" content="3f0b593ffa8845f1b631ab8c6a8df539">

      
  <meta name="description" content="Arduino - open-source electronics prototyping platform" />

  <meta content="379109" name="octolytics-dimension-user_id" /><meta content="arduino" name="octolytics-dimension-user_login" /><meta content="919161" name="octolytics-dimension-repository_id" /><meta content="arduino/Arduino" name="octolytics-dimension-repository_nwo" /><meta content="true" name="octolytics-dimension-repository_public" /><meta content="false" name="octolytics-dimension-repository_is_fork" /><meta content="919161" name="octolytics-dimension-repository_network_root_id" /><meta content="arduino/Arduino" name="octolytics-dimension-repository_network_root_nwo" />
  <link href="https://github.com/arduino/Arduino/commits/master.atom" rel="alternate" title="Recent Commits to Arduino:master" type="application/atom+xml" />

  </head>


  <body class="logged_out  env-production macintosh vis-public page-blob">
    <a href="#start-of-content" tabindex="1" class="accessibility-aid js-skip-to-content">Skip to content</a>
    <div class="wrapper">
      
      
      
      


      
      <div class="header header-logged-out">
  <div class="container clearfix">

    <a class="header-logo-wordmark" href="https://github.com/">
      <span class="mega-octicon octicon-logo-github"></span>
    </a>

    <div class="header-actions">
        <a class="button primary" href="/join">Sign up</a>
      <a class="button signin" href="/login?return_to=%2Farduino%2FArduino%2Fblob%2Fmaster%2Flibraries%2FRobot_Control%2Fexamples%2Fexplore%2FR06_Wheel_Calibration%2Fscripts_library.h">Sign in</a>
    </div>

    <div class="command-bar js-command-bar  in-repository">

      <ul class="top-nav">
          <li class="explore"><a href="/explore">Explore</a></li>
        <li class="features"><a href="/features">Features</a></li>
          <li class="enterprise"><a href="https://enterprise.github.com/">Enterprise</a></li>
          <li class="blog"><a href="/blog">Blog</a></li>
      </ul>
        <form accept-charset="UTF-8" action="/search" class="command-bar-form" id="top_search_form" method="get">

<div class="commandbar">
  <span class="message"></span>
  <input type="text" data-hotkey="s, /" name="q" id="js-command-bar-field" placeholder="Search or type a command" tabindex="1" autocapitalize="off"
    
    
      data-repo="arduino/Arduino"
      data-branch="master"
      data-sha="c5036550347c495b1f22b109d36a9ec9d9a14aa2"
  >
  <div class="display hidden"></div>
</div>

    <input type="hidden" name="nwo" value="arduino/Arduino" />

    <div class="select-menu js-menu-container js-select-menu search-context-select-menu">
      <span class="minibutton select-menu-button js-menu-target" role="button" aria-haspopup="true">
        <span class="js-select-button">This repository</span>
      </span>

      <div class="select-menu-modal-holder js-menu-content js-navigation-container" aria-hidden="true">
        <div class="select-menu-modal">

          <div class="select-menu-item js-navigation-item js-this-repository-navigation-item selected">
            <span class="select-menu-item-icon octicon octicon-check"></span>
            <input type="radio" class="js-search-this-repository" name="search_target" value="repository" checked="checked" />
            <div class="select-menu-item-text js-select-button-text">This repository</div>
          </div> <!-- /.select-menu-item -->

          <div class="select-menu-item js-navigation-item js-all-repositories-navigation-item">
            <span class="select-menu-item-icon octicon octicon-check"></span>
            <input type="radio" name="search_target" value="global" />
            <div class="select-menu-item-text js-select-button-text">All repositories</div>
          </div> <!-- /.select-menu-item -->

        </div>
      </div>
    </div>

  <span class="help tooltipped tooltipped-s" aria-label="Show command bar help">
    <span class="octicon octicon-question"></span>
  </span>


  <input type="hidden" name="ref" value="cmdform">

</form>
    </div>

  </div>
</div>



      <div id="start-of-content" class="accessibility-aid"></div>
          <div class="site" itemscope itemtype="http://schema.org/WebPage">
    <div id="js-flash-container">
      
    </div>
    <div class="pagehead repohead instapaper_ignore readability-menu">
      <div class="container">
        

<ul class="pagehead-actions">


  <li>
    <a href="/login?return_to=%2Farduino%2FArduino"
    class="minibutton with-count star-button tooltipped tooltipped-n"
    aria-label="You must be signed in to star a repository" rel="nofollow">
    <span class="octicon octicon-star"></span>Star
  </a>

    <a class="social-count js-social-count" href="/arduino/Arduino/stargazers">
      2,971
    </a>

  </li>

    <li>
      <a href="/login?return_to=%2Farduino%2FArduino"
        class="minibutton with-count js-toggler-target fork-button tooltipped tooltipped-n"
        aria-label="You must be signed in to fork a repository" rel="nofollow">
        <span class="octicon octicon-repo-forked"></span>Fork
      </a>
      <a href="/arduino/Arduino/network" class="social-count">
        1,952
      </a>
    </li>
</ul>

        <h1 itemscope itemtype="http://data-vocabulary.org/Breadcrumb" class="entry-title public">
          <span class="repo-label"><span>public</span></span>
          <span class="mega-octicon octicon-repo"></span>
          <span class="author"><a href="/arduino" class="url fn" itemprop="url" rel="author"><span itemprop="title">arduino</span></a></span><!--
       --><span class="path-divider">/</span><!--
       --><strong><a href="/arduino/Arduino" class="js-current-repository js-repo-home-link">Arduino</a></strong>

          <span class="page-context-loader">
            <img alt="" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32.gif" width="16" />
          </span>

        </h1>
      </div><!-- /.container -->
    </div><!-- /.repohead -->

    <div class="container">
      <div class="repository-with-sidebar repo-container new-discussion-timeline js-new-discussion-timeline  ">
        <div class="repository-sidebar clearfix">
            

<div class="sunken-menu vertical-right repo-nav js-repo-nav js-repository-container-pjax js-octicon-loaders">
  <div class="sunken-menu-contents">
    <ul class="sunken-menu-group">
      <li class="tooltipped tooltipped-w" aria-label="Code">
        <a href="/arduino/Arduino" aria-label="Code" class="selected js-selected-navigation-item sunken-menu-item" data-hotkey="g c" data-pjax="true" data-selected-links="repo_source repo_downloads repo_commits repo_releases repo_tags repo_branches /arduino/Arduino">
          <span class="octicon octicon-code"></span> <span class="full-word">Code</span>
          <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>

        <li class="tooltipped tooltipped-w" aria-label="Issues">
          <a href="/arduino/Arduino/issues" aria-label="Issues" class="js-selected-navigation-item sunken-menu-item js-disable-pjax" data-hotkey="g i" data-selected-links="repo_issues /arduino/Arduino/issues">
            <span class="octicon octicon-issue-opened"></span> <span class="full-word">Issues</span>
            <span class='counter'>847</span>
            <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32.gif" width="16" />
</a>        </li>

      <li class="tooltipped tooltipped-w" aria-label="Pull Requests">
        <a href="/arduino/Arduino/pulls" aria-label="Pull Requests" class="js-selected-navigation-item sunken-menu-item js-disable-pjax" data-hotkey="g p" data-selected-links="repo_pulls /arduino/Arduino/pulls">
            <span class="octicon octicon-git-pull-request"></span> <span class="full-word">Pull Requests</span>
            <span class='counter'>102</span>
            <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>


        <li class="tooltipped tooltipped-w" aria-label="Wiki">
          <a href="/arduino/Arduino/wiki" aria-label="Wiki" class="js-selected-navigation-item sunken-menu-item js-disable-pjax" data-hotkey="g w" data-selected-links="repo_wiki /arduino/Arduino/wiki">
            <span class="octicon octicon-book"></span> <span class="full-word">Wiki</span>
            <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32.gif" width="16" />
</a>        </li>
    </ul>
    <div class="sunken-menu-separator"></div>
    <ul class="sunken-menu-group">

      <li class="tooltipped tooltipped-w" aria-label="Pulse">
        <a href="/arduino/Arduino/pulse" aria-label="Pulse" class="js-selected-navigation-item sunken-menu-item" data-pjax="true" data-selected-links="pulse /arduino/Arduino/pulse">
          <span class="octicon octicon-pulse"></span> <span class="full-word">Pulse</span>
          <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>

      <li class="tooltipped tooltipped-w" aria-label="Graphs">
        <a href="/arduino/Arduino/graphs" aria-label="Graphs" class="js-selected-navigation-item sunken-menu-item" data-pjax="true" data-selected-links="repo_graphs repo_contributors /arduino/Arduino/graphs">
          <span class="octicon octicon-graph"></span> <span class="full-word">Graphs</span>
          <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>

      <li class="tooltipped tooltipped-w" aria-label="Network">
        <a href="/arduino/Arduino/network" aria-label="Network" class="js-selected-navigation-item sunken-menu-item js-disable-pjax" data-selected-links="repo_network /arduino/Arduino/network">
          <span class="octicon octicon-repo-forked"></span> <span class="full-word">Network</span>
          <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>
    </ul>


  </div>
</div>

              <div class="only-with-full-nav">
                

  

<div class="clone-url open"
  data-protocol-type="http"
  data-url="/users/set_protocol?protocol_selector=http&amp;protocol_type=clone">
  <h3><strong>HTTPS</strong> clone URL</h3>
  <div class="clone-url-box">
    <input type="text" class="clone js-url-field"
           value="https://github.com/arduino/Arduino.git" readonly="readonly">
    <span class="url-box-clippy">
    <button aria-label="copy to clipboard" class="js-zeroclipboard minibutton zeroclipboard-button" data-clipboard-text="https://github.com/arduino/Arduino.git" data-copied-hint="copied!" type="button"><span class="octicon octicon-clippy"></span></button>
    </span>
  </div>
</div>

  

<div class="clone-url "
  data-protocol-type="subversion"
  data-url="/users/set_protocol?protocol_selector=subversion&amp;protocol_type=clone">
  <h3><strong>Subversion</strong> checkout URL</h3>
  <div class="clone-url-box">
    <input type="text" class="clone js-url-field"
           value="https://github.com/arduino/Arduino" readonly="readonly">
    <span class="url-box-clippy">
    <button aria-label="copy to clipboard" class="js-zeroclipboard minibutton zeroclipboard-button" data-clipboard-text="https://github.com/arduino/Arduino" data-copied-hint="copied!" type="button"><span class="octicon octicon-clippy"></span></button>
    </span>
  </div>
</div>


<p class="clone-options">You can clone with
      <a href="#" class="js-clone-selector" data-protocol="http">HTTPS</a>
      or <a href="#" class="js-clone-selector" data-protocol="subversion">Subversion</a>.
  <span class="help tooltipped tooltipped-n" aria-label="Get help on which URL is right for you.">
    <a href="https://help.github.com/articles/which-remote-url-should-i-use">
    <span class="octicon octicon-question"></span>
    </a>
  </span>
</p>

  <a href="http://mac.github.com" data-url="github-mac://openRepo/https://github.com/arduino/Arduino" class="minibutton sidebar-button js-conduit-rewrite-url" title="Save arduino/Arduino to your computer and use it in GitHub Desktop." aria-label="Save arduino/Arduino to your computer and use it in GitHub Desktop.">
    <span class="octicon octicon-device-desktop"></span>
    Clone in Desktop
  </a>


                <a href="/arduino/Arduino/archive/master.zip"
                   class="minibutton sidebar-button"
                   aria-label="Download arduino/Arduino as a zip file"
                   title="Download arduino/Arduino as a zip file"
                   rel="nofollow">
                  <span class="octicon octicon-cloud-download"></span>
                  Download ZIP
                </a>
              </div>
        </div><!-- /.repository-sidebar -->

        <div id="js-repo-pjax-container" class="repository-content context-loader-container" data-pjax-container>
          


<a href="/arduino/Arduino/blob/09d0843ff3a7ccc5d3045353f00b38d7272cbf2d/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h" class="hidden js-permalink-shortcut" data-hotkey="y">Permalink</a>

<!-- blob contrib key: blob_contributors:v21:83e24c5110f3e73232961669c24643a2 -->

<p title="This is a placeholder element" class="js-history-link-replace hidden"></p>

<div class="file-navigation">
  

<div class="select-menu js-menu-container js-select-menu" >
  <span class="minibutton select-menu-button js-menu-target" data-hotkey="w"
    data-master-branch="master"
    data-ref="master"
    role="button" aria-label="Switch branches or tags" tabindex="0" aria-haspopup="true">
    <span class="octicon octicon-git-branch"></span>
    <i>branch:</i>
    <span class="js-select-button">master</span>
  </span>

  <div class="select-menu-modal-holder js-menu-content js-navigation-container" data-pjax aria-hidden="true">

    <div class="select-menu-modal">
      <div class="select-menu-header">
        <span class="select-menu-title">Switch branches/tags</span>
        <span class="octicon octicon-x js-menu-close"></span>
      </div> <!-- /.select-menu-header -->

      <div class="select-menu-filters">
        <div class="select-menu-text-filter">
          <input type="text" aria-label="Filter branches/tags" id="context-commitish-filter-field" class="js-filterable-field js-navigation-enable" placeholder="Filter branches/tags">
        </div>
        <div class="select-menu-tabs">
          <ul>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="branches" class="js-select-menu-tab">Branches</a>
            </li>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="tags" class="js-select-menu-tab">Tags</a>
            </li>
          </ul>
        </div><!-- /.select-menu-tabs -->
      </div><!-- /.select-menu-filters -->

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="branches">

        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/arduino/Arduino/blob/arm-gcc-4.7.4/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h"
                 data-name="arm-gcc-4.7.4"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="arm-gcc-4.7.4">arm-gcc-4.7.4</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/arduino/Arduino/blob/arm-gcc-4.8.3/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h"
                 data-name="arm-gcc-4.8.3"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="arm-gcc-4.8.3">arm-gcc-4.8.3</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/arduino/Arduino/blob/can/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h"
                 data-name="can"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="can">can</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/arduino/Arduino/blob/ide-1.5.x/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h"
                 data-name="ide-1.5.x"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="ide-1.5.x">ide-1.5.x</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/arduino/Arduino/blob/ide-1.5.x-avr-toolchain-gcc-4.8.1/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h"
                 data-name="ide-1.5.x-avr-toolchain-gcc-4.8.1"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="ide-1.5.x-avr-toolchain-gcc-4.8.1">ide-1.5.x-avr-toolchain-gcc-4.8.1</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/arduino/Arduino/blob/ide-1.5.x-avr-toolchain-separate-platforms/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h"
                 data-name="ide-1.5.x-avr-toolchain-separate-platforms"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="ide-1.5.x-avr-toolchain-separate-platforms">ide-1.5.x-avr-toolchain-separate-platforms</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/arduino/Arduino/blob/ide-1.5.x-import-library-from-url/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h"
                 data-name="ide-1.5.x-import-library-from-url"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="ide-1.5.x-import-library-from-url">ide-1.5.x-import-library-from-url</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/arduino/Arduino/blob/ide-1.5.x-pull115/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h"
                 data-name="ide-1.5.x-pull115"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="ide-1.5.x-pull115">ide-1.5.x-pull115</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/arduino/Arduino/blob/lib-1.5/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h"
                 data-name="lib-1.5"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="lib-1.5">lib-1.5</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item selected">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/arduino/Arduino/blob/master/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h"
                 data-name="master"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="master">master</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/arduino/Arduino/blob/master-pull115/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h"
                 data-name="master-pull115"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="master-pull115">master-pull115</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/arduino/Arduino/blob/pin-to-interrupt-macro/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h"
                 data-name="pin-to-interrupt-macro"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="pin-to-interrupt-macro">pin-to-interrupt-macro</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/arduino/Arduino/blob/pre1/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h"
                 data-name="pre1"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="pre1">pre1</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/arduino/Arduino/blob/scheduler/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h"
                 data-name="scheduler"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="scheduler">scheduler</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/arduino/Arduino/blob/update-i18n/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h"
                 data-name="update-i18n"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="update-i18n">update-i18n</a>
            </div> <!-- /.select-menu-item -->
        </div>

          <div class="select-menu-no-results">Nothing to show</div>
      </div> <!-- /.select-menu-list -->

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="tags">
        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/arduino/Arduino/tree/0023/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h"
                 data-name="0023"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="0023">0023</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/arduino/Arduino/tree/0022/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h"
                 data-name="0022"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="0022">0022</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/arduino/Arduino/tree/0021/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h"
                 data-name="0021"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="0021">0021</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/arduino/Arduino/tree/0020/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h"
                 data-name="0020"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="0020">0020</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/arduino/Arduino/tree/0019/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h"
                 data-name="0019"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="0019">0019</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/arduino/Arduino/tree/0018/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h"
                 data-name="0018"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="0018">0018</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/arduino/Arduino/tree/0017/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h"
                 data-name="0017"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="0017">0017</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/arduino/Arduino/tree/0016/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h"
                 data-name="0016"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="0016">0016</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/arduino/Arduino/tree/0015/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h"
                 data-name="0015"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="0015">0015</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/arduino/Arduino/tree/0014/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h"
                 data-name="0014"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="0014">0014</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/arduino/Arduino/tree/0013/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h"
                 data-name="0013"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="0013">0013</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/arduino/Arduino/tree/0012/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h"
                 data-name="0012"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="0012">0012</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/arduino/Arduino/tree/0011/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h"
                 data-name="0011"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="0011">0011</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/arduino/Arduino/tree/0010/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h"
                 data-name="0010"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="0010">0010</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/arduino/Arduino/tree/0009/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h"
                 data-name="0009"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="0009">0009</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/arduino/Arduino/tree/0008/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h"
                 data-name="0008"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="0008">0008</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/arduino/Arduino/tree/0007/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h"
                 data-name="0007"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="0007">0007</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/arduino/Arduino/tree/0006/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h"
                 data-name="0006"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="0006">0006</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/arduino/Arduino/tree/0005/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h"
                 data-name="0005"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="0005">0005</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/arduino/Arduino/tree/0004/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h"
                 data-name="0004"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="0004">0004</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/arduino/Arduino/tree/0003/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h"
                 data-name="0003"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="0003">0003</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/arduino/Arduino/tree/0002/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h"
                 data-name="0002"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="0002">0002</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/arduino/Arduino/tree/1.5.6-r2/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h"
                 data-name="1.5.6-r2"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="1.5.6-r2">1.5.6-r2</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/arduino/Arduino/tree/1.5.6/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h"
                 data-name="1.5.6"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="1.5.6">1.5.6</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/arduino/Arduino/tree/1.5.5-r2/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h"
                 data-name="1.5.5-r2"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="1.5.5-r2">1.5.5-r2</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/arduino/Arduino/tree/1.5.5/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h"
                 data-name="1.5.5"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="1.5.5">1.5.5</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/arduino/Arduino/tree/1.5.4-r2/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h"
                 data-name="1.5.4-r2"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="1.5.4-r2">1.5.4-r2</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/arduino/Arduino/tree/1.5.4/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h"
                 data-name="1.5.4"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="1.5.4">1.5.4</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/arduino/Arduino/tree/1.5.3/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h"
                 data-name="1.5.3"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="1.5.3">1.5.3</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/arduino/Arduino/tree/1.5.2/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h"
                 data-name="1.5.2"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="1.5.2">1.5.2</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/arduino/Arduino/tree/1.5.1/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h"
                 data-name="1.5.1"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="1.5.1">1.5.1</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/arduino/Arduino/tree/1.5/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h"
                 data-name="1.5"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="1.5">1.5</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/arduino/Arduino/tree/1.0-rc2/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h"
                 data-name="1.0-rc2"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="1.0-rc2">1.0-rc2</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/arduino/Arduino/tree/1.0-beta4/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h"
                 data-name="1.0-beta4"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="1.0-beta4">1.0-beta4</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/arduino/Arduino/tree/1.0-beta2/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h"
                 data-name="1.0-beta2"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="1.0-beta2">1.0-beta2</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/arduino/Arduino/tree/1.0.5-r2/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h"
                 data-name="1.0.5-r2"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="1.0.5-r2">1.0.5-r2</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/arduino/Arduino/tree/1.0.5/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h"
                 data-name="1.0.5"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="1.0.5">1.0.5</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/arduino/Arduino/tree/1.0.4/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h"
                 data-name="1.0.4"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="1.0.4">1.0.4</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/arduino/Arduino/tree/1.0.3/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h"
                 data-name="1.0.3"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="1.0.3">1.0.3</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/arduino/Arduino/tree/1.0.2/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h"
                 data-name="1.0.2"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="1.0.2">1.0.2</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/arduino/Arduino/tree/1.0.1/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h"
                 data-name="1.0.1"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="1.0.1">1.0.1</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/arduino/Arduino/tree/1.0/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h"
                 data-name="1.0"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="1.0">1.0</a>
            </div> <!-- /.select-menu-item -->
        </div>

        <div class="select-menu-no-results">Nothing to show</div>
      </div> <!-- /.select-menu-list -->

    </div> <!-- /.select-menu-modal -->
  </div> <!-- /.select-menu-modal-holder -->
</div> <!-- /.select-menu -->

  <div class="button-group right">
    <a href="/arduino/Arduino/find/master"
          class="js-show-file-finder minibutton empty-icon tooltipped tooltipped-s"
          data-pjax
          data-hotkey="t"
          aria-label="Quickly jump between files">
      <span class="octicon octicon-list-unordered"></span>
    </a>
    <button class="js-zeroclipboard minibutton zeroclipboard-button"
          data-clipboard-text="libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h"
          aria-label="Copy to clipboard"
          data-copied-hint="Copied!">
      <span class="octicon octicon-clippy"></span>
    </button>
  </div>

  <div class="breadcrumb">
    <span class='repo-root js-repo-root'><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/arduino/Arduino" data-branch="master" data-direction="back" data-pjax="true" itemscope="url"><span itemprop="title">Arduino</span></a></span></span><span class="separator"> / </span><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/arduino/Arduino/tree/master/libraries" data-branch="master" data-direction="back" data-pjax="true" itemscope="url"><span itemprop="title">libraries</span></a></span><span class="separator"> / </span><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/arduino/Arduino/tree/master/libraries/Robot_Control" data-branch="master" data-direction="back" data-pjax="true" itemscope="url"><span itemprop="title">Robot_Control</span></a></span><span class="separator"> / </span><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/arduino/Arduino/tree/master/libraries/Robot_Control/examples" data-branch="master" data-direction="back" data-pjax="true" itemscope="url"><span itemprop="title">examples</span></a></span><span class="separator"> / </span><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/arduino/Arduino/tree/master/libraries/Robot_Control/examples/explore" data-branch="master" data-direction="back" data-pjax="true" itemscope="url"><span itemprop="title">explore</span></a></span><span class="separator"> / </span><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/arduino/Arduino/tree/master/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration" data-branch="master" data-direction="back" data-pjax="true" itemscope="url"><span itemprop="title">R06_Wheel_Calibration</span></a></span><span class="separator"> / </span><strong class="final-path">scripts_library.h</strong>
  </div>
</div>


  <div class="commit file-history-tease">
      <img alt="X-Y" class="main-avatar js-avatar" data-user="1042130" height="24" src="https://avatars0.githubusercontent.com/u/1042130?s=140" width="24" />
      <span class="author"><a href="/X-Y" rel="contributor">X-Y</a></span>
      <time datetime="2013-08-21T23:14:00+02:00" is="relative-time">August 21, 2013</time>
      <div class="commit-title">
          <a href="/arduino/Arduino/commit/ec31a2ee5c02e1344b196881f6acf43bebeb8e94" class="message" data-pjax="true" title="Fixed robot libraries and examples for unified Arduino core">Fixed robot libraries and examples for unified Arduino core</a>
      </div>

    <div class="participation">
      <p class="quickstat"><a href="#blob_contributors_box" rel="facebox"><strong>1</strong>  contributor</a></p>
      
    </div>
    <div id="blob_contributors_box" style="display:none">
      <h2 class="facebox-header">Users who have contributed to this file</h2>
      <ul class="facebox-user-list">
          <li class="facebox-user-list-item">
            <img alt="X-Y" class=" js-avatar" data-user="1042130" height="24" src="https://avatars0.githubusercontent.com/u/1042130?s=140" width="24" />
            <a href="/X-Y">X-Y</a>
          </li>
      </ul>
    </div>
  </div>

<div class="file-box">
  <div class="file">
    <div class="meta clearfix">
      <div class="info file-name">
        <span class="icon"><b class="octicon octicon-file-text"></b></span>
        <span class="mode" title="File Mode">file</span>
        <span class="meta-divider"></span>
          <span>44 lines (36 sloc)</span>
          <span class="meta-divider"></span>
        <span>1.045 kb</span>
      </div>
      <div class="actions">
        <div class="button-group">
            <a class="minibutton tooltipped tooltipped-w js-conduit-openfile-check"
               href="http://mac.github.com"
               data-url="github-mac://openRepo/https://github.com/arduino/Arduino?branch=master&amp;filepath=libraries%2FRobot_Control%2Fexamples%2Fexplore%2FR06_Wheel_Calibration%2Fscripts_library.h"
               aria-label="Open this file in GitHub for Mac"
               data-failed-title="Your version of GitHub for Mac is too old to open this file. Try checking for updates.">
                <span class="octicon octicon-device-desktop"></span> Open
            </a>
              <a class="minibutton disabled tooltipped tooltipped-w" href="#"
                 aria-label="You must be signed in to make or propose changes">Edit</a>
          <a href="/arduino/Arduino/raw/master/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h" class="button minibutton " id="raw-url">Raw</a>
            <a href="/arduino/Arduino/blame/master/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h" class="button minibutton js-update-url-with-hash">Blame</a>
          <a href="/arduino/Arduino/commits/master/libraries/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h" class="button minibutton " rel="nofollow">History</a>
        </div><!-- /.button-group -->
          <a class="minibutton danger disabled empty-icon tooltipped tooltipped-w" href="#"
             aria-label="You must be signed in to make or propose changes">
          Delete
        </a>
      </div><!-- /.actions -->
    </div>
      
  <div class="blob-wrapper data type-objective-c js-blob-data">
       <table class="file-code file-diff tab-size-8">
         <tr class="file-code-line">
           <td class="blob-line-nums">
             <span id="L1" rel="#L1">1</span>
<span id="L2" rel="#L2">2</span>
<span id="L3" rel="#L3">3</span>
<span id="L4" rel="#L4">4</span>
<span id="L5" rel="#L5">5</span>
<span id="L6" rel="#L6">6</span>
<span id="L7" rel="#L7">7</span>
<span id="L8" rel="#L8">8</span>
<span id="L9" rel="#L9">9</span>
<span id="L10" rel="#L10">10</span>
<span id="L11" rel="#L11">11</span>
<span id="L12" rel="#L12">12</span>
<span id="L13" rel="#L13">13</span>
<span id="L14" rel="#L14">14</span>
<span id="L15" rel="#L15">15</span>
<span id="L16" rel="#L16">16</span>
<span id="L17" rel="#L17">17</span>
<span id="L18" rel="#L18">18</span>
<span id="L19" rel="#L19">19</span>
<span id="L20" rel="#L20">20</span>
<span id="L21" rel="#L21">21</span>
<span id="L22" rel="#L22">22</span>
<span id="L23" rel="#L23">23</span>
<span id="L24" rel="#L24">24</span>
<span id="L25" rel="#L25">25</span>
<span id="L26" rel="#L26">26</span>
<span id="L27" rel="#L27">27</span>
<span id="L28" rel="#L28">28</span>
<span id="L29" rel="#L29">29</span>
<span id="L30" rel="#L30">30</span>
<span id="L31" rel="#L31">31</span>
<span id="L32" rel="#L32">32</span>
<span id="L33" rel="#L33">33</span>
<span id="L34" rel="#L34">34</span>
<span id="L35" rel="#L35">35</span>
<span id="L36" rel="#L36">36</span>
<span id="L37" rel="#L37">37</span>
<span id="L38" rel="#L38">38</span>
<span id="L39" rel="#L39">39</span>
<span id="L40" rel="#L40">40</span>
<span id="L41" rel="#L41">41</span>
<span id="L42" rel="#L42">42</span>
<span id="L43" rel="#L43">43</span>

           </td>
           <td class="blob-line-code"><div class="code-body highlight"><pre><div class='line' id='LC1'><span class="cp">#include &lt;avr/pgmspace.h&gt;</span></div><div class='line' id='LC2'><span class="cp">#include &lt;ArduinoRobot.h&gt;</span></div><div class='line' id='LC3'><br/></div><div class='line' id='LC4'><span class="n">prog_char</span> <span class="n">script1</span><span class="p">[]</span> <span class="n">PROGMEM</span><span class="o">=</span><span class="s">&quot;Wheel Calibration</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">;</span></div><div class='line' id='LC5'><span class="n">prog_char</span> <span class="n">script2</span><span class="p">[]</span> <span class="n">PROGMEM</span><span class="o">=</span><span class="s">&quot;1. Put Robot on a flat surface</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">;</span></div><div class='line' id='LC6'><span class="n">prog_char</span> <span class="n">script3</span><span class="p">[]</span> <span class="n">PROGMEM</span><span class="o">=</span><span class="s">&quot;2. Adjust speed with the knob on top</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">;</span></div><div class='line' id='LC7'><span class="n">prog_char</span> <span class="n">script4</span><span class="p">[]</span> <span class="n">PROGMEM</span><span class="o">=</span><span class="s">&quot;3. If robot goes straight, it&#39;s done</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">;</span></div><div class='line' id='LC8'><span class="n">prog_char</span> <span class="n">script5</span><span class="p">[]</span> <span class="n">PROGMEM</span><span class="o">=</span><span class="s">&quot;4. Use screwdriver on the trim on bottom</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">;</span></div><div class='line' id='LC9'><span class="n">prog_char</span> <span class="n">script6</span><span class="p">[]</span> <span class="n">PROGMEM</span><span class="o">=</span><span class="s">&quot;Robot turns left, screw it clockwise;</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">;</span></div><div class='line' id='LC10'><span class="n">prog_char</span> <span class="n">script7</span><span class="p">[]</span> <span class="n">PROGMEM</span><span class="o">=</span><span class="s">&quot;Turns right, screw it ct-colockwise;</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">;</span></div><div class='line' id='LC11'><span class="n">prog_char</span> <span class="n">script8</span><span class="p">[]</span> <span class="n">PROGMEM</span><span class="o">=</span><span class="s">&quot;5. Repeat 4 until going straight</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">;</span></div><div class='line' id='LC12'><br/></div><div class='line' id='LC13'><span class="kt">char</span> <span class="n">buffer</span><span class="p">[</span><span class="mi">42</span><span class="p">];</span><span class="c1">//must be longer than text</span></div><div class='line' id='LC14'><br/></div><div class='line' id='LC15'><span class="n">PROGMEM</span> <span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">scripts</span><span class="p">[]</span><span class="o">=</span><span class="p">{</span></div><div class='line' id='LC16'>&nbsp;&nbsp;<span class="n">script1</span><span class="p">,</span></div><div class='line' id='LC17'>&nbsp;&nbsp;<span class="n">script2</span><span class="p">,</span></div><div class='line' id='LC18'>&nbsp;&nbsp;<span class="n">script3</span><span class="p">,</span></div><div class='line' id='LC19'>&nbsp;&nbsp;<span class="n">script4</span><span class="p">,</span></div><div class='line' id='LC20'>&nbsp;&nbsp;<span class="n">script5</span><span class="p">,</span></div><div class='line' id='LC21'>&nbsp;&nbsp;<span class="n">script6</span><span class="p">,</span></div><div class='line' id='LC22'>&nbsp;&nbsp;<span class="n">script7</span><span class="p">,</span></div><div class='line' id='LC23'>&nbsp;&nbsp;<span class="n">script8</span><span class="p">,</span></div><div class='line' id='LC24'><span class="p">};</span></div><div class='line' id='LC25'><br/></div><div class='line' id='LC26'><span class="kt">void</span> <span class="nf">getPGMtext</span><span class="p">(</span><span class="kt">int</span> <span class="n">seq</span><span class="p">){</span></div><div class='line' id='LC27'>&nbsp;&nbsp;<span class="n">strcpy_P</span><span class="p">(</span><span class="n">buffer</span><span class="p">,(</span><span class="kt">char</span><span class="o">*</span><span class="p">)</span><span class="n">pgm_read_word</span><span class="p">(</span><span class="o">&amp;</span><span class="p">(</span><span class="n">scripts</span><span class="p">[</span><span class="n">seq</span><span class="p">])));</span></div><div class='line' id='LC28'><span class="p">}</span></div><div class='line' id='LC29'><br/></div><div class='line' id='LC30'><span class="kt">void</span> <span class="nf">writePGMtext</span><span class="p">(</span><span class="kt">int</span> <span class="n">seq</span><span class="p">){</span></div><div class='line' id='LC31'>&nbsp;&nbsp;<span class="n">getPGMtext</span><span class="p">(</span><span class="n">seq</span><span class="p">);</span></div><div class='line' id='LC32'>&nbsp;&nbsp;<span class="n">Robot</span><span class="p">.</span><span class="n">print</span><span class="p">(</span><span class="n">buffer</span><span class="p">);</span></div><div class='line' id='LC33'><span class="p">}</span></div><div class='line' id='LC34'><br/></div><div class='line' id='LC35'><span class="kt">void</span> <span class="nf">writeScript</span><span class="p">(</span><span class="kt">int</span> <span class="n">seq</span><span class="p">){</span></div><div class='line' id='LC36'>&nbsp;&nbsp;<span class="n">writePGMtext</span><span class="p">(</span><span class="n">seq</span><span class="p">);</span></div><div class='line' id='LC37'><span class="p">}</span></div><div class='line' id='LC38'><br/></div><div class='line' id='LC39'><span class="kt">void</span> <span class="nf">writeAllScripts</span><span class="p">(){</span></div><div class='line' id='LC40'>&nbsp;&nbsp;<span class="k">for</span><span class="p">(</span><span class="kt">int</span> <span class="n">i</span><span class="o">=</span><span class="mi">0</span><span class="p">;</span><span class="n">i</span><span class="o">&lt;</span><span class="mi">8</span><span class="p">;</span><span class="n">i</span><span class="o">++</span><span class="p">){</span></div><div class='line' id='LC41'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">writeScript</span><span class="p">(</span><span class="n">i</span><span class="p">);</span></div><div class='line' id='LC42'>&nbsp;&nbsp;<span class="p">}</span>  </div><div class='line' id='LC43'><span class="p">}</span></div></pre></div></td>
         </tr>
       </table>
  </div>

  </div>
</div>

<a href="#jump-to-line" rel="facebox[.linejump]" data-hotkey="l" class="js-jump-to-line" style="display:none">Jump to Line</a>
<div id="jump-to-line" style="display:none">
  <form accept-charset="UTF-8" class="js-jump-to-line-form">
    <input class="linejump-input js-jump-to-line-field" type="text" placeholder="Jump to line&hellip;" autofocus>
    <button type="submit" class="button">Go</button>
  </form>
</div>

        </div>

      </div><!-- /.repo-container -->
      <div class="modal-backdrop"></div>
    </div><!-- /.container -->
  </div><!-- /.site -->


    </div><!-- /.wrapper -->

      <div class="container">
  <div class="site-footer">
    <ul class="site-footer-links right">
      <li><a href="https://status.github.com/">Status</a></li>
      <li><a href="http://developer.github.com">API</a></li>
      <li><a href="http://training.github.com">Training</a></li>
      <li><a href="http://shop.github.com">Shop</a></li>
      <li><a href="/blog">Blog</a></li>
      <li><a href="/about">About</a></li>

    </ul>

    <a href="/">
      <span class="mega-octicon octicon-mark-github" title="GitHub"></span>
    </a>

    <ul class="site-footer-links">
      <li>&copy; 2014 <span title="0.04147s from github-fe126-cp1-prd.iad.github.net">GitHub</span>, Inc.</li>
        <li><a href="/site/terms">Terms</a></li>
        <li><a href="/site/privacy">Privacy</a></li>
        <li><a href="/security">Security</a></li>
        <li><a href="/contact">Contact</a></li>
    </ul>
  </div><!-- /.site-footer -->
</div><!-- /.container -->


    <div class="fullscreen-overlay js-fullscreen-overlay" id="fullscreen_overlay">
  <div class="fullscreen-container js-fullscreen-container">
    <div class="textarea-wrap">
      <textarea name="fullscreen-contents" id="fullscreen-contents" class="fullscreen-contents js-fullscreen-contents" placeholder="" data-suggester="fullscreen_suggester"></textarea>
    </div>
  </div>
  <div class="fullscreen-sidebar">
    <a href="#" class="exit-fullscreen js-exit-fullscreen tooltipped tooltipped-w" aria-label="Exit Zen Mode">
      <span class="mega-octicon octicon-screen-normal"></span>
    </a>
    <a href="#" class="theme-switcher js-theme-switcher tooltipped tooltipped-w"
      aria-label="Switch themes">
      <span class="octicon octicon-color-mode"></span>
    </a>
  </div>
</div>



    <div id="ajax-error-message" class="flash flash-error">
      <span class="octicon octicon-alert"></span>
      <a href="#" class="octicon octicon-x close js-ajax-error-dismiss"></a>
      Something went wrong with that request. Please try again.
    </div>


      <script crossorigin="anonymous" src="https://assets-cdn.github.com/assets/frameworks-c044173f1e759e8299dbe414ec8ed23e4405bdc5.js" type="text/javascript"></script>
      <script async="async" crossorigin="anonymous" src="https://assets-cdn.github.com/assets/github-2d727fd36dd5f14dffd45a95f75e51e50ff0f0db.js" type="text/javascript"></script>
      
      
        <script async src="https://www.google-analytics.com/analytics.js"></script>
  </body>
</html>

