<h3><a href="https://codeforces.com/contest/1660/problem/B" target="_blank" rel="noopener noreferrer">Vlad and Candies</a></h3>

<div class="header"><div class="title">B. Vlad and Candies</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Not so long ago, Vlad had a birthday, for which he was presented with a package of candies. There were $$$n$$$ types of candies, there are $$$a_i$$$ candies of the type $$$i$$$ ($$$1 \le i \le n$$$).</p><p>Vlad decided to eat exactly one candy every time, choosing any of the candies of a type that is currently the most frequent (if there are several such types, he can choose <span class="tex-font-style-bf">any</span> of them). To get the maximum pleasure from eating, Vlad <span class="tex-font-style-bf">does not want</span> to eat two candies of the same type in a row.</p><p>Help him figure out if he can eat all the candies without eating two identical candies in a row.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of input data contains an integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of input test cases.</p><p>The following is a description of $$$t$$$ test cases of input, two lines for each.</p><p>The first line of the case contains the single number $$$n$$$ ($$$1 \le n \le 2 \cdot 10^5$$$) — the number of types of candies in the package.</p><p>The second line of the case contains $$$n$$$ integers $$$a_i$$$ ($$$1 \le a_i \le 10^9$$$) — the number of candies of the type $$$i$$$.</p><p>It is guaranteed that the sum of $$$n$$$ for all cases does not exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Output $$$t$$$ lines, each of which contains the answer to the corresponding test case of input. As an answer, output "<span class="tex-font-style-tt">YES</span>" if Vlad can eat candy as planned, and "<span class="tex-font-style-tt">NO</span>" otherwise.</p><p>You can output the answer in any case (for example, the strings "<span class="tex-font-style-tt">yEs</span>", "<span class="tex-font-style-tt">yes</span>", "<span class="tex-font-style-tt">Yes</span>" and "<span class="tex-font-style-tt">YES</span>" will be recognized as a positive answer).</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004390183743018252" id="id007069128629420356" class="input-output-copier">Copy</div></div><pre id="id004390183743018252">6
2
2 3
1
2
5
1 6 2 4 3
4
2 2 2 1
3
1 1000000000 999999999
1
1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id004382893688314683" id="id001507241587937579" class="input-output-copier">Copy</div></div><pre id="id004382893688314683">YES
NO
NO
YES
YES
YES
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, it is necessary to eat sweets in this order:</p><ul><li> a candy of the type $$$2$$$, it is the most frequent, now $$$a = [2, 2]$$$;</li><li> a candy of the type $$$1$$$, there are the same number of candies of the type $$$2$$$, but we just ate one, now $$$a = [1, 2]$$$;</li><li> a candy of the type $$$2$$$, it is the most frequent, now $$$a = [1, 1]$$$;</li><li> a candy of the type $$$1$$$, now $$$a = [0, 1]$$$;</li><li> a candy of the type $$$2$$$, now $$$a = [0, 0]$$$ and the candy has run out.</li></ul><p>In the second example, all the candies are of the same type and it is impossible to eat them without eating two identical ones in a row.</p><p>In the third example, first of all, a candy of the type $$$2$$$ will be eaten, after which this kind will remain the only kind that is the most frequent, and you will have to eat a candy of the type $$$2$$$ again.</p></div>