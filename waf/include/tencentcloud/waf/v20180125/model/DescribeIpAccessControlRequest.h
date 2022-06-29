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
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param Domain 域名
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取计数标识
                     * @return Count 计数标识
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置计数标识
                     * @param Count 计数标识
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取动作
                     * @return ActionType 动作
                     */
                    uint64_t GetActionType() const;

                    /**
                     * 设置动作
                     * @param ActionType 动作
                     */
                    void SetActionType(const uint64_t& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     */
                    bool ActionTypeHasBeenSet() const;

                    /**
                     * 获取有效时间最小时间戳
                     * @return VtsMin 有效时间最小时间戳
                     */
                    uint64_t GetVtsMin() const;

                    /**
                     * 设置有效时间最小时间戳
                     * @param VtsMin 有效时间最小时间戳
                     */
                    void SetVtsMin(const uint64_t& _vtsMin);

                    /**
                     * 判断参数 VtsMin 是否已赋值
                     * @return VtsMin 是否已赋值
                     */
                    bool VtsMinHasBeenSet() const;

                    /**
                     * 获取有效时间最大时间戳
                     * @return VtsMax 有效时间最大时间戳
                     */
                    uint64_t GetVtsMax() const;

                    /**
                     * 设置有效时间最大时间戳
                     * @param VtsMax 有效时间最大时间戳
                     */
                    void SetVtsMax(const uint64_t& _vtsMax);

                    /**
                     * 判断参数 VtsMax 是否已赋值
                     * @return VtsMax 是否已赋值
                     */
                    bool VtsMaxHasBeenSet() const;

                    /**
                     * 获取创建时间最小时间戳
                     * @return CtsMin 创建时间最小时间戳
                     */
                    uint64_t GetCtsMin() const;

                    /**
                     * 设置创建时间最小时间戳
                     * @param CtsMin 创建时间最小时间戳
                     */
                    void SetCtsMin(const uint64_t& _ctsMin);

                    /**
                     * 判断参数 CtsMin 是否已赋值
                     * @return CtsMin 是否已赋值
                     */
                    bool CtsMinHasBeenSet() const;

                    /**
                     * 获取创建时间最大时间戳
                     * @return CtsMax 创建时间最大时间戳
                     */
                    uint64_t GetCtsMax() const;

                    /**
                     * 设置创建时间最大时间戳
                     * @param CtsMax 创建时间最大时间戳
                     */
                    void SetCtsMax(const uint64_t& _ctsMax);

                    /**
                     * 判断参数 CtsMax 是否已赋值
                     * @return CtsMax 是否已赋值
                     */
                    bool CtsMaxHasBeenSet() const;

                    /**
                     * 获取偏移
                     * @return OffSet 偏移
                     */
                    uint64_t GetOffSet() const;

                    /**
                     * 设置偏移
                     * @param OffSet 偏移
                     */
                    void SetOffSet(const uint64_t& _offSet);

                    /**
                     * 判断参数 OffSet 是否已赋值
                     * @return OffSet 是否已赋值
                     */
                    bool OffSetHasBeenSet() const;

                    /**
                     * 获取限制
                     * @return Limit 限制
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置限制
                     * @param Limit 限制
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取来源
                     * @return Source 来源
                     */
                    std::string GetSource() const;

                    /**
                     * 设置来源
                     * @param Source 来源
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取排序参数
                     * @return Sort 排序参数
                     */
                    std::string GetSort() const;

                    /**
                     * 设置排序参数
                     * @param Sort 排序参数
                     */
                    void SetSort(const std::string& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取ip
                     * @return Ip ip
                     */
                    std::string GetIp() const;

                    /**
                     * 设置ip
                     * @param Ip ip
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     */
                    bool IpHasBeenSet() const;

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
                     * 动作
                     */
                    uint64_t m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * 有效时间最小时间戳
                     */
                    uint64_t m_vtsMin;
                    bool m_vtsMinHasBeenSet;

                    /**
                     * 有效时间最大时间戳
                     */
                    uint64_t m_vtsMax;
                    bool m_vtsMaxHasBeenSet;

                    /**
                     * 创建时间最小时间戳
                     */
                    uint64_t m_ctsMin;
                    bool m_ctsMinHasBeenSet;

                    /**
                     * 创建时间最大时间戳
                     */
                    uint64_t m_ctsMax;
                    bool m_ctsMaxHasBeenSet;

                    /**
                     * 偏移
                     */
                    uint64_t m_offSet;
                    bool m_offSetHasBeenSet;

                    /**
                     * 限制
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
                     * ip
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEIPACCESSCONTROLREQUEST_H_
