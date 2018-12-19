.. _glossary:


*******************
Glossary
*******************

.. comment
   Do not remove or change indents - they need to be as is so the glossary will correctly automatically.


.. glossary::

   Alert
      An alert is triggered when the conditions for a detector rule are met. For example, a detector monitoring the number of requests served by an application may have a rule that produces an alert if the number is below a static threshold, e.g. 20 requests per minute, and/or above a calculated one, e.g. the mean + 3 standard deviations of the number of requests per minute over the past hour.

      When an alert is triggered, the detector also creates an :any:`event` and may optionally send a :any:`notification`. All currently active alerts can be viewed from the Alerts page.



   Aggregation
      An aggregation is a type of analytic computation that reduces multiple time series into one or more output time series. The analytic computation is applied to data at the same point in time across each of the time series, in contrast to a :any:`transformation<Transformation>`. For example, a Sum Aggregation will sum all the datapoints in each time slice across n time series and, by default, result in a single time series with the calculated sums.

      One may choose to group aggregations using the optional group |hyph| by field, in which case the analytics computation is applied to the subsets defined by the grouping, with a matching number of output time series.



   Analytics
      Analytics are the mathematical functions that can be applied to a collection of datapoints. For a full list of analytics that can be applied in SignalFx, please see the :ref:`analytics-ref`.



   Catalog
      See :any:`Metrics Catalog`



   Chart
      A chart is a visualization of one or more dynamic queries (:any:`plots<plot>`) against time series data that is available within an organization. Charts can be configured to present the data in different forms, depending on how you want to show the data: line charts, bar charts, area charts, heat maps or lists.



   Chart Builder
      The Chart Builder is the interface for creating, editing, and exploring charts. Here, the signals in a chart can be added or filtered, analytics can be applied, events can be overlaid, and the display settings of the chart can be set.

   Chart resolution
      Chart resolution is the time interval between successive datapoints on a chart. High resolution or fine data can have an interval as small as one second (1s), while low resolution or coarse data can have intervals as high as five minutes (5m) or more. Note that chart resolution only affects how data on the chart is displayed, not the resolution at which data is sent to SignalFx (see :any:`data resolution`). For information on how to set chart resolution, see :ref:`dashboard-resolution`.

   Counter
      A counter is a metric type that measures occurrences of an activity or event, e.g. the number of web pages served by a website or the number of exceptions in a process. Summing counters over a period of time produces the net activity in that interval. Counters can only take integer values of zero or greater and are reset to zero at the conclusion of each reporting interval.



   Cumulative counter
      A cumulative counter typically represents the total activity in the lifetime of an application or process. Cumulative counters are NOT reset with each reporting interval. Examples of cumulative counters include the total number of API calls served since a web server started up, or the total number of bytes transmitted by an interface since it started up. Cumulative counters can also be used to derive incremental values, just as counters can.


   Dashboard
      A dashboard is a grouping of charts arranged in a specific way. Every dashboard is a member of a specific :any:`dashboard group`.

      For example, the "Applications Team" dashboard group within an organization may have a "Client-side Services" dashboard displaying all client-side-service-related charts. All dashboards, including those on personal dashboard groups, may be edited by anyone in the organization. (We will be adding team-level access controls in the future.)


   Dashboard group
      A dashboard group, formerly referred to as a page, is a grouping of dashboards around a common element. There are two types of dashboard groups: personal and service. Each user has her own personal dashboard group. Service dashboard groups are often created to group dashboards for services or teams. All dashboard groups within an organization can be browsed via the Dashboards item in the main navigation menu.

   Dashboard variable
      Dashboard variables let you specify one or more commonly used :any:`filters<Filter>` as dropdowns on a dashboard. See :ref:`dashboard-variables`.


   Data resolution
      Data resolution is the time interval at which datapoints are typically sent to SignalFx. For more information, see :ref:`data-resolution`. See also :any:`Chart resolution`.


   Datapoint
      A datapoint is a single reported value of a metric from a particular source at a specific point in time.

      Examples of common datapoints include the CPU utilization of server ‘foo’ or the count of API calls for service ‘bar’ on 12 March 2015 at 10:05:15 pm.



   Detector
      A detector monitors a signal for conditions or issues that you care about.

      Those conditions or issues are expressed as one or more rules that will trigger an alert when the conditions in the rules are met. Individual rules in a detector are labeled according to criticality: Info, Warning, Minor, Major, Critical.

      For example, a detector that monitors the latency of an API call may go into a critical state when the latency is significantly higher than normal, as defined in the detector rules.

      For more information, see :ref:`detect-alert`.

   Dimension
      A dimension is a key/value pair that, along with the metric name, is part of the identity of a :any:`time series`. You can filter and aggregate time series by those dimensions across SignalFx.


   Event
      An event is an aperiodic occurrence that can be represented as a structured log line to SignalFx (e.g., the values could be represented as any combination of key/value pairs). Events are secondary to :any:`metrics<Metric>` in SignalFx and are meant to provide context for the metric data. Events can be displayed on charts and viewed in the Events sidebar. See :ref:`events-intro`.

   Event time series
      An event time series (ETS) is a sequence of events uniquely identified by the event name (``sf_eventType``) and (optionally) additional dimensions. For example, an event time series with the name ``code push`` and the dimension ``repository`` can be created to record code push events for a given repository. An example of such an ETS could be ``sf_eventType:code push`` and ``repository:ui-code-base``.


   Filter
      A filter is any dimension, property or tag that you use to narrow down the number of objects you are looking at.

      For example, you may filter the metric `CPUUtilization` by the property `aws_availability_zone:us-east-1a` to see only the time series data generated by AWS instances in the US-East-1a availability zone.


   Flappy
      A :any:`detector` is said to be "flappy" when it triggers and clears alerts too frequently. For example, if you have a detector set to trigger an alert when a value reaches 90%, and the signal you are monitoring regularly spikes and dips around this value, alerts will be triggered and cleared too often to be of value. To reduce this flappiness, you might want to specify that the value must remain at 90% for a specified amount of time before triggering an alert.


   Gauge
      A gauge is a metric type that measures the value of something over time. Examples of gauges used in monitoring include CPU utilization percentage, % free JVM heap, or the size of an internal queue in an application. Reporting frequency (i.e. how often you take a reading) is most important for gauges, as higher frequency is typically associated with higher accuracy.

      For example, measuring CPU utilization every 5 minutes means that any peaks and valleys that may have occurred between readings are missed, and it’s entirely possible that those peaks or valleys may be significant.



   Heat map
      A heat map is a chart type that shows a histogram over time. It is useful for visualizing the distribution of data for a particular metric across a population, e.g. the memory utilization across a service tier, and how it changes over time.



   High-resolution metric
   	  If your organization's usage is based on the number of hosts or metrics that SignalFx is monitoring for you, and a datapoint is specified as high resolution when it is sent to SignalFx, we will consider its native resolution (as fine as one second) as the data resolution. In other words, if you are sending in 1s data, charts and detectors can display or analyze the data at 1 |hyph| second intervals. For more information, see :ref:`data-resolution`.

   Infrastructure Navigator
       The Infrastructure Navigator provides a data-driven visualization of all your hosts, virtual machines, and AWS instances. Each square represents a host or instance and is colored according to the value of one of several infrastructure metrics. See :ref:`infra`.



   Metric
      Metrics are the primary form of data you send into SignalFx. A metric has a periodic measurement that is represented as a numerical value. The same metric can be reported from multiple sources or emitters. Typically, each unique combination of a source and a metric will result in a :any:`metric time series<Metric time series>`. Note that the term metric as used by Amazon Web Services CloudWatch_ and by Graphite_ is the same as a metric time series in SignalFx parlance.

      .. _Cloudwatch: http://aws.amazon.com/cloudwatch/
      .. _Graphite: http://graphite.readthedocs.org/en/latest/overview.html

      For example, a metric with the name `pages_served` could be a counter representing the number of pages a web server has served.


   Metric time series
      A metric time series (MTS) is defined by the unique combination of a metric and a set of dimensions (which may be empty). The most common dimension is a source, e.g. a host or instance for infrastructure metrics, or an application component or service tier for application metrics. The output of analytics pipelines are also metric time series.

      For example, the pages_served metric sent by a particular nginx server (nginx1) with a dimension `server:nginx1` would be considered a unique time series.

   Metrics Catalog
      The Metrics Catalog, accessible by clicking :guilabel:`Metrics` on the navigation bar, is used for browsing, searching and managing metrics, metric time series, properties, and tags for an organization. For more information, see :ref:`catalog-in-UI`.

   Muting rule
      A muting rule defines a period of time during which :any:`notifications<notification>` for specified :any:`alerts<alert>` will not be sent.  See :ref:`mute-notifications`.


   Notification
      A notification is an action taken when a :any:`detector` triggers an :any:`alert` and when the alert condition clears. Notifications can be sent to an email address; to one of several other systems, such as Hipchat or Slack; or to a webhook URL.


   Organization
      An organization is the highest-level security grouping within SignalFx. Data within an organization cannot be accessed by other organizations or their users. Users are invited to join an organization by an organization administrator and may see and edit any information within their organization.


   Plot
      A plot is the output of a single plot line in a :any:`chart<Chart>`. Charts are composed of one or more plots.

   .. removed "tags" from the first sentence below -- brs

   Property
      Properties are key-value pairs which can be bound to metrics, dimensions or time series. They define arbitrary text data that can be used to provide additional operational information on the objects they are associated with. Properties are different than dimensions in the sense that they do not take part in the identity of a time series; changing the value of a property does not affect the identity of that time series.

      Property values are most frequently used as dynamic filters for charts (e.g., show 90th percentile of CPU utilization for servers with a location property value of "Seattle"), or for groupings (e.g., show 90th percentile of CPU utilization for servers, grouped by location value).


   Resolution
      See :any:`Chart resolution` and :any:`Data resolution`.


   Rollup
      A rollup in colloquial terms (for metrics, that is!) typically refers to an accumulation of datapoints, with some mathematical or statistical expression applied to it, e.g. a 95th percentile calculation over a 1-week window. In a SignalFx plot, rollups determine how SignalFx prepares datapoints for use in charts or analytic computations. For more information, see :ref:`rollups`.

      For example, if you change the time range from -1m (past minute) to -1w (past week), multiple datapoints may be rolled up into one using a rollup function, such as Average, so the datapoints for the wider timeframe can be effectively displayed.

      For more information, see :ref:`Rollups`.

   Rule
      A :any:`detector` contains one or more rules that specify conditions under which the detector will trigger an :any:`alert`, the severity of the alert, and the recipients of :any:`notifications<notification>` that are sent when the condition occurs and when it clears.

      For more information, see :ref:`build-rules`.


   Signal
      In the context of a chart in SignalFx, a signal is the metric time series that you want to plot on a chart or use as an input to a detector or to additional analytics.



   Source
      A source is an entity that emits a metric, e.g. a host. SignalFx treats sources as dimensions.



   Tag
      Tags can be thought of as labels or keywords assigned to dimensions, metrics and other objects. They are not key/value pairs.

      The primary use case for tags is when there is a one-to-many relationship between the tag and the object you are assigning it to. For example, suppose you have hosts that are running multiple apps. You can create a tag for each app, then apply multiple tags to each host to specify the apps that are running on that host.


   Time Range selector
      The Time Range selector sets the visible timeframe for a single chart, or for all of the charts on a given dashboard. (In the latter case, it is referred as a global Time Range selector.) The time range selected can be relative or absolute. Relative time ranges are expressed as last minute (-1m), last two hours (-2h), between one and three days ago (-3d to -1d) and so on. Absolute time ranges are specified via a standard date/time selection widget. The timeframe that is specified affects the :any:`Chart resolution`; see :ref:`time-range-selector`.



   Time series
      A time series is a sequence of datapoints, typically collected at regular time intervals. In SignalFx, time series may be composed of either metrics (see :any:`Metric time series`) or events (see :any:`Event time series`). They can also be raw (collected and sent in) or derived (created by SignalFx). For example, you may send in 10 raw time series containing the number of API calls handled by each of 10 servers, and then create a derived time series by summing up the number of API calls across all servers using SignalFx’s analytics.


   Transformation
      A transformation is a type of analytic computation applied to data from the same metric time series over some moving window of time, in contrast to an :any:`aggregation<Aggregation>`. The output of a transformation contains the same number of time series as the input.

      For example, a one-hour moving average applied to ten individual time series will result in ten output time series.



   User
      Users are identified by their e-mail addresses and are created when joining a SignalFx organization for the first time. Users may be part of multiple organizations (via invitations) and the objects they create within SignalFx are bound to their current active organization (as opposed to directly to the user). This means that if a user creates a dashboard within one organization, the user wouldn't be able to share it with members of a separate organization.
