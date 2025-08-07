<h1>Sorting Algorithms</h1>

<h2>&rarr; Merge Sort</h2>
<ol>
  <li>Find the middle index and divide the array into left and right halves.</li>
  <li>Create a temporary vector <code>&lt;int&gt;</code> to store merged values.</li>
  <li>Add values from both halves into the temp array in sorted order.</li>
  <li>Copy the merged temp array back to the original array.</li>
</ol>

<h2>&rarr; Quick Sort</h2>
<ol>
  <li>Select the pivot (commonly the last element of the array).</li>
  <li>
    Partition the array so that:
    <ul>
      <li>Elements less than the pivot are placed on the left.</li>
      <li>Elements greater than the pivot are placed on the right.</li>
    </ul>
  </li>
  <li>Recursively apply quick sort to the left and right partitions.</li>
</ol>
