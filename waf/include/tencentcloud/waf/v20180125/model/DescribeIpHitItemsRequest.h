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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEIPHITITEMSREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEIPHITITEMSREQUEST_H_

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
                * DescribeIpHitItems请求参数结构体
                */
                class DescribeIpHitItemsRequest : public AbstractModel
                {
                public:
                    DescribeIpHitItemsRequest();
                    ~DescribeIpHitItemsRequest() = default;
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
                    int64_t GetCount() const;

                    /**
                     * 设置计数标识
                     * @param _count 计数标识
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取类别，ip封禁传值auto_deny
                     * @return Category 类别，ip封禁传值auto_deny
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置类别，ip封禁传值auto_deny
                     * @param _category 类别，ip封禁传值auto_deny
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取有效时间最小时间戳
                     * @return VtsMin 有效时间最小时间戳
                     * @deprecated
                     */
                    uint64_t GetVtsMin() const;

                    /**
                     * 设置有效时间最小时间戳
                     * @param _vtsMin 有效时间最小时间戳
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
                     * 获取有效时间最大时间戳
                     * @return VtsMax 有效时间最大时间戳
                     * @deprecated
                     */
                    uint64_t GetVtsMax() const;

                    /**
                     * 设置有效时间最大时间戳
                     * @param _vtsMax 有效时间最大时间戳
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
                     * 获取创建时间最小时间戳
                     * @return CtsMin 创建时间最小时间戳
                     * 
                     */
                    uint64_t GetCtsMin() const;

                    /**
                     * 设置创建时间最小时间戳
                     * @param _ctsMin 创建时间最小时间戳
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
                     * 获取创建时间最大时间戳
                     * @return CtsMax 创建时间最大时间戳
                     * 
                     */
                    uint64_t GetCtsMax() const;

                    /**
                     * 设置创建时间最大时间戳
                     * @param _ctsMax 创建时间最大时间戳
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
                     * 获取偏移参数
                     * @return Skip 偏移参数
                     * 
                     */
                    uint64_t GetSkip() const;

                    /**
                     * 设置偏移参数
                     * @param _skip 偏移参数
                     * 
                     */
                    void SetSkip(const uint64_t& _skip);

                    /**
                     * 判断参数 Skip 是否已赋值
                     * @return Skip 是否已赋值
                     * 
                     */
                    bool SkipHasBeenSet() const;

                    /**
                     * 获取限制数目，category不等于threat_intelligence时，该值需要必传
                     * @return Limit 限制数目，category不等于threat_intelligence时，该值需要必传
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置限制数目，category不等于threat_intelligence时，该值需要必传
                     * @param _limit 限制数目，category不等于threat_intelligence时，该值需要必传
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
                     * 获取策略名称
                     * @return Name 策略名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置策略名称
                     * @param _name 策略名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

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
                     * 获取IP,category传threat_intelligence的时候，该值必传
                     * @return Ip IP,category传threat_intelligence的时候，该值必传
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置IP,category传threat_intelligence的时候，该值必传
                     * @param _ip IP,category传threat_intelligence的时候，该值必传
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
                     * 获取有效时间最小时间戳
                     * @return ValidTimeStampMin 有效时间最小时间戳
                     * 
                     */
                    uint64_t GetValidTimeStampMin() const;

                    /**
                     * 设置有效时间最小时间戳
                     * @param _validTimeStampMin 有效时间最小时间戳
                     * 
                     */
                    void SetValidTimeStampMin(const uint64_t& _validTimeStampMin);

                    /**
                     * 判断参数 ValidTimeStampMin 是否已赋值
                     * @return ValidTimeStampMin 是否已赋值
                     * 
                     */
                    bool ValidTimeStampMinHasBeenSet() const;

                    /**
                     * 获取有效时间最大时间戳
                     * @return ValidTimeStampMax 有效时间最大时间戳
                     * 
                     */
                    uint64_t GetValidTimeStampMax() const;

                    /**
                     * 设置有效时间最大时间戳
                     * @param _validTimeStampMax 有效时间最大时间戳
                     * 
                     */
                    void SetValidTimeStampMax(const uint64_t& _validTimeStampMax);

                    /**
                     * 判断参数 ValidTimeStampMax 是否已赋值
                     * @return ValidTimeStampMax 是否已赋值
                     * 
                     */
                    bool ValidTimeStampMaxHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 计数标识
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 类别，ip封禁传值auto_deny
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

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
                     * 偏移参数
                     */
                    uint64_t m_skip;
                    bool m_skipHasBeenSet;

                    /**
                     * 限制数目，category不等于threat_intelligence时，该值需要必传
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 策略名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 排序参数
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * IP,category传threat_intelligence的时候，该值必传
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 有效时间最小时间戳
                     */
                    uint64_t m_validTimeStampMin;
                    bool m_validTimeStampMinHasBeenSet;

                    /**
                     * 有效时间最大时间戳
                     */
                    uint64_t m_validTimeStampMax;
                    bool m_validTimeStampMaxHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEIPHITITEMSREQUEST_H_
