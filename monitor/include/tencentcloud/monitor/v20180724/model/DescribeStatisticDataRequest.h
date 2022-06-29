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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBESTATISTICDATAREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBESTATISTICDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/MidQueryCondition.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeStatisticData请求参数结构体
                */
                class DescribeStatisticDataRequest : public AbstractModel
                {
                public:
                    DescribeStatisticDataRequest();
                    ~DescribeStatisticDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取所属模块，固定值，为monitor
                     * @return Module 所属模块，固定值，为monitor
                     */
                    std::string GetModule() const;

                    /**
                     * 设置所属模块，固定值，为monitor
                     * @param Module 所属模块，固定值，为monitor
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取命名空间，目前只支持QCE/TKE
                     * @return Namespace 命名空间，目前只支持QCE/TKE
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间，目前只支持QCE/TKE
                     * @param Namespace 命名空间，目前只支持QCE/TKE
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取指标名列表
                     * @return MetricNames 指标名列表
                     */
                    std::vector<std::string> GetMetricNames() const;

                    /**
                     * 设置指标名列表
                     * @param MetricNames 指标名列表
                     */
                    void SetMetricNames(const std::vector<std::string>& _metricNames);

                    /**
                     * 判断参数 MetricNames 是否已赋值
                     * @return MetricNames 是否已赋值
                     */
                    bool MetricNamesHasBeenSet() const;

                    /**
                     * 获取维度条件，操作符支持=、in
                     * @return Conditions 维度条件，操作符支持=、in
                     */
                    std::vector<MidQueryCondition> GetConditions() const;

                    /**
                     * 设置维度条件，操作符支持=、in
                     * @param Conditions 维度条件，操作符支持=、in
                     */
                    void SetConditions(const std::vector<MidQueryCondition>& _conditions);

                    /**
                     * 判断参数 Conditions 是否已赋值
                     * @return Conditions 是否已赋值
                     */
                    bool ConditionsHasBeenSet() const;

                    /**
                     * 获取统计粒度。默认取值为300，单位为s；可选的值为60、300、3600、86400
受存储时长限制，统计粒度与统计的时间范围有关：
60s：EndTime-StartTime<12小时，且StartTime距当前时间不能超过15天；
300s：EndTime-StartTime<3天，且StartTime距当前时间不能超过31天；
3600s：EndTime-StartTime<30天，且StartTime距当前时间不能超过93天；
86400s：EndTime-StartTime<186天，且StartTime距当前时间不能超过186天。
                     * @return Period 统计粒度。默认取值为300，单位为s；可选的值为60、300、3600、86400
受存储时长限制，统计粒度与统计的时间范围有关：
60s：EndTime-StartTime<12小时，且StartTime距当前时间不能超过15天；
300s：EndTime-StartTime<3天，且StartTime距当前时间不能超过31天；
3600s：EndTime-StartTime<30天，且StartTime距当前时间不能超过93天；
86400s：EndTime-StartTime<186天，且StartTime距当前时间不能超过186天。
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置统计粒度。默认取值为300，单位为s；可选的值为60、300、3600、86400
受存储时长限制，统计粒度与统计的时间范围有关：
60s：EndTime-StartTime<12小时，且StartTime距当前时间不能超过15天；
300s：EndTime-StartTime<3天，且StartTime距当前时间不能超过31天；
3600s：EndTime-StartTime<30天，且StartTime距当前时间不能超过93天；
86400s：EndTime-StartTime<186天，且StartTime距当前时间不能超过186天。
                     * @param Period 统计粒度。默认取值为300，单位为s；可选的值为60、300、3600、86400
受存储时长限制，统计粒度与统计的时间范围有关：
60s：EndTime-StartTime<12小时，且StartTime距当前时间不能超过15天；
300s：EndTime-StartTime<3天，且StartTime距当前时间不能超过31天；
3600s：EndTime-StartTime<30天，且StartTime距当前时间不能超过93天；
86400s：EndTime-StartTime<186天，且StartTime距当前时间不能超过186天。
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取起始时间，默认为当前时间，如2020-12-08T19:51:23+08:00
                     * @return StartTime 起始时间，默认为当前时间，如2020-12-08T19:51:23+08:00
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置起始时间，默认为当前时间，如2020-12-08T19:51:23+08:00
                     * @param StartTime 起始时间，默认为当前时间，如2020-12-08T19:51:23+08:00
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间，默认为当前时间，如2020-12-08T19:51:23+08:00
                     * @return EndTime 结束时间，默认为当前时间，如2020-12-08T19:51:23+08:00
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间，默认为当前时间，如2020-12-08T19:51:23+08:00
                     * @param EndTime 结束时间，默认为当前时间，如2020-12-08T19:51:23+08:00
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取按指定维度groupBy
                     * @return GroupBys 按指定维度groupBy
                     */
                    std::vector<std::string> GetGroupBys() const;

                    /**
                     * 设置按指定维度groupBy
                     * @param GroupBys 按指定维度groupBy
                     */
                    void SetGroupBys(const std::vector<std::string>& _groupBys);

                    /**
                     * 判断参数 GroupBys 是否已赋值
                     * @return GroupBys 是否已赋值
                     */
                    bool GroupBysHasBeenSet() const;

                private:

                    /**
                     * 所属模块，固定值，为monitor
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 命名空间，目前只支持QCE/TKE
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 指标名列表
                     */
                    std::vector<std::string> m_metricNames;
                    bool m_metricNamesHasBeenSet;

                    /**
                     * 维度条件，操作符支持=、in
                     */
                    std::vector<MidQueryCondition> m_conditions;
                    bool m_conditionsHasBeenSet;

                    /**
                     * 统计粒度。默认取值为300，单位为s；可选的值为60、300、3600、86400
受存储时长限制，统计粒度与统计的时间范围有关：
60s：EndTime-StartTime<12小时，且StartTime距当前时间不能超过15天；
300s：EndTime-StartTime<3天，且StartTime距当前时间不能超过31天；
3600s：EndTime-StartTime<30天，且StartTime距当前时间不能超过93天；
86400s：EndTime-StartTime<186天，且StartTime距当前时间不能超过186天。
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 起始时间，默认为当前时间，如2020-12-08T19:51:23+08:00
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间，默认为当前时间，如2020-12-08T19:51:23+08:00
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 按指定维度groupBy
                     */
                    std::vector<std::string> m_groupBys;
                    bool m_groupBysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBESTATISTICDATAREQUEST_H_
