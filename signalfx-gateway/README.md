# ![](https://github.com/signalfx/integrations/blob/master/signalfx-gateway/img/integration_smartgateway.png) SignalFx Smart Gateway

### DESCRIPTION

The Smart Gateway observes every transaction across distributed services, generates metrics for each unique span and trace path, and prioritizes interesting outlier traces to forward to SignalFx as part of our NoSample™ Tail-Based Distributed Tracing feature. The Smart Gateway can be deployed as a scalable, self-coordinating cluster for high-availability and volume applications.

### INSTALLATION

To deploy the SignalFx Smart Gateway, start by reviewing the sizing information below to determine the recommended hardware for running the Smart Gateway. You then need to install and configure the gateway and, if you have determined it is necessary, install and configure a clustered gateway. Finally, you will start the gateway and point your applications to the correct locations for reporting their trace spans.

Detailed instructions can be found <a target="_blank" href="https://docs.signalfx.com/en/latest/apm/apm-deployment/smart-gateway.html">here</a>.
