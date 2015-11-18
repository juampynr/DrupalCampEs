<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN"
  "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns='http://www.w3.org/1999/xhtml' xml:lang='en' lang='en'>
<head>
<title>cod_support - For more information about this repository, visit the project page at http://drupal.org/project/cod_support</title>
<meta name='generator' content='cgit v0.11.2'/>
<meta name='robots' content='index, nofollow'/>
<link rel='stylesheet' type='text/css' href='/cgit-data/cgit.css'/>
<link rel='shortcut icon' href='/favicon.ico'/>
<link rel='alternate' title='Atom feed' href='http://cgit.drupalcode.org/cod_support/atom/cod_wysiwyg/cod_wysiwyg.features.filter.inc?h=7.x-1.0-beta6' type='application/atom+xml'/>
<link rel='vcs-git' href='git://git.drupal.org/project/cod_support.git' title='cod_support Git repository'/>
</head>
<body>
<div id='cgit'><table id='header'>
<tr>
<td class='logo' rowspan='2'><a href='/'><img src='/cgit-data/logo.png' alt='cgit logo'/></a></td>
<td class='main'><a href='/'>index</a> : <a title='cod_support' href='/cod_support/'>cod_support</a></td><td class='form'><form method='get' action=''>
<select name='h' onchange='this.form.submit();'>
<option value='2281453-cod-drag-n-drop'>2281453-cod-drag-n-drop</option>
<option value='6.x-1.x'>6.x-1.x</option>
<option value='7.x-1.x'>7.x-1.x</option>
<option value='7.x-2.x'>7.x-2.x</option>
<option value='cod_session_evaluations'>cod_session_evaluations</option>
<option value='cod_session_video'>cod_session_video</option>
<option value='cod_sponsor_sales'>cod_sponsor_sales</option>
<option value='master'>master</option>
<option value='panelize_cod'>panelize_cod</option>
</select> <input type='submit' name='' value='switch'/></form></td></tr>
<tr><td class='sub'>For more information about this repository, visit the project page at http://drupal.org/project/cod_support</td><td class='sub right'>Drupal Git User (LDAP)</td></tr></table>
<table class='tabs'><tr><td>
<a href='/cod_support/?h=7.x-1.0-beta6'>summary</a><a href='/cod_support/refs/?h=7.x-1.0-beta6'>refs</a><a href='/cod_support/log/cod_wysiwyg/cod_wysiwyg.features.filter.inc?h=7.x-1.0-beta6'>log</a><a class='active' href='/cod_support/tree/cod_wysiwyg/cod_wysiwyg.features.filter.inc?h=7.x-1.0-beta6'>tree</a><a href='/cod_support/commit/cod_wysiwyg/cod_wysiwyg.features.filter.inc?h=7.x-1.0-beta6'>commit</a><a href='/cod_support/diff/cod_wysiwyg/cod_wysiwyg.features.filter.inc?h=7.x-1.0-beta6'>diff</a><a href='/cod_support/stats/cod_wysiwyg/cod_wysiwyg.features.filter.inc?h=7.x-1.0-beta6'>stats</a></td><td class='form'><form class='right' method='get' action='/cod_support/log/cod_wysiwyg/cod_wysiwyg.features.filter.inc'>
<input type='hidden' name='h' value='7.x-1.0-beta6'/><select name='qt'>
<option value='grep'>log msg</option>
<option value='author'>author</option>
<option value='committer'>committer</option>
<option value='range'>range</option>
</select>
<input class='txt' type='text' size='10' name='q' value=''/>
<input type='submit' value='search'/>
</form>
</td></tr></table>
<div class='path'>path: <a href='/cod_support/tree/?h=7.x-1.0-beta6'>root</a>/<a href='/cod_support/tree/cod_wysiwyg?h=7.x-1.0-beta6'>cod_wysiwyg</a>/<a href='/cod_support/tree/cod_wysiwyg/cod_wysiwyg.features.filter.inc?h=7.x-1.0-beta6'>cod_wysiwyg.features.filter.inc</a></div><div class='content'>blob: b3fcdb960bddea95190013b6e2c70b6d0640160b (<a href='/cod_support/plain/cod_wysiwyg/cod_wysiwyg.features.filter.inc?h=7.x-1.0-beta6'>plain</a>)
<table summary='blob content' class='blob'>
<tr><td class='linenumbers'><pre><a id='n1' href='#n1'>1</a>
<a id='n2' href='#n2'>2</a>
<a id='n3' href='#n3'>3</a>
<a id='n4' href='#n4'>4</a>
<a id='n5' href='#n5'>5</a>
<a id='n6' href='#n6'>6</a>
<a id='n7' href='#n7'>7</a>
<a id='n8' href='#n8'>8</a>
<a id='n9' href='#n9'>9</a>
<a id='n10' href='#n10'>10</a>
<a id='n11' href='#n11'>11</a>
<a id='n12' href='#n12'>12</a>
<a id='n13' href='#n13'>13</a>
<a id='n14' href='#n14'>14</a>
<a id='n15' href='#n15'>15</a>
<a id='n16' href='#n16'>16</a>
<a id='n17' href='#n17'>17</a>
<a id='n18' href='#n18'>18</a>
<a id='n19' href='#n19'>19</a>
<a id='n20' href='#n20'>20</a>
<a id='n21' href='#n21'>21</a>
<a id='n22' href='#n22'>22</a>
<a id='n23' href='#n23'>23</a>
<a id='n24' href='#n24'>24</a>
<a id='n25' href='#n25'>25</a>
<a id='n26' href='#n26'>26</a>
<a id='n27' href='#n27'>27</a>
<a id='n28' href='#n28'>28</a>
<a id='n29' href='#n29'>29</a>
<a id='n30' href='#n30'>30</a>
<a id='n31' href='#n31'>31</a>
<a id='n32' href='#n32'>32</a>
<a id='n33' href='#n33'>33</a>
<a id='n34' href='#n34'>34</a>
<a id='n35' href='#n35'>35</a>
<a id='n36' href='#n36'>36</a>
<a id='n37' href='#n37'>37</a>
<a id='n38' href='#n38'>38</a>
<a id='n39' href='#n39'>39</a>
<a id='n40' href='#n40'>40</a>
<a id='n41' href='#n41'>41</a>
<a id='n42' href='#n42'>42</a>
<a id='n43' href='#n43'>43</a>
<a id='n44' href='#n44'>44</a>
</pre></td>
<td class='lines'><pre><code><style>.highlight .hll { background-color: #ffffcc }
.highlight  { background: #ffffff; }
.highlight .c { color: #888888 } /* Comment */
.highlight .err { color: #a61717; background-color: #e3d2d2 } /* Error */
.highlight .k { color: #008800; font-weight: bold } /* Keyword */
.highlight .cm { color: #888888 } /* Comment.Multiline */
.highlight .cp { color: #cc0000; font-weight: bold } /* Comment.Preproc */
.highlight .c1 { color: #888888 } /* Comment.Single */
.highlight .cs { color: #cc0000; font-weight: bold; background-color: #fff0f0 } /* Comment.Special */
.highlight .gd { color: #000000; background-color: #ffdddd } /* Generic.Deleted */
.highlight .ge { font-style: italic } /* Generic.Emph */
.highlight .gr { color: #aa0000 } /* Generic.Error */
.highlight .gh { color: #303030 } /* Generic.Heading */
.highlight .gi { color: #000000; background-color: #ddffdd } /* Generic.Inserted */
.highlight .go { color: #888888 } /* Generic.Output */
.highlight .gp { color: #555555 } /* Generic.Prompt */
.highlight .gs { font-weight: bold } /* Generic.Strong */
.highlight .gu { color: #606060 } /* Generic.Subheading */
.highlight .gt { color: #aa0000 } /* Generic.Traceback */
.highlight .kc { color: #008800; font-weight: bold } /* Keyword.Constant */
.highlight .kd { color: #008800; font-weight: bold } /* Keyword.Declaration */
.highlight .kn { color: #008800; font-weight: bold } /* Keyword.Namespace */
.highlight .kp { color: #008800 } /* Keyword.Pseudo */
.highlight .kr { color: #008800; font-weight: bold } /* Keyword.Reserved */
.highlight .kt { color: #888888; font-weight: bold } /* Keyword.Type */
.highlight .m { color: #0000DD; font-weight: bold } /* Literal.Number */
.highlight .s { color: #dd2200; background-color: #fff0f0 } /* Literal.String */
.highlight .na { color: #336699 } /* Name.Attribute */
.highlight .nb { color: #003388 } /* Name.Builtin */
.highlight .nc { color: #bb0066; font-weight: bold } /* Name.Class */
.highlight .no { color: #003366; font-weight: bold } /* Name.Constant */
.highlight .nd { color: #555555 } /* Name.Decorator */
.highlight .ne { color: #bb0066; font-weight: bold } /* Name.Exception */
.highlight .nf { color: #0066bb; font-weight: bold } /* Name.Function */
.highlight .nl { color: #336699; font-style: italic } /* Name.Label */
.highlight .nn { color: #bb0066; font-weight: bold } /* Name.Namespace */
.highlight .py { color: #336699; font-weight: bold } /* Name.Property */
.highlight .nt { color: #bb0066; font-weight: bold } /* Name.Tag */
.highlight .nv { color: #336699 } /* Name.Variable */
.highlight .ow { color: #008800 } /* Operator.Word */
.highlight .w { color: #bbbbbb } /* Text.Whitespace */
.highlight .mf { color: #0000DD; font-weight: bold } /* Literal.Number.Float */
.highlight .mh { color: #0000DD; font-weight: bold } /* Literal.Number.Hex */
.highlight .mi { color: #0000DD; font-weight: bold } /* Literal.Number.Integer */
.highlight .mo { color: #0000DD; font-weight: bold } /* Literal.Number.Oct */
.highlight .sb { color: #dd2200; background-color: #fff0f0 } /* Literal.String.Backtick */
.highlight .sc { color: #dd2200; background-color: #fff0f0 } /* Literal.String.Char */
.highlight .sd { color: #dd2200; background-color: #fff0f0 } /* Literal.String.Doc */
.highlight .s2 { color: #dd2200; background-color: #fff0f0 } /* Literal.String.Double */
.highlight .se { color: #0044dd; background-color: #fff0f0 } /* Literal.String.Escape */
.highlight .sh { color: #dd2200; background-color: #fff0f0 } /* Literal.String.Heredoc */
.highlight .si { color: #3333bb; background-color: #fff0f0 } /* Literal.String.Interpol */
.highlight .sx { color: #22bb22; background-color: #f0fff0 } /* Literal.String.Other */
.highlight .sr { color: #008800; background-color: #fff0ff } /* Literal.String.Regex */
.highlight .s1 { color: #dd2200; background-color: #fff0f0 } /* Literal.String.Single */
.highlight .ss { color: #aa6600; background-color: #fff0f0 } /* Literal.String.Symbol */
.highlight .bp { color: #003388 } /* Name.Builtin.Pseudo */
.highlight .vc { color: #336699 } /* Name.Variable.Class */
.highlight .vg { color: #dd7700 } /* Name.Variable.Global */
.highlight .vi { color: #3333bb } /* Name.Variable.Instance */
.highlight .il { color: #0000DD; font-weight: bold } /* Literal.Number.Integer.Long */</style><div class="highlight"><pre><span class="cp">&lt;?php</span>
<span class="sd">/**</span>
<span class="sd"> * @file</span>
<span class="sd"> * cod_wysiwyg.features.filter.inc</span>
<span class="sd"> */</span>

<span class="sd">/**</span>
<span class="sd"> * Implements hook_filter_default_formats().</span>
<span class="sd"> */</span>
<span class="k">function</span> <span class="nf">cod_wysiwyg_filter_default_formats</span><span class="p">()</span> <span class="p">{</span>
  <span class="nv">$formats</span> <span class="o">=</span> <span class="k">array</span><span class="p">();</span>

  <span class="c1">// Exported format: Filtered HTML.</span>
  <span class="nv">$formats</span><span class="p">[</span><span class="s1">&#39;filtered_html&#39;</span><span class="p">]</span> <span class="o">=</span> <span class="k">array</span><span class="p">(</span>
    <span class="s1">&#39;format&#39;</span> <span class="o">=&gt;</span> <span class="s1">&#39;filtered_html&#39;</span><span class="p">,</span>
    <span class="s1">&#39;name&#39;</span> <span class="o">=&gt;</span> <span class="s1">&#39;Filtered HTML&#39;</span><span class="p">,</span>
    <span class="s1">&#39;cache&#39;</span> <span class="o">=&gt;</span> <span class="m">1</span><span class="p">,</span>
    <span class="s1">&#39;status&#39;</span> <span class="o">=&gt;</span> <span class="m">1</span><span class="p">,</span>
    <span class="s1">&#39;weight&#39;</span> <span class="o">=&gt;</span> <span class="m">0</span><span class="p">,</span>
    <span class="s1">&#39;filters&#39;</span> <span class="o">=&gt;</span> <span class="k">array</span><span class="p">(</span>
      <span class="s1">&#39;filter_html&#39;</span> <span class="o">=&gt;</span> <span class="k">array</span><span class="p">(</span>
        <span class="s1">&#39;weight&#39;</span> <span class="o">=&gt;</span> <span class="m">1</span><span class="p">,</span>
        <span class="s1">&#39;status&#39;</span> <span class="o">=&gt;</span> <span class="m">1</span><span class="p">,</span>
        <span class="s1">&#39;settings&#39;</span> <span class="o">=&gt;</span> <span class="k">array</span><span class="p">(</span>
          <span class="s1">&#39;allowed_html&#39;</span> <span class="o">=&gt;</span> <span class="s1">&#39;&lt;a&gt; &lt;em&gt; &lt;strong&gt; &lt;u&gt; &lt;cite&gt; &lt;blockquote&gt; &lt;code&gt; &lt;ul&gt; &lt;ol&gt; &lt;li&gt; &lt;dl&gt; &lt;dt&gt; &lt;dd&gt; &lt;h4&gt; &lt;h5&gt; &lt;h6&gt;  &lt;p&gt; &lt;br&gt; &lt;img&gt; &lt;strike&gt;&#39;</span><span class="p">,</span>
          <span class="s1">&#39;filter_html_help&#39;</span> <span class="o">=&gt;</span> <span class="m">1</span><span class="p">,</span>
          <span class="s1">&#39;filter_html_nofollow&#39;</span> <span class="o">=&gt;</span> <span class="m">0</span><span class="p">,</span>
        <span class="p">),</span>
      <span class="p">),</span>
    <span class="p">),</span>
  <span class="p">);</span>

  <span class="c1">// Exported format: Full HTML.</span>
  <span class="nv">$formats</span><span class="p">[</span><span class="s1">&#39;full_html&#39;</span><span class="p">]</span> <span class="o">=</span> <span class="k">array</span><span class="p">(</span>
    <span class="s1">&#39;format&#39;</span> <span class="o">=&gt;</span> <span class="s1">&#39;full_html&#39;</span><span class="p">,</span>
    <span class="s1">&#39;name&#39;</span> <span class="o">=&gt;</span> <span class="s1">&#39;Full HTML&#39;</span><span class="p">,</span>
    <span class="s1">&#39;cache&#39;</span> <span class="o">=&gt;</span> <span class="m">1</span><span class="p">,</span>
    <span class="s1">&#39;status&#39;</span> <span class="o">=&gt;</span> <span class="m">1</span><span class="p">,</span>
    <span class="s1">&#39;weight&#39;</span> <span class="o">=&gt;</span> <span class="m">1</span><span class="p">,</span>
    <span class="s1">&#39;filters&#39;</span> <span class="o">=&gt;</span> <span class="k">array</span><span class="p">(),</span>
  <span class="p">);</span>

  <span class="k">return</span> <span class="nv">$formats</span><span class="p">;</span>
<span class="p">}</span>
</pre></div>
</code></pre></td></tr></table>
</div> <!-- class=content -->
<div class='footer'>generated by <a href='http://git.zx2c4.com/cgit/about/'>cgit v0.11.2</a> at 2015-11-18 17:50:00 (GMT)</div>
</div> <!-- id=cgit -->
</body>
</html>
