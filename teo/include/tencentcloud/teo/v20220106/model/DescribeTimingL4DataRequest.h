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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBETIMINGL4DATAREQUEST_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBETIMINGL4DATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DescribeTimingL4Data请求参数结构体
                */
                class DescribeTimingL4DataRequest : public AbstractModel
                {
                public:
                    DescribeTimingL4DataRequest();
                    ~DescribeTimingL4DataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取RFC3339格式，客户端时间
                     * @return StartTime RFC3339格式，客户端时间
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置RFC3339格式，客户端时间
                     * @param StartTime RFC3339格式，客户端时间
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取RFC3339格式，客户端时间
                     * @return EndTime RFC3339格式，客户端时间
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置RFC3339格式，客户端时间
                     * @param EndTime RFC3339格式，客户端时间
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取指标列表
                     * @return MetricNames 指标列表
                     */
                    std::vector<std::string> GetMetricNames() const;

                    /**
                     * 设置指标列表
                     * @param MetricNames 指标列表
                     */
                    void SetMetricNames(const std::vector<std::string>& _metricNames);

                    /**
                     * 判断参数 MetricNames 是否已赋值
                     * @return MetricNames 是否已赋值
                     */
                    bool MetricNamesHasBeenSet() const;

                    /**
                     * 获取ZoneId列表，仅在zone/instance维度下查询时该参数有效
                     * @return ZoneIds ZoneId列表，仅在zone/instance维度下查询时该参数有效
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置ZoneId列表，仅在zone/instance维度下查询时该参数有效
                     * @param ZoneIds ZoneId列表，仅在zone/instance维度下查询时该参数有效
                     */
                    void SetZoneIds(const std::vector<std::string>& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     */
                    bool ZoneIdsHasBeenSet() const;

                    /**
                     * 获取InstanceId列表，仅在Instance维度下查询时该参数有效
                     * @return InstanceIds InstanceId列表，仅在Instance维度下查询时该参数有效
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置InstanceId列表，仅在Instance维度下查询时该参数有效
                     * @param InstanceIds InstanceId列表，仅在Instance维度下查询时该参数有效
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取协议类型， 该字段当前无效
                     * @return Protocol 协议类型， 该字段当前无效
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议类型， 该字段当前无效
                     * @param Protocol 协议类型， 该字段当前无效
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取时间间隔，选填{min, 5min, hour, day}
                     * @return Interval 时间间隔，选填{min, 5min, hour, day}
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置时间间隔，选填{min, 5min, hour, day}
                     * @param Interval 时间间隔，选填{min, 5min, hour, day}
                     */
                    void SetInterval(const std::string& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取规则ID，仅在instance维度有效
                     * @return RuleId 规则ID，仅在instance维度有效
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置规则ID，仅在instance维度有效
                     * @param RuleId 规则ID，仅在instance维度有效
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     */
                    bool RuleIdHasBeenSet() const;

                private:

                    /**
                     * RFC3339格式，客户端时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * RFC3339格式，客户端时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 指标列表
                     */
                    std::vector<std::string> m_metricNames;
                    bool m_metricNamesHasBeenSet;

                    /**
                     * ZoneId列表，仅在zone/instance维度下查询时该参数有效
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * InstanceId列表，仅在Instance维度下查询时该参数有效
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 协议类型， 该字段当前无效
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 时间间隔，选填{min, 5min, hour, day}
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * 规则ID，仅在instance维度有效
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBETIMINGL4DATAREQUEST_H_
