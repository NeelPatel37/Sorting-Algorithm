<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <title>Sorting Algorithms</title>
  <style>
    body {
      font-family: Arial, sans-serif;
      line-height: 1.6;
      padding: 30px;
      background-color: #f9f9f9;
      color: #333;
    }
    h1 {
      color: #2c3e50;
      border-bottom: 2px solid #3498db;
      padding-bottom: 10px;
    }
    h2 {
      color: #2980b9;
      margin-top: 30px;
    }
    ol {
      margin-left: 20px;
    }
    ul {
      margin-left: 40px;
      list-style-type: disc;
    }
    code {
      background-color: #eee;
      padding: 2px 5px;
      border-radius: 4px;
    }
    .section {
      background-color: #ffffff;
      border-left: 5px solid #3498db;
      padding: 20px;
      margin-bottom: 20px;
      box-shadow: 0 2px 5px rgba(0,0,0,0.05);
    }
  </style>
</head>
<body>

  <h1>Sorting Algorithms</h1>

  <div class="section">
    <h2>→ Merge Sort</h2>
    <ol>
      <li>Find the middle index and divide the array into left and right halves.</li>
      <li>Create a temporary vector <code>&lt;int&gt;</code> to store merged values.</li>
      <li>Add values from both halves into the temp array in sorted order.</li>
      <li>Copy the merged temp array back to the original array.</li>
    </ol>
  </div>

  <div class="section">
    <h2>→ Quick Sort</h2>
    <ol>
      <li>Select the pivot (commonly the last element of the array).</li>
      <li>Partition the array so that:
        <ul>
          <li>Elements less than the pivot are placed on the left.</li>
          <li>Elements greater than the pivot are placed on the right.</li>
        </ul>
      </li>
      <li>Recursively apply quick sort to the left and right partitions.</li>
    </ol>
  </div>

</body>
</html>
