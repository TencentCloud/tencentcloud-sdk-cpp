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
                     * 获取命名空间，各个云产品的详细命名空间说明请参阅各个产品[监控指标](https://cloud.tencent.com/document/product/248/6140)文档
                     * @return Namespace 命名空间，各个云产品的详细命名空间说明请参阅各个产品[监控指标](https://cloud.tencent.com/document/product/248/6140)文档
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间，各个云产品的详细命名空间说明请参阅各个产品[监控指标](https://cloud.tencent.com/document/product/248/6140)文档
                     * @param Namespace 命名空间，各个云产品的详细命名空间说明请参阅各个产品[监控指标](https://cloud.tencent.com/document/product/248/6140)文档
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取指标名称，各个云产品的详细指标说明请参阅各个产品[监控指标](https://cloud.tencent.com/document/product/248/6140)文档
                     * @return MetricName 指标名称，各个云产品的详细指标说明请参阅各个产品[监控指标](https://cloud.tencent.com/document/product/248/6140)文档
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置指标名称，各个云产品的详细指标说明请参阅各个产品[监控指标](https://cloud.tencent.com/document/product/248/6140)文档
                     * @param MetricName 指标名称，各个云产品的详细指标说明请参阅各个产品[监控指标](https://cloud.tencent.com/document/product/248/6140)文档
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取实例对象的维度组合
                     * @return Instances 实例对象的维度组合
                     */
                    std::vector<Instance> GetInstances() const;

                    /**
                     * 设置实例对象的维度组合
                     * @param Instances 实例对象的维度组合
                     */
                    void SetInstances(const std::vector<Instance>& _instances);

                    /**
                     * 判断参数 Instances 是否已赋值
                     * @return Instances 是否已赋值
                     */
                    bool InstancesHasBeenSet() const;

                    /**
                     * 获取监控统计周期。默认为取值为300，单位为s
                     * @return Period 监控统计周期。默认为取值为300，单位为s
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置监控统计周期。默认为取值为300，单位为s
                     * @param Period 监控统计周期。默认为取值为300，单位为s
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取起始时间，如2018-09-22T19:51:23+08:00
                     * @return StartTime 起始时间，如2018-09-22T19:51:23+08:00
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置起始时间，如2018-09-22T19:51:23+08:00
                     * @param StartTime 起始时间，如2018-09-22T19:51:23+08:00
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间，默认为当前时间。 EndTime不能小于StartTime
                     * @return EndTime 结束时间，默认为当前时间。 EndTime不能小于StartTime
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间，默认为当前时间。 EndTime不能小于StartTime
                     * @param EndTime 结束时间，默认为当前时间。 EndTime不能小于StartTime
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 命名空间，各个云产品的详细命名空间说明请参阅各个产品[监控指标](https://cloud.tencent.com/document/product/248/6140)文档
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 指标名称，各个云产品的详细指标说明请参阅各个产品[监控指标](https://cloud.tencent.com/document/product/248/6140)文档
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * 实例对象的维度组合
                     */
                    std::vector<Instance> m_instances;
                    bool m_instancesHasBeenSet;

                    /**
                     * 监控统计周期。默认为取值为300，单位为s
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 起始时间，如2018-09-22T19:51:23+08:00
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间，默认为当前时间。 EndTime不能小于StartTime
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_GETMONITORDATAREQUEST_H_
