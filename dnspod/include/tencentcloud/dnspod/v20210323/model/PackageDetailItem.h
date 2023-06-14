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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_PACKAGEDETAILITEM_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_PACKAGEDETAILITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * 套餐配置明细
                */
                class PackageDetailItem : public AbstractModel
                {
                public:
                    PackageDetailItem();
                    ~PackageDetailItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取套餐原价
                     * @return RealPrice 套餐原价
                     * 
                     */
                    uint64_t GetRealPrice() const;

                    /**
                     * 设置套餐原价
                     * @param _realPrice 套餐原价
                     * 
                     */
                    void SetRealPrice(const uint64_t& _realPrice);

                    /**
                     * 判断参数 RealPrice 是否已赋值
                     * @return RealPrice 是否已赋值
                     * 
                     */
                    bool RealPriceHasBeenSet() const;

                    /**
                     * 获取可更换域名次数
                     * @return ChangedTimes 可更换域名次数
                     * 
                     */
                    uint64_t GetChangedTimes() const;

                    /**
                     * 设置可更换域名次数
                     * @param _changedTimes 可更换域名次数
                     * 
                     */
                    void SetChangedTimes(const uint64_t& _changedTimes);

                    /**
                     * 判断参数 ChangedTimes 是否已赋值
                     * @return ChangedTimes 是否已赋值
                     * 
                     */
                    bool ChangedTimesHasBeenSet() const;

                    /**
                     * 获取允许设置的最小 TTL 值
                     * @return MinTtl 允许设置的最小 TTL 值
                     * 
                     */
                    uint64_t GetMinTtl() const;

                    /**
                     * 设置允许设置的最小 TTL 值
                     * @param _minTtl 允许设置的最小 TTL 值
                     * 
                     */
                    void SetMinTtl(const uint64_t& _minTtl);

                    /**
                     * 判断参数 MinTtl 是否已赋值
                     * @return MinTtl 是否已赋值
                     * 
                     */
                    bool MinTtlHasBeenSet() const;

                    /**
                     * 获取负载均衡数量
                     * @return RecordRoll 负载均衡数量
                     * 
                     */
                    uint64_t GetRecordRoll() const;

                    /**
                     * 设置负载均衡数量
                     * @param _recordRoll 负载均衡数量
                     * 
                     */
                    void SetRecordRoll(const uint64_t& _recordRoll);

                    /**
                     * 判断参数 RecordRoll 是否已赋值
                     * @return RecordRoll 是否已赋值
                     * 
                     */
                    bool RecordRollHasBeenSet() const;

                    /**
                     * 获取子域名级数
                     * @return SubDomainLevel 子域名级数
                     * 
                     */
                    uint64_t GetSubDomainLevel() const;

                    /**
                     * 设置子域名级数
                     * @param _subDomainLevel 子域名级数
                     * 
                     */
                    void SetSubDomainLevel(const uint64_t& _subDomainLevel);

                    /**
                     * 判断参数 SubDomainLevel 是否已赋值
                     * @return SubDomainLevel 是否已赋值
                     * 
                     */
                    bool SubDomainLevelHasBeenSet() const;

                    /**
                     * 获取泛解析级数
                     * @return MaxWildcard 泛解析级数
                     * 
                     */
                    uint64_t GetMaxWildcard() const;

                    /**
                     * 设置泛解析级数
                     * @param _maxWildcard 泛解析级数
                     * 
                     */
                    void SetMaxWildcard(const uint64_t& _maxWildcard);

                    /**
                     * 判断参数 MaxWildcard 是否已赋值
                     * @return MaxWildcard 是否已赋值
                     * 
                     */
                    bool MaxWildcardHasBeenSet() const;

                    /**
                     * 获取DNS 服务集群个数
                     * @return DnsServerRegion DNS 服务集群个数
                     * 
                     */
                    std::string GetDnsServerRegion() const;

                    /**
                     * 设置DNS 服务集群个数
                     * @param _dnsServerRegion DNS 服务集群个数
                     * 
                     */
                    void SetDnsServerRegion(const std::string& _dnsServerRegion);

                    /**
                     * 判断参数 DnsServerRegion 是否已赋值
                     * @return DnsServerRegion 是否已赋值
                     * 
                     */
                    bool DnsServerRegionHasBeenSet() const;

                    /**
                     * 获取套餐名称
                     * @return DomainGradeCn 套餐名称
                     * 
                     */
                    std::string GetDomainGradeCn() const;

                    /**
                     * 设置套餐名称
                     * @param _domainGradeCn 套餐名称
                     * 
                     */
                    void SetDomainGradeCn(const std::string& _domainGradeCn);

                    /**
                     * 判断参数 DomainGradeCn 是否已赋值
                     * @return DomainGradeCn 是否已赋值
                     * 
                     */
                    bool DomainGradeCnHasBeenSet() const;

                    /**
                     * 获取套餐代号
                     * @return GradeLevel 套餐代号
                     * 
                     */
                    uint64_t GetGradeLevel() const;

                    /**
                     * 设置套餐代号
                     * @param _gradeLevel 套餐代号
                     * 
                     */
                    void SetGradeLevel(const uint64_t& _gradeLevel);

                    /**
                     * 判断参数 GradeLevel 是否已赋值
                     * @return GradeLevel 是否已赋值
                     * 
                     */
                    bool GradeLevelHasBeenSet() const;

                    /**
                     * 获取套餐对应的 NS
                     * @return Ns 套餐对应的 NS
                     * 
                     */
                    std::vector<std::string> GetNs() const;

                    /**
                     * 设置套餐对应的 NS
                     * @param _ns 套餐对应的 NS
                     * 
                     */
                    void SetNs(const std::vector<std::string>& _ns);

                    /**
                     * 判断参数 Ns 是否已赋值
                     * @return Ns 是否已赋值
                     * 
                     */
                    bool NsHasBeenSet() const;

                    /**
                     * 获取套餐代码
                     * @return DomainGrade 套餐代码
                     * 
                     */
                    std::string GetDomainGrade() const;

                    /**
                     * 设置套餐代码
                     * @param _domainGrade 套餐代码
                     * 
                     */
                    void SetDomainGrade(const std::string& _domainGrade);

                    /**
                     * 判断参数 DomainGrade 是否已赋值
                     * @return DomainGrade 是否已赋值
                     * 
                     */
                    bool DomainGradeHasBeenSet() const;

                private:

                    /**
                     * 套餐原价
                     */
                    uint64_t m_realPrice;
                    bool m_realPriceHasBeenSet;

                    /**
                     * 可更换域名次数
                     */
                    uint64_t m_changedTimes;
                    bool m_changedTimesHasBeenSet;

                    /**
                     * 允许设置的最小 TTL 值
                     */
                    uint64_t m_minTtl;
                    bool m_minTtlHasBeenSet;

                    /**
                     * 负载均衡数量
                     */
                    uint64_t m_recordRoll;
                    bool m_recordRollHasBeenSet;

                    /**
                     * 子域名级数
                     */
                    uint64_t m_subDomainLevel;
                    bool m_subDomainLevelHasBeenSet;

                    /**
                     * 泛解析级数
                     */
                    uint64_t m_maxWildcard;
                    bool m_maxWildcardHasBeenSet;

                    /**
                     * DNS 服务集群个数
                     */
                    std::string m_dnsServerRegion;
                    bool m_dnsServerRegionHasBeenSet;

                    /**
                     * 套餐名称
                     */
                    std::string m_domainGradeCn;
                    bool m_domainGradeCnHasBeenSet;

                    /**
                     * 套餐代号
                     */
                    uint64_t m_gradeLevel;
                    bool m_gradeLevelHasBeenSet;

                    /**
                     * 套餐对应的 NS
                     */
                    std::vector<std::string> m_ns;
                    bool m_nsHasBeenSet;

                    /**
                     * 套餐代码
                     */
                    std::string m_domainGrade;
                    bool m_domainGradeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_PACKAGEDETAILITEM_H_
