/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_METRICYAMLSPEC_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_METRICYAMLSPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 指标采集yaml格式配置
                */
                class MetricYamlSpec : public AbstractModel
                {
                public:
                    MetricYamlSpec();
                    ~MetricYamlSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取yaml监控类型。
支持：
- PodMonitor
- ServiceMonitor
- ScrapeConfig
- ScrapeConfig-prometheus

`PodMonitor `,`ServiceMonitor `,`ScrapeConfig ` 属于prometheus-operator
`ScrapeConfig-prometheus` 属于prometheus
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type yaml监控类型。
支持：
- PodMonitor
- ServiceMonitor
- ScrapeConfig
- ScrapeConfig-prometheus

`PodMonitor `,`ServiceMonitor `,`ScrapeConfig ` 属于prometheus-operator
`ScrapeConfig-prometheus` 属于prometheus
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置yaml监控类型。
支持：
- PodMonitor
- ServiceMonitor
- ScrapeConfig
- ScrapeConfig-prometheus

`PodMonitor `,`ServiceMonitor `,`ScrapeConfig ` 属于prometheus-operator
`ScrapeConfig-prometheus` 属于prometheus
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type yaml监控类型。
支持：
- PodMonitor
- ServiceMonitor
- ScrapeConfig
- ScrapeConfig-prometheus

`PodMonitor `,`ServiceMonitor `,`ScrapeConfig ` 属于prometheus-operator
`ScrapeConfig-prometheus` 属于prometheus
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取配置yaml格式。
例如：Type: ServiceMonitor


```
apiVersion: monitoring.coreos.com/v1
kind: ServiceMonitor
metadata:
  name: test
  namespace: test
  labels:
    k8s-app1: test
    k8s-app2: test
spec:
  endpoints:
    - interval: 15s
      port: 8080-8080-tcp
      path: /metrics
      relabelings:
        - action: replace
          sourceLabels:
            - __meta_kubernetes_pod_label_app
          targetLabel: application
  namespaceSelector:
    matchNames:
      - test
  selector:
    matchLabels:
      app: test
```
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Spec 配置yaml格式。
例如：Type: ServiceMonitor


```
apiVersion: monitoring.coreos.com/v1
kind: ServiceMonitor
metadata:
  name: test
  namespace: test
  labels:
    k8s-app1: test
    k8s-app2: test
spec:
  endpoints:
    - interval: 15s
      port: 8080-8080-tcp
      path: /metrics
      relabelings:
        - action: replace
          sourceLabels:
            - __meta_kubernetes_pod_label_app
          targetLabel: application
  namespaceSelector:
    matchNames:
      - test
  selector:
    matchLabels:
      app: test
```
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSpec() const;

                    /**
                     * 设置配置yaml格式。
例如：Type: ServiceMonitor


```
apiVersion: monitoring.coreos.com/v1
kind: ServiceMonitor
metadata:
  name: test
  namespace: test
  labels:
    k8s-app1: test
    k8s-app2: test
spec:
  endpoints:
    - interval: 15s
      port: 8080-8080-tcp
      path: /metrics
      relabelings:
        - action: replace
          sourceLabels:
            - __meta_kubernetes_pod_label_app
          targetLabel: application
  namespaceSelector:
    matchNames:
      - test
  selector:
    matchLabels:
      app: test
```
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _spec 配置yaml格式。
例如：Type: ServiceMonitor


```
apiVersion: monitoring.coreos.com/v1
kind: ServiceMonitor
metadata:
  name: test
  namespace: test
  labels:
    k8s-app1: test
    k8s-app2: test
spec:
  endpoints:
    - interval: 15s
      port: 8080-8080-tcp
      path: /metrics
      relabelings:
        - action: replace
          sourceLabels:
            - __meta_kubernetes_pod_label_app
          targetLabel: application
  namespaceSelector:
    matchNames:
      - test
  selector:
    matchLabels:
      app: test
```
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSpec(const std::string& _spec);

                    /**
                     * 判断参数 Spec 是否已赋值
                     * @return Spec 是否已赋值
                     * 
                     */
                    bool SpecHasBeenSet() const;

                private:

                    /**
                     * yaml监控类型。
支持：
- PodMonitor
- ServiceMonitor
- ScrapeConfig
- ScrapeConfig-prometheus

`PodMonitor `,`ServiceMonitor `,`ScrapeConfig ` 属于prometheus-operator
`ScrapeConfig-prometheus` 属于prometheus
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 配置yaml格式。
例如：Type: ServiceMonitor


```
apiVersion: monitoring.coreos.com/v1
kind: ServiceMonitor
metadata:
  name: test
  namespace: test
  labels:
    k8s-app1: test
    k8s-app2: test
spec:
  endpoints:
    - interval: 15s
      port: 8080-8080-tcp
      path: /metrics
      relabelings:
        - action: replace
          sourceLabels:
            - __meta_kubernetes_pod_label_app
          targetLabel: application
  namespaceSelector:
    matchNames:
      - test
  selector:
    matchLabels:
      app: test
```
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_spec;
                    bool m_specHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_METRICYAMLSPEC_H_
