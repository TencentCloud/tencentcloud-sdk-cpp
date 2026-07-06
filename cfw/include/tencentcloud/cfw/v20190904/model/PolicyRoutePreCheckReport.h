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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_POLICYROUTEPRECHECKREPORT_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_POLICYROUTEPRECHECKREPORT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * 策略路由预编排配额报告
                */
                class PolicyRoutePreCheckReport : public AbstractModel
                {
                public:
                    PolicyRoutePreCheckReport();
                    ~PolicyRoutePreCheckReport() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取本次编排生成的下一跳数量
                     * @return NextHopCount 本次编排生成的下一跳数量
                     * 
                     */
                    int64_t GetNextHopCount() const;

                    /**
                     * 设置本次编排生成的下一跳数量
                     * @param _nextHopCount 本次编排生成的下一跳数量
                     * 
                     */
                    void SetNextHopCount(const int64_t& _nextHopCount);

                    /**
                     * 判断参数 NextHopCount 是否已赋值
                     * @return NextHopCount 是否已赋值
                     * 
                     */
                    bool NextHopCountHasBeenSet() const;

                    /**
                     * 获取下一跳上限
                     * @return NextHopLimit 下一跳上限
                     * 
                     */
                    int64_t GetNextHopLimit() const;

                    /**
                     * 设置下一跳上限
                     * @param _nextHopLimit 下一跳上限
                     * 
                     */
                    void SetNextHopLimit(const int64_t& _nextHopLimit);

                    /**
                     * 判断参数 NextHopLimit 是否已赋值
                     * @return NextHopLimit 是否已赋值
                     * 
                     */
                    bool NextHopLimitHasBeenSet() const;

                    /**
                     * 获取本次编排生成的匹配规则数
                     * @return MatchRuleCount 本次编排生成的匹配规则数
                     * 
                     */
                    int64_t GetMatchRuleCount() const;

                    /**
                     * 设置本次编排生成的匹配规则数
                     * @param _matchRuleCount 本次编排生成的匹配规则数
                     * 
                     */
                    void SetMatchRuleCount(const int64_t& _matchRuleCount);

                    /**
                     * 判断参数 MatchRuleCount 是否已赋值
                     * @return MatchRuleCount 是否已赋值
                     * 
                     */
                    bool MatchRuleCountHasBeenSet() const;

                    /**
                     * 获取匹配规则上限
                     * @return MatchRuleLimit 匹配规则上限
                     * 
                     */
                    int64_t GetMatchRuleLimit() const;

                    /**
                     * 设置匹配规则上限
                     * @param _matchRuleLimit 匹配规则上限
                     * 
                     */
                    void SetMatchRuleLimit(const int64_t& _matchRuleLimit);

                    /**
                     * 判断参数 MatchRuleLimit 是否已赋值
                     * @return MatchRuleLimit 是否已赋值
                     * 
                     */
                    bool MatchRuleLimitHasBeenSet() const;

                    /**
                     * 获取云上已有匹配规则数（其他防火墙类型占用）
                     * @return CloudExistingRuleCount 云上已有匹配规则数（其他防火墙类型占用）
                     * 
                     */
                    int64_t GetCloudExistingRuleCount() const;

                    /**
                     * 设置云上已有匹配规则数（其他防火墙类型占用）
                     * @param _cloudExistingRuleCount 云上已有匹配规则数（其他防火墙类型占用）
                     * 
                     */
                    void SetCloudExistingRuleCount(const int64_t& _cloudExistingRuleCount);

                    /**
                     * 判断参数 CloudExistingRuleCount 是否已赋值
                     * @return CloudExistingRuleCount 是否已赋值
                     * 
                     */
                    bool CloudExistingRuleCountHasBeenSet() const;

                    /**
                     * 获取云上已有下一跳数（其他防火墙类型占用）
                     * @return CloudExistingNextHopCount 云上已有下一跳数（其他防火墙类型占用）
                     * 
                     */
                    int64_t GetCloudExistingNextHopCount() const;

                    /**
                     * 设置云上已有下一跳数（其他防火墙类型占用）
                     * @param _cloudExistingNextHopCount 云上已有下一跳数（其他防火墙类型占用）
                     * 
                     */
                    void SetCloudExistingNextHopCount(const int64_t& _cloudExistingNextHopCount);

                    /**
                     * 判断参数 CloudExistingNextHopCount 是否已赋值
                     * @return CloudExistingNextHopCount 是否已赋值
                     * 
                     */
                    bool CloudExistingNextHopCountHasBeenSet() const;

                    /**
                     * 获取可用匹配规则配额 = MatchRuleLimit - CloudExistingRuleCount - MatchRuleCount
                     * @return AvailableRuleQuota 可用匹配规则配额 = MatchRuleLimit - CloudExistingRuleCount - MatchRuleCount
                     * 
                     */
                    int64_t GetAvailableRuleQuota() const;

                    /**
                     * 设置可用匹配规则配额 = MatchRuleLimit - CloudExistingRuleCount - MatchRuleCount
                     * @param _availableRuleQuota 可用匹配规则配额 = MatchRuleLimit - CloudExistingRuleCount - MatchRuleCount
                     * 
                     */
                    void SetAvailableRuleQuota(const int64_t& _availableRuleQuota);

                    /**
                     * 判断参数 AvailableRuleQuota 是否已赋值
                     * @return AvailableRuleQuota 是否已赋值
                     * 
                     */
                    bool AvailableRuleQuotaHasBeenSet() const;

                    /**
                     * 获取可用下一跳配额 = NextHopLimit - CloudExistingNextHopCount - NextHopCount
                     * @return AvailableNextHopQuota 可用下一跳配额 = NextHopLimit - CloudExistingNextHopCount - NextHopCount
                     * 
                     */
                    int64_t GetAvailableNextHopQuota() const;

                    /**
                     * 设置可用下一跳配额 = NextHopLimit - CloudExistingNextHopCount - NextHopCount
                     * @param _availableNextHopQuota 可用下一跳配额 = NextHopLimit - CloudExistingNextHopCount - NextHopCount
                     * 
                     */
                    void SetAvailableNextHopQuota(const int64_t& _availableNextHopQuota);

                    /**
                     * 判断参数 AvailableNextHopQuota 是否已赋值
                     * @return AvailableNextHopQuota 是否已赋值
                     * 
                     */
                    bool AvailableNextHopQuotaHasBeenSet() const;

                private:

                    /**
                     * 本次编排生成的下一跳数量
                     */
                    int64_t m_nextHopCount;
                    bool m_nextHopCountHasBeenSet;

                    /**
                     * 下一跳上限
                     */
                    int64_t m_nextHopLimit;
                    bool m_nextHopLimitHasBeenSet;

                    /**
                     * 本次编排生成的匹配规则数
                     */
                    int64_t m_matchRuleCount;
                    bool m_matchRuleCountHasBeenSet;

                    /**
                     * 匹配规则上限
                     */
                    int64_t m_matchRuleLimit;
                    bool m_matchRuleLimitHasBeenSet;

                    /**
                     * 云上已有匹配规则数（其他防火墙类型占用）
                     */
                    int64_t m_cloudExistingRuleCount;
                    bool m_cloudExistingRuleCountHasBeenSet;

                    /**
                     * 云上已有下一跳数（其他防火墙类型占用）
                     */
                    int64_t m_cloudExistingNextHopCount;
                    bool m_cloudExistingNextHopCountHasBeenSet;

                    /**
                     * 可用匹配规则配额 = MatchRuleLimit - CloudExistingRuleCount - MatchRuleCount
                     */
                    int64_t m_availableRuleQuota;
                    bool m_availableRuleQuotaHasBeenSet;

                    /**
                     * 可用下一跳配额 = NextHopLimit - CloudExistingNextHopCount - NextHopCount
                     */
                    int64_t m_availableNextHopQuota;
                    bool m_availableNextHopQuotaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_POLICYROUTEPRECHECKREPORT_H_
