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
                     */
                    std::string GetRealServerId() const;

                    /**
                     * 设置源站ID
                     * @param RealServerId 源站ID
                     */
                    void SetRealServerId(const std::string& _realServerId);

                    /**
                     * 判断参数 RealServerId 是否已赋值
                     * @return RealServerId 是否已赋值
                     */
                    bool RealServerIdHasBeenSet() const;

                    /**
                     * 获取监听器ID
                     * @return ListenerId 监听器ID
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置监听器ID
                     * @param ListenerId 监听器ID
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取统计时长，单位：小时。仅支持最近1,3,6,12,24小时的统计查询
                     * @return WithinTime 统计时长，单位：小时。仅支持最近1,3,6,12,24小时的统计查询
                     */
                    uint64_t GetWithinTime() const;

                    /**
                     * 设置统计时长，单位：小时。仅支持最近1,3,6,12,24小时的统计查询
                     * @param WithinTime 统计时长，单位：小时。仅支持最近1,3,6,12,24小时的统计查询
                     */
                    void SetWithinTime(const uint64_t& _withinTime);

                    /**
                     * 判断参数 WithinTime 是否已赋值
                     * @return WithinTime 是否已赋值
                     */
                    bool WithinTimeHasBeenSet() const;

                    /**
                     * 获取规则ID
                     * @return RuleId 规则ID
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置规则ID
                     * @param RuleId 规则ID
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     */
                    bool RuleIdHasBeenSet() const;

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
                     * 统计时长，单位：小时。仅支持最近1,3,6,12,24小时的统计查询
                     */
                    uint64_t m_withinTime;
                    bool m_withinTimeHasBeenSet;

                    /**
                     * 规则ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEREALSERVERSTATISTICSREQUEST_H_
