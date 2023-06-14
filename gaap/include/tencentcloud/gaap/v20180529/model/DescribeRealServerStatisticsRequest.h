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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEREALSERVERSTATISTICSREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEREALSERVERSTATISTICSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * DescribeRealServerStatistics请求参数结构体
                */
                class DescribeRealServerStatisticsRequest : public AbstractModel
                {
                public:
                    DescribeRealServerStatisticsRequest();
                    ~DescribeRealServerStatisticsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取源站ID
                     * @return RealServerId 源站ID
                     * 
                     */
                    std::string GetRealServerId() const;

                    /**
                     * 设置源站ID
                     * @param _realServerId 源站ID
                     * 
                     */
                    void SetRealServerId(const std::string& _realServerId);

                    /**
                     * 判断参数 RealServerId 是否已赋值
                     * @return RealServerId 是否已赋值
                     * 
                     */
                    bool RealServerIdHasBeenSet() const;

                    /**
                     * 获取监听器ID
                     * @return ListenerId 监听器ID
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置监听器ID
                     * @param _listenerId 监听器ID
                     * 
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     * 
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取L7层规则ID
                     * @return RuleId L7层规则ID
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置L7层规则ID
                     * @param _ruleId L7层规则ID
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取统计时长，单位：小时。仅支持最近1,3,6,12,24小时的统计查询
                     * @return WithinTime 统计时长，单位：小时。仅支持最近1,3,6,12,24小时的统计查询
                     * 
                     */
                    uint64_t GetWithinTime() const;

                    /**
                     * 设置统计时长，单位：小时。仅支持最近1,3,6,12,24小时的统计查询
                     * @param _withinTime 统计时长，单位：小时。仅支持最近1,3,6,12,24小时的统计查询
                     * 
                     */
                    void SetWithinTime(const uint64_t& _withinTime);

                    /**
                     * 判断参数 WithinTime 是否已赋值
                     * @return WithinTime 是否已赋值
                     * 
                     */
                    bool WithinTimeHasBeenSet() const;

                    /**
                     * 获取统计开始时间(2020-08-19 00:00:00)
                     * @return StartTime 统计开始时间(2020-08-19 00:00:00)
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置统计开始时间(2020-08-19 00:00:00)
                     * @param _startTime 统计开始时间(2020-08-19 00:00:00)
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
                     * 获取统计结束时间(2020-08-19 23:59:59)
                     * @return EndTime 统计结束时间(2020-08-19 23:59:59)
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置统计结束时间(2020-08-19 23:59:59)
                     * @param _endTime 统计结束时间(2020-08-19 23:59:59)
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
                     * 获取统计的数据粒度，单位：秒，仅支持1分钟-60和5分钟-300粒度
                     * @return Granularity 统计的数据粒度，单位：秒，仅支持1分钟-60和5分钟-300粒度
                     * 
                     */
                    uint64_t GetGranularity() const;

                    /**
                     * 设置统计的数据粒度，单位：秒，仅支持1分钟-60和5分钟-300粒度
                     * @param _granularity 统计的数据粒度，单位：秒，仅支持1分钟-60和5分钟-300粒度
                     * 
                     */
                    void SetGranularity(const uint64_t& _granularity);

                    /**
                     * 判断参数 Granularity 是否已赋值
                     * @return Granularity 是否已赋值
                     * 
                     */
                    bool GranularityHasBeenSet() const;

                private:

                    /**
                     * 源站ID
                     */
                    std::string m_realServerId;
                    bool m_realServerIdHasBeenSet;

                    /**
                     * 监听器ID
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * L7层规则ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 统计时长，单位：小时。仅支持最近1,3,6,12,24小时的统计查询
                     */
                    uint64_t m_withinTime;
                    bool m_withinTimeHasBeenSet;

                    /**
                     * 统计开始时间(2020-08-19 00:00:00)
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 统计结束时间(2020-08-19 23:59:59)
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 统计的数据粒度，单位：秒，仅支持1分钟-60和5分钟-300粒度
                     */
                    uint64_t m_granularity;
                    bool m_granularityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEREALSERVERSTATISTICSREQUEST_H_
