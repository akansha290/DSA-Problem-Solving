<h2><a href="https://leetcode.com/problems/valid-square/">593. Valid Square</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given the coordinates of four points in 2D space <code style="user-select: auto;">p1</code>, <code style="user-select: auto;">p2</code>, <code style="user-select: auto;">p3</code> and <code style="user-select: auto;">p4</code>, return <code style="user-select: auto;">true</code> <em style="user-select: auto;">if the four points construct a square</em>.</p>

<p style="user-select: auto;">The coordinate of a point <code style="user-select: auto;">p<sub style="user-select: auto;">i</sub></code> is represented as <code style="user-select: auto;">[x<sub style="user-select: auto;">i</sub>, y<sub style="user-select: auto;">i</sub>]</code>. The input is <strong style="user-select: auto;">not</strong> given in any order.</p>

<p style="user-select: auto;">A <strong style="user-select: auto;">valid square</strong> has four equal sides with positive length and four equal angles (90-degree angles).</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> p1 = [0,0], p2 = [1,1], p3 = [1,0], p4 = [0,1]
<strong style="user-select: auto;">Output:</strong> true
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> p1 = [0,0], p2 = [1,1], p3 = [1,0], p4 = [0,12]
<strong style="user-select: auto;">Output:</strong> false
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> p1 = [1,0], p2 = [-1,0], p3 = [0,1], p4 = [0,-1]
<strong style="user-select: auto;">Output:</strong> true
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">p1.length == p2.length == p3.length == p4.length == 2</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-10<sup style="user-select: auto;">4</sup> &lt;= x<sub style="user-select: auto;">i</sub>, y<sub style="user-select: auto;">i</sub> &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
</ul>
</div>