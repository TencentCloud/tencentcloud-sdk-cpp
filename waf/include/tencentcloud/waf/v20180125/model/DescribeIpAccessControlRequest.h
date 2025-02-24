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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEIPACCESSCONTROLREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEIPACCESSCONTROLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeIpAccessControl请求参数结构体
                */
                class DescribeIpAccessControlRequest : public AbstractModel
                {
                public:
                    DescribeIpAccessControlRequest();
                    ~DescribeIpAccessControlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param _domain 域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取计数标识
                     * @return Count 计数标识
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置计数标识
                     * @param _count 计数标识
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取动作，40表示查询白名单，42表示查询黑名单
                     * @return ActionType 动作，40表示查询白名单，42表示查询黑名单
                     * 
                     */
                    uint64_t GetActionType() const;

                    /**
                     * 设置动作，40表示查询白名单，42表示查询黑名单
                     * @param _actionType 动作，40表示查询白名单，42表示查询黑名单
                     * 
                     */
                    void SetActionType(const uint64_t& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

                    /**
                     * 获取最小有效时间的时间戳
                     * @return VtsMin 最小有效时间的时间戳
                     * @deprecated
                     */
                    uint64_t GetVtsMin() const;

                    /**
                     * 设置最小有效时间的时间戳
                     * @param _vtsMin 最小有效时间的时间戳
                     * @deprecated
                     */
                    void SetVtsMin(const uint64_t& _vtsMin);

                    /**
                     * 判断参数 VtsMin 是否已赋值
                     * @return VtsMin 是否已赋值
                     * @deprecated
                     */
                    bool VtsMinHasBeenSet() const;

                    /**
                     * 获取最大有效时间的时间戳
                     * @return VtsMax 最大有效时间的时间戳
                     * @deprecated
                     */
                    uint64_t GetVtsMax() const;

                    /**
                     * 设置最大有效时间的时间戳
                     * @param _vtsMax 最大有效时间的时间戳
                     * @deprecated
                     */
                    void SetVtsMax(const uint64_t& _vtsMax);

                    /**
                     * 判断参数 VtsMax 是否已赋值
                     * @return VtsMax 是否已赋值
                     * @deprecated
                     */
                    bool VtsMaxHasBeenSet() const;

                    /**
                     * 获取最小创建时间的时间戳
                     * @return CtsMin 最小创建时间的时间戳
                     * 
                     */
                    uint64_t GetCtsMin() const;

                    /**
                     * 设置最小创建时间的时间戳
                     * @param _ctsMin 最小创建时间的时间戳
                     * 
                     */
                    void SetCtsMin(const uint64_t& _ctsMin);

                    /**
                     * 判断参数 CtsMin 是否已赋值
                     * @return CtsMin 是否已赋值
                     * 
                     */
                    bool CtsMinHasBeenSet() const;

                    /**
                     * 获取最大创建时间的时间戳
                     * @return CtsMax 最大创建时间的时间戳
                     * 
                     */
                    uint64_t GetCtsMax() const;

                    /**
                     * 设置最大创建时间的时间戳
                     * @param _ctsMax 最大创建时间的时间戳
                     * 
                     */
                    void SetCtsMax(const uint64_t& _ctsMax);

                    /**
                     * 判断参数 CtsMax 是否已赋值
                     * @return CtsMax 是否已赋值
                     * 
                     */
                    bool CtsMaxHasBeenSet() const;

                    /**
                     * 获取分页偏移量，取Limit整数倍。最小值为0，最大值= Total/Limit向上取整
                     * @return OffSet 分页偏移量，取Limit整数倍。最小值为0，最大值= Total/Limit向上取整
                     * 
                     */
                    uint64_t GetOffSet() const;

                    /**
                     * 设置分页偏移量，取Limit整数倍。最小值为0，最大值= Total/Limit向上取整
                     * @param _offSet 分页偏移量，取Limit整数倍。最小值为0，最大值= Total/Limit向上取整
                     * 
                     */
                    void SetOffSet(const uint64_t& _offSet);

                    /**
                     * 判断参数 OffSet 是否已赋值
                     * @return OffSet 是否已赋值
                     * 
                     */
                    bool OffSetHasBeenSet() const;

                    /**
                     * 获取每页返回的数量，默认为20
                     * @return Limit 每页返回的数量，默认为20
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每页返回的数量，默认为20
                     * @param _limit 每页返回的数量，默认为20
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取来源
                     * @return Source 来源
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置来源
                     * @param _source 来源
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取排序参数
                     * @return Sort 排序参数
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置排序参数
                     * @param _sort 排序参数
                     * 
                     */
                    void SetSort(const std::string& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取IP
                     * @return Ip IP
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置IP
                     * @param _ip IP
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取生效状态，1表示生效中，2表示过期，0表示全部
                     * @return ValidStatus 生效状态，1表示生效中，2表示过期，0表示全部
                     * 
                     */
                    int64_t GetValidStatus() const;

                    /**
                     * 设置生效状态，1表示生效中，2表示过期，0表示全部
                     * @param _validStatus 生效状态，1表示生效中，2表示过期，0表示全部
                     * 
                     */
                    void SetValidStatus(const int64_t& _validStatus);

                    /**
                     * 判断参数 ValidStatus 是否已赋值
                     * @return ValidStatus 是否已赋值
                     * 
                     */
                    bool ValidStatusHasBeenSet() const;

                    /**
                     * 获取最小有效时间的时间戳
                     * @return ValidTimeStampMin 最小有效时间的时间戳
                     * 
                     */
                    std::string GetValidTimeStampMin() const;

                    /**
                     * 设置最小有效时间的时间戳
                     * @param _validTimeStampMin 最小有效时间的时间戳
                     * 
                     */
                    void SetValidTimeStampMin(const std::string& _validTimeStampMin);

                    /**
                     * 判断参数 ValidTimeStampMin 是否已赋值
                     * @return ValidTimeStampMin 是否已赋值
                     * 
                     */
                    bool ValidTimeStampMinHasBeenSet() const;

                    /**
                     * 获取最大有效时间的时间戳
                     * @return ValidTimeStampMax 最大有效时间的时间戳
                     * 
                     */
                    std::string GetValidTimeStampMax() const;

                    /**
                     * 设置最大有效时间的时间戳
                     * @param _validTimeStampMax 最大有效时间的时间戳
                     * 
                     */
                    void SetValidTimeStampMax(const std::string& _validTimeStampMax);

                    /**
                     * 判断参数 ValidTimeStampMax 是否已赋值
                     * @return ValidTimeStampMax 是否已赋值
                     * 
                     */
                    bool ValidTimeStampMaxHasBeenSet() const;

                    /**
                     * 获取规则ID
                     * @return RuleId 规则ID
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置规则ID
                     * @param _ruleId 规则ID
                     * 
                     */
                    void SetRuleId(const uint64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取0表示全部，1表示永久生效，2表示定时生效，3表示周粒度生效，4表示月粒度生效
                     * @return TimerType 0表示全部，1表示永久生效，2表示定时生效，3表示周粒度生效，4表示月粒度生效
                     * 
                     */
                    int64_t GetTimerType() const;

                    /**
                     * 设置0表示全部，1表示永久生效，2表示定时生效，3表示周粒度生效，4表示月粒度生效
                     * @param _timerType 0表示全部，1表示永久生效，2表示定时生效，3表示周粒度生效，4表示月粒度生效
                     * 
                     */
                    void SetTimerType(const int64_t& _timerType);

                    /**
                     * 判断参数 TimerType 是否已赋值
                     * @return TimerType 是否已赋值
                     * 
                     */
                    bool TimerTypeHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 计数标识
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 动作，40表示查询白名单，42表示查询黑名单
                     */
                    uint64_t m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * 最小有效时间的时间戳
                     */
                    uint64_t m_vtsMin;
                    bool m_vtsMinHasBeenSet;

                    /**
                     * 最大有效时间的时间戳
                     */
                    uint64_t m_vtsMax;
                    bool m_vtsMaxHasBeenSet;

                    /**
                     * 最小创建时间的时间戳
                     */
                    uint64_t m_ctsMin;
                    bool m_ctsMinHasBeenSet;

                    /**
                     * 最大创建时间的时间戳
                     */
                    uint64_t m_ctsMax;
                    bool m_ctsMaxHasBeenSet;

                    /**
                     * 分页偏移量，取Limit整数倍。最小值为0，最大值= Total/Limit向上取整
                     */
                    uint64_t m_offSet;
                    bool m_offSetHasBeenSet;

                    /**
                     * 每页返回的数量，默认为20
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 来源
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 排序参数
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * IP
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 生效状态，1表示生效中，2表示过期，0表示全部
                     */
                    int64_t m_validStatus;
                    bool m_validStatusHasBeenSet;

                    /**
                     * 最小有效时间的时间戳
                     */
                    std::string m_validTimeStampMin;
                    bool m_validTimeStampMinHasBeenSet;

                    /**
                     * 最大有效时间的时间戳
                     */
                    std::string m_validTimeStampMax;
                    bool m_validTimeStampMaxHasBeenSet;

                    /**
                     * 规则ID
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 0表示全部，1表示永久生效，2表示定时生效，3表示周粒度生效，4表示月粒度生效
                     */
                    int64_t m_timerType;
                    bool m_timerTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEIPACCESSCONTROLREQUEST_H_
