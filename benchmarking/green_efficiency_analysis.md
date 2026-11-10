# Green Efficiency Analysis

## Measurement Methodology

This experiment examined program execution time using three benchmarking activities: baseline execution, algorithmic comparison, and controlled instrumentation. The programs were compiled using GCC with strict warning and language options, including `-Wall`, `-Werror`, `-Wextra`, `-pedantic`, and `-std=gnu89`.

For the baseline experiment, the program executed 100,000,000 iterations in each of three runs. The measured execution times were 0.231229 seconds, 0.229255 seconds, and 0.228515 seconds. The average execution time was approximately 0.229666 seconds.

For the algorithmic comparison, both implementations were executed three times. The naive algorithm recorded 2.744362, 2.750401, and 2.766279 seconds. The single-pass algorithm recorded 0.000106, 0.000105, and 0.000105 seconds. Their average times were approximately 2.753681 seconds and 0.000105 seconds, respectively.

Finally, the instrumentation experiment used `clock()`, `clock_t`, and `CLOCKS_PER_SEC` to measure the total execution time and the individual BUILD_DATA, PROCESS, and REDUCE phases. The recorded times were 0.000790, 0.000314, 0.000331, and 0.000140 seconds, respectively.

## Observed Performance Differences

The baseline measurements were relatively close across the three runs. The difference between the slowest and fastest baseline runs was 0.002714 seconds. This shows that the measured execution time was similar across these repeated runs in the tested environment.

The algorithmic comparison showed a much larger difference. The naive implementation averaged approximately 2.753681 seconds, while the single-pass implementation averaged approximately 0.000105 seconds. The naive implementation therefore took substantially longer in these measurements.

However, the two implementations produced different result values: the naive algorithm returned 625025000, while the single-pass algorithm returned 25000. Therefore, these measurements demonstrate a runtime difference between the provided implementations, but they do not establish that both implementations performed exactly the same calculation.

In the instrumentation experiment, PROCESS took 0.000331 seconds, making it the longest measured phase. BUILD_DATA took 0.000314 seconds, and REDUCE took 0.000140 seconds. The total measured time was 0.000790 seconds.

## Relation Between Runtime and Energy Consumption

Execution time is relevant when discussing energy efficiency, but runtime alone does not measure energy consumption. Energy depends on both the time a system operates and its power usage during that time.

The algorithmic comparison shows that one implementation required much more execution time than the other in the recorded tests. This makes runtime an important factor to investigate when improving efficiency. However, this experiment did not measure electrical power or energy. Consequently, it cannot prove how much energy either implementation consumed or calculate an energy saving.

## Limitations of the Experiment

The experiments were performed in one computing environment, so the results may differ on other processors, operating systems, or compiler configurations. Execution times can also vary between runs.

The algorithmic comparison has an additional limitation: the recorded result values differ, meaning the implementations may not be directly equivalent in their calculations. Also, the instrumentation experiment recorded only one run. Finally, no dedicated power or energy measurement equipment was used.

## Practical Engineering Takeaway

The measurements demonstrate why developers should examine both algorithm design and individual program phases. Repeated measurements provide more useful evidence than relying on a single execution. The instrumentation results also help identify which phase took the most time in this particular run.

Engineers should preserve the intended calculation when comparing algorithms, repeat measurements, and use suitable power-measurement tools before making claims about energy savings. Improving runtime can be a useful step toward efficiency, but energy improvements must be measured separately rather than assumed.
