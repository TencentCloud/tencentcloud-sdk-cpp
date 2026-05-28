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
                     * 获取<p>域名，当操作对象为全局规则时，Domain参数应填写为&quot;global&quot;</p>
                     * @return Domain <p>域名，当操作对象为全局规则时，Domain参数应填写为&quot;global&quot;</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>域名，当操作对象为全局规则时，Domain参数应填写为&quot;global&quot;</p>
                     * @param _domain <p>域名，当操作对象为全局规则时，Domain参数应填写为&quot;global&quot;</p>
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
                     * 获取<p>计数标识</p>
                     * @return Count <p>计数标识</p>
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置<p>计数标识</p>
                     * @param _count <p>计数标识</p>
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
                     * 获取<p>动作，40表示查询白名单，42表示查询黑名单</p>
                     * @return ActionType <p>动作，40表示查询白名单，42表示查询黑名单</p>
                     * 
                     */
                    uint64_t GetActionType() const;

                    /**
                     * 设置<p>动作，40表示查询白名单，42表示查询黑名单</p>
                     * @param _actionType <p>动作，40表示查询白名单，42表示查询黑名单</p>
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
                     * 获取<p>最小有效时间的时间戳</p>
                     * @return VtsMin <p>最小有效时间的时间戳</p>
                     * @deprecated
                     */
                    uint64_t GetVtsMin() const;

                    /**
                     * 设置<p>最小有效时间的时间戳</p>
                     * @param _vtsMin <p>最小有效时间的时间戳</p>
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
                     * 获取<p>最大有效时间的时间戳</p>
                     * @return VtsMax <p>最大有效时间的时间戳</p>
                     * @deprecated
                     */
                    uint64_t GetVtsMax() const;

                    /**
                     * 设置<p>最大有效时间的时间戳</p>
                     * @param _vtsMax <p>最大有效时间的时间戳</p>
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
                     * 获取<p>最小创建时间的时间戳</p>
                     * @return CtsMin <p>最小创建时间的时间戳</p>
                     * 
                     */
                    uint64_t GetCtsMin() const;

                    /**
                     * 设置<p>最小创建时间的时间戳</p>
                     * @param _ctsMin <p>最小创建时间的时间戳</p>
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
                     * 获取<p>最大创建时间的时间戳</p>
                     * @return CtsMax <p>最大创建时间的时间戳</p>
                     * 
                     */
                    uint64_t GetCtsMax() const;

                    /**
                     * 设置<p>最大创建时间的时间戳</p>
                     * @param _ctsMax <p>最大创建时间的时间戳</p>
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
                     * 获取<p>分页偏移量，取Limit整数倍。最小值为0，最大值= Total/Limit向上取整</p>
                     * @return OffSet <p>分页偏移量，取Limit整数倍。最小值为0，最大值= Total/Limit向上取整</p>
                     * 
                     */
                    uint64_t GetOffSet() const;

                    /**
                     * 设置<p>分页偏移量，取Limit整数倍。最小值为0，最大值= Total/Limit向上取整</p>
                     * @param _offSet <p>分页偏移量，取Limit整数倍。最小值为0，最大值= Total/Limit向上取整</p>
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
                     * 获取<p>每页返回的数量，默认为20</p>
                     * @return Limit <p>每页返回的数量，默认为20</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>每页返回的数量，默认为20</p>
                     * @param _limit <p>每页返回的数量，默认为20</p>
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
                     * 获取<p>用于按数据来源过滤黑白名单记录，非必填（默认为空字符串，表示不过滤/查询全部）。 &quot;&quot; (空字符串)    ，不按来源过滤，返回所有记录（默认值） custom（自定义），用户在控制台手动添加的黑白名单规则 cc（CC 防护    ），由 CC 防护模块自动添加的 IP 黑白名单 bot（Bot 防护），由 Bot 防护模块自动添加的 IP 黑白名单 batch（批量域名防护），批量域名维度添加的黑白名单规则 batch-group（防护对象组），防护对象组维度添加的黑白名单规则</p>
                     * @return Source <p>用于按数据来源过滤黑白名单记录，非必填（默认为空字符串，表示不过滤/查询全部）。 &quot;&quot; (空字符串)    ，不按来源过滤，返回所有记录（默认值） custom（自定义），用户在控制台手动添加的黑白名单规则 cc（CC 防护    ），由 CC 防护模块自动添加的 IP 黑白名单 bot（Bot 防护），由 Bot 防护模块自动添加的 IP 黑白名单 batch（批量域名防护），批量域名维度添加的黑白名单规则 batch-group（防护对象组），防护对象组维度添加的黑白名单规则</p>
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置<p>用于按数据来源过滤黑白名单记录，非必填（默认为空字符串，表示不过滤/查询全部）。 &quot;&quot; (空字符串)    ，不按来源过滤，返回所有记录（默认值） custom（自定义），用户在控制台手动添加的黑白名单规则 cc（CC 防护    ），由 CC 防护模块自动添加的 IP 黑白名单 bot（Bot 防护），由 Bot 防护模块自动添加的 IP 黑白名单 batch（批量域名防护），批量域名维度添加的黑白名单规则 batch-group（防护对象组），防护对象组维度添加的黑白名单规则</p>
                     * @param _source <p>用于按数据来源过滤黑白名单记录，非必填（默认为空字符串，表示不过滤/查询全部）。 &quot;&quot; (空字符串)    ，不按来源过滤，返回所有记录（默认值） custom（自定义），用户在控制台手动添加的黑白名单规则 cc（CC 防护    ），由 CC 防护模块自动添加的 IP 黑白名单 bot（Bot 防护），由 Bot 防护模块自动添加的 IP 黑白名单 batch（批量域名防护），批量域名维度添加的黑白名单规则 batch-group（防护对象组），防护对象组维度添加的黑白名单规则</p>
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
                     * 获取<p>排序参数</p>
                     * @return Sort <p>排序参数</p>
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置<p>排序参数</p>
                     * @param _sort <p>排序参数</p>
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
                     * 获取<p>IP</p>
                     * @return Ip <p>IP</p>
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置<p>IP</p>
                     * @param _ip <p>IP</p>
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
                     * 获取<p>生效状态，1表示生效中，2表示过期，0表示全部</p>
                     * @return ValidStatus <p>生效状态，1表示生效中，2表示过期，0表示全部</p>
                     * 
                     */
                    int64_t GetValidStatus() const;

                    /**
                     * 设置<p>生效状态，1表示生效中，2表示过期，0表示全部</p>
                     * @param _validStatus <p>生效状态，1表示生效中，2表示过期，0表示全部</p>
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
                     * 获取<p>最小有效时间的时间戳</p>
                     * @return ValidTimeStampMin <p>最小有效时间的时间戳</p>
                     * 
                     */
                    std::string GetValidTimeStampMin() const;

                    /**
                     * 设置<p>最小有效时间的时间戳</p>
                     * @param _validTimeStampMin <p>最小有效时间的时间戳</p>
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
                     * 获取<p>最大有效时间的时间戳</p>
                     * @return ValidTimeStampMax <p>最大有效时间的时间戳</p>
                     * 
                     */
                    std::string GetValidTimeStampMax() const;

                    /**
                     * 设置<p>最大有效时间的时间戳</p>
                     * @param _validTimeStampMax <p>最大有效时间的时间戳</p>
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
                     * 获取<p>规则ID</p>
                     * @return RuleId <p>规则ID</p>
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置<p>规则ID</p>
                     * @param _ruleId <p>规则ID</p>
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
                     * 获取<p>0表示全部，1表示永久生效，2表示定时生效，3表示周粒度生效，4表示月粒度生效</p>
                     * @return TimerType <p>0表示全部，1表示永久生效，2表示定时生效，3表示周粒度生效，4表示月粒度生效</p>
                     * 
                     */
                    int64_t GetTimerType() const;

                    /**
                     * 设置<p>0表示全部，1表示永久生效，2表示定时生效，3表示周粒度生效，4表示月粒度生效</p>
                     * @param _timerType <p>0表示全部，1表示永久生效，2表示定时生效，3表示周粒度生效，4表示月粒度生效</p>
                     * 
                     */
                    void SetTimerType(const int64_t& _timerType);

                    /**
                     * 判断参数 TimerType 是否已赋值
                     * @return TimerType 是否已赋值
                     * 
                     */
                    bool TimerTypeHasBeenSet() const;

                    /**
                     * 获取<p>查询的ip列表</p>
                     * @return IpList <p>查询的ip列表</p>
                     * 
                     */
                    std::vector<std::string> GetIpList() const;

                    /**
                     * 设置<p>查询的ip列表</p>
                     * @param _ipList <p>查询的ip列表</p>
                     * 
                     */
                    void SetIpList(const std::vector<std::string>& _ipList);

                    /**
                     * 判断参数 IpList 是否已赋值
                     * @return IpList 是否已赋值
                     * 
                     */
                    bool IpListHasBeenSet() const;

                private:

                    /**
                     * <p>域名，当操作对象为全局规则时，Domain参数应填写为&quot;global&quot;</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>计数标识</p>
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * <p>动作，40表示查询白名单，42表示查询黑名单</p>
                     */
                    uint64_t m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * <p>最小有效时间的时间戳</p>
                     */
                    uint64_t m_vtsMin;
                    bool m_vtsMinHasBeenSet;

                    /**
                     * <p>最大有效时间的时间戳</p>
                     */
                    uint64_t m_vtsMax;
                    bool m_vtsMaxHasBeenSet;

                    /**
                     * <p>最小创建时间的时间戳</p>
                     */
                    uint64_t m_ctsMin;
                    bool m_ctsMinHasBeenSet;

                    /**
                     * <p>最大创建时间的时间戳</p>
                     */
                    uint64_t m_ctsMax;
                    bool m_ctsMaxHasBeenSet;

                    /**
                     * <p>分页偏移量，取Limit整数倍。最小值为0，最大值= Total/Limit向上取整</p>
                     */
                    uint64_t m_offSet;
                    bool m_offSetHasBeenSet;

                    /**
                     * <p>每页返回的数量，默认为20</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>用于按数据来源过滤黑白名单记录，非必填（默认为空字符串，表示不过滤/查询全部）。 &quot;&quot; (空字符串)    ，不按来源过滤，返回所有记录（默认值） custom（自定义），用户在控制台手动添加的黑白名单规则 cc（CC 防护    ），由 CC 防护模块自动添加的 IP 黑白名单 bot（Bot 防护），由 Bot 防护模块自动添加的 IP 黑白名单 batch（批量域名防护），批量域名维度添加的黑白名单规则 batch-group（防护对象组），防护对象组维度添加的黑白名单规则</p>
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>排序参数</p>
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * <p>IP</p>
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * <p>生效状态，1表示生效中，2表示过期，0表示全部</p>
                     */
                    int64_t m_validStatus;
                    bool m_validStatusHasBeenSet;

                    /**
                     * <p>最小有效时间的时间戳</p>
                     */
                    std::string m_validTimeStampMin;
                    bool m_validTimeStampMinHasBeenSet;

                    /**
                     * <p>最大有效时间的时间戳</p>
                     */
                    std::string m_validTimeStampMax;
                    bool m_validTimeStampMaxHasBeenSet;

                    /**
                     * <p>规则ID</p>
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * <p>0表示全部，1表示永久生效，2表示定时生效，3表示周粒度生效，4表示月粒度生效</p>
                     */
                    int64_t m_timerType;
                    bool m_timerTypeHasBeenSet;

                    /**
                     * <p>查询的ip列表</p>
                     */
                    std::vector<std::string> m_ipList;
                    bool m_ipListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEIPACCESSCONTROLREQUEST_H_
