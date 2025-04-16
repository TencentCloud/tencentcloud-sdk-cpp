/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_GETMONITORDATAREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_GETMONITORDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/Instance.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * GetMonitorData请求参数结构体
                */
                class GetMonitorDataRequest : public AbstractModel
                {
                public:
                    GetMonitorDataRequest();
                    ~GetMonitorDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取命名空间，如QCE/CVM。各个云产品的详细命名空间说明请参阅各个产品[监控指标](https://cloud.tencent.com/document/product/248/6140)文档
                     * @return Namespace 命名空间，如QCE/CVM。各个云产品的详细命名空间说明请参阅各个产品[监控指标](https://cloud.tencent.com/document/product/248/6140)文档
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间，如QCE/CVM。各个云产品的详细命名空间说明请参阅各个产品[监控指标](https://cloud.tencent.com/document/product/248/6140)文档
                     * @param _namespace 命名空间，如QCE/CVM。各个云产品的详细命名空间说明请参阅各个产品[监控指标](https://cloud.tencent.com/document/product/248/6140)文档
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取指标名称，如CPUUsage，仅支持单指标拉取。各个云产品的详细指标说明请参阅各个产品[监控指标](https://cloud.tencent.com/document/product/248/6140)文档，对应的指标英文名即为MetricName
                     * @return MetricName 指标名称，如CPUUsage，仅支持单指标拉取。各个云产品的详细指标说明请参阅各个产品[监控指标](https://cloud.tencent.com/document/product/248/6140)文档，对应的指标英文名即为MetricName
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置指标名称，如CPUUsage，仅支持单指标拉取。各个云产品的详细指标说明请参阅各个产品[监控指标](https://cloud.tencent.com/document/product/248/6140)文档，对应的指标英文名即为MetricName
                     * @param _metricName 指标名称，如CPUUsage，仅支持单指标拉取。各个云产品的详细指标说明请参阅各个产品[监控指标](https://cloud.tencent.com/document/product/248/6140)文档，对应的指标英文名即为MetricName
                     * 
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     * 
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取实例对象的维度组合，格式为key-value键值对形式的集合。不同类型的实例字段完全不同，如CVM为[{"Name":"InstanceId","Value":"ins-j0hk02zo"}]，Ckafka为[{"Name":"instanceId","Value":"ckafka-l49k54dd"}]，COS为[{"Name":"appid","Value":"1258344699"},{"Name":"bucket","Value":"rig-1258344699"}]。各个云产品的维度请参阅各个产品[监控指标](https://cloud.tencent.com/document/product/248/6140)文档，对应的维度列即为维度组合的key，value为key对应的值。单请求最多支持批量拉取10个实例的监控数据。
                     * @return Instances 实例对象的维度组合，格式为key-value键值对形式的集合。不同类型的实例字段完全不同，如CVM为[{"Name":"InstanceId","Value":"ins-j0hk02zo"}]，Ckafka为[{"Name":"instanceId","Value":"ckafka-l49k54dd"}]，COS为[{"Name":"appid","Value":"1258344699"},{"Name":"bucket","Value":"rig-1258344699"}]。各个云产品的维度请参阅各个产品[监控指标](https://cloud.tencent.com/document/product/248/6140)文档，对应的维度列即为维度组合的key，value为key对应的值。单请求最多支持批量拉取10个实例的监控数据。
                     * 
                     */
                    std::vector<Instance> GetInstances() const;

                    /**
                     * 设置实例对象的维度组合，格式为key-value键值对形式的集合。不同类型的实例字段完全不同，如CVM为[{"Name":"InstanceId","Value":"ins-j0hk02zo"}]，Ckafka为[{"Name":"instanceId","Value":"ckafka-l49k54dd"}]，COS为[{"Name":"appid","Value":"1258344699"},{"Name":"bucket","Value":"rig-1258344699"}]。各个云产品的维度请参阅各个产品[监控指标](https://cloud.tencent.com/document/product/248/6140)文档，对应的维度列即为维度组合的key，value为key对应的值。单请求最多支持批量拉取10个实例的监控数据。
                     * @param _instances 实例对象的维度组合，格式为key-value键值对形式的集合。不同类型的实例字段完全不同，如CVM为[{"Name":"InstanceId","Value":"ins-j0hk02zo"}]，Ckafka为[{"Name":"instanceId","Value":"ckafka-l49k54dd"}]，COS为[{"Name":"appid","Value":"1258344699"},{"Name":"bucket","Value":"rig-1258344699"}]。各个云产品的维度请参阅各个产品[监控指标](https://cloud.tencent.com/document/product/248/6140)文档，对应的维度列即为维度组合的key，value为key对应的值。单请求最多支持批量拉取10个实例的监控数据。
                     * 
                     */
                    void SetInstances(const std::vector<Instance>& _instances);

                    /**
                     * 判断参数 Instances 是否已赋值
                     * @return Instances 是否已赋值
                     * 
                     */
                    bool InstancesHasBeenSet() const;

                    /**
                     * 获取监控统计周期，如60。默认为取值为300，单位为s。每个指标支持的统计周期不一定相同，各个云产品支持的统计周期请参阅各个产品[监控指标](https://cloud.tencent.com/document/product/248/6140)文档，对应的统计周期列即为支持的统计周期。单请求的数据点数限制为1440个。
                     * @return Period 监控统计周期，如60。默认为取值为300，单位为s。每个指标支持的统计周期不一定相同，各个云产品支持的统计周期请参阅各个产品[监控指标](https://cloud.tencent.com/document/product/248/6140)文档，对应的统计周期列即为支持的统计周期。单请求的数据点数限制为1440个。
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置监控统计周期，如60。默认为取值为300，单位为s。每个指标支持的统计周期不一定相同，各个云产品支持的统计周期请参阅各个产品[监控指标](https://cloud.tencent.com/document/product/248/6140)文档，对应的统计周期列即为支持的统计周期。单请求的数据点数限制为1440个。
                     * @param _period 监控统计周期，如60。默认为取值为300，单位为s。每个指标支持的统计周期不一定相同，各个云产品支持的统计周期请参阅各个产品[监控指标](https://cloud.tencent.com/document/product/248/6140)文档，对应的统计周期列即为支持的统计周期。单请求的数据点数限制为1440个。
                     * 
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取起始时间，如2018-09-22T19:51:23+08:00
                     * @return StartTime 起始时间，如2018-09-22T19:51:23+08:00
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置起始时间，如2018-09-22T19:51:23+08:00
                     * @param _startTime 起始时间，如2018-09-22T19:51:23+08:00
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间，如2018-09-22T20:51:23+08:00，默认为当前时间。 EndTime不能小于StartTime
                     * @return EndTime 结束时间，如2018-09-22T20:51:23+08:00，默认为当前时间。 EndTime不能小于StartTime
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间，如2018-09-22T20:51:23+08:00，默认为当前时间。 EndTime不能小于StartTime
                     * @param _endTime 结束时间，如2018-09-22T20:51:23+08:00，默认为当前时间。 EndTime不能小于StartTime
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取返回多种统计方式数据。avg, max, min (1,2,4)可以自由组合。注意: 仅支持对API配置文档中展示的统计方式返回对应的统计数据。如所需的统计方式不满足您的查询需求，请提工单反馈。
                     * @return SpecifyStatistics 返回多种统计方式数据。avg, max, min (1,2,4)可以自由组合。注意: 仅支持对API配置文档中展示的统计方式返回对应的统计数据。如所需的统计方式不满足您的查询需求，请提工单反馈。
                     * 
                     */
                    int64_t GetSpecifyStatistics() const;

                    /**
                     * 设置返回多种统计方式数据。avg, max, min (1,2,4)可以自由组合。注意: 仅支持对API配置文档中展示的统计方式返回对应的统计数据。如所需的统计方式不满足您的查询需求，请提工单反馈。
                     * @param _specifyStatistics 返回多种统计方式数据。avg, max, min (1,2,4)可以自由组合。注意: 仅支持对API配置文档中展示的统计方式返回对应的统计数据。如所需的统计方式不满足您的查询需求，请提工单反馈。
                     * 
                     */
                    void SetSpecifyStatistics(const int64_t& _specifyStatistics);

                    /**
                     * 判断参数 SpecifyStatistics 是否已赋值
                     * @return SpecifyStatistics 是否已赋值
                     * 
                     */
                    bool SpecifyStatisticsHasBeenSet() const;

                private:

                    /**
                     * 命名空间，如QCE/CVM。各个云产品的详细命名空间说明请参阅各个产品[监控指标](https://cloud.tencent.com/document/product/248/6140)文档
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 指标名称，如CPUUsage，仅支持单指标拉取。各个云产品的详细指标说明请参阅各个产品[监控指标](https://cloud.tencent.com/document/product/248/6140)文档，对应的指标英文名即为MetricName
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * 实例对象的维度组合，格式为key-value键值对形式的集合。不同类型的实例字段完全不同，如CVM为[{"Name":"InstanceId","Value":"ins-j0hk02zo"}]，Ckafka为[{"Name":"instanceId","Value":"ckafka-l49k54dd"}]，COS为[{"Name":"appid","Value":"1258344699"},{"Name":"bucket","Value":"rig-1258344699"}]。各个云产品的维度请参阅各个产品[监控指标](https://cloud.tencent.com/document/product/248/6140)文档，对应的维度列即为维度组合的key，value为key对应的值。单请求最多支持批量拉取10个实例的监控数据。
                     */
                    std::vector<Instance> m_instances;
                    bool m_instancesHasBeenSet;

                    /**
                     * 监控统计周期，如60。默认为取值为300，单位为s。每个指标支持的统计周期不一定相同，各个云产品支持的统计周期请参阅各个产品[监控指标](https://cloud.tencent.com/document/product/248/6140)文档，对应的统计周期列即为支持的统计周期。单请求的数据点数限制为1440个。
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 起始时间，如2018-09-22T19:51:23+08:00
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间，如2018-09-22T20:51:23+08:00，默认为当前时间。 EndTime不能小于StartTime
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 返回多种统计方式数据。avg, max, min (1,2,4)可以自由组合。注意: 仅支持对API配置文档中展示的统计方式返回对应的统计数据。如所需的统计方式不满足您的查询需求，请提工单反馈。
                     */
                    int64_t m_specifyStatistics;
                    bool m_specifyStatisticsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_GETMONITORDATAREQUEST_H_
