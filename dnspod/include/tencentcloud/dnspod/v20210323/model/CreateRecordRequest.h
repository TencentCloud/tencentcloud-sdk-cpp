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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_CREATERECORDREQUEST_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_CREATERECORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateRecord请求参数结构体
                */
                class CreateRecordRequest : public AbstractModel
                {
                public:
                    CreateRecordRequest();
                    ~CreateRecordRequest() = default;
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
                     * 获取记录类型，通过 API 记录类型获得，大写英文，比如：A 。
                     * @return RecordType 记录类型，通过 API 记录类型获得，大写英文，比如：A 。
                     */
                    std::string GetRecordType() const;

                    /**
                     * 设置记录类型，通过 API 记录类型获得，大写英文，比如：A 。
                     * @param RecordType 记录类型，通过 API 记录类型获得，大写英文，比如：A 。
                     */
                    void SetRecordType(const std::string& _recordType);

                    /**
                     * 判断参数 RecordType 是否已赋值
                     * @return RecordType 是否已赋值
                     */
                    bool RecordTypeHasBeenSet() const;

                    /**
                     * 获取记录线路，通过 API 记录线路获得，中文，比如：默认。
                     * @return RecordLine 记录线路，通过 API 记录线路获得，中文，比如：默认。
                     */
                    std::string GetRecordLine() const;

                    /**
                     * 设置记录线路，通过 API 记录线路获得，中文，比如：默认。
                     * @param RecordLine 记录线路，通过 API 记录线路获得，中文，比如：默认。
                     */
                    void SetRecordLine(const std::string& _recordLine);

                    /**
                     * 判断参数 RecordLine 是否已赋值
                     * @return RecordLine 是否已赋值
                     */
                    bool RecordLineHasBeenSet() const;

                    /**
                     * 获取记录值，如 IP : 200.200.200.200， CNAME : cname.dnspod.com.， MX : mail.dnspod.com.。
                     * @return Value 记录值，如 IP : 200.200.200.200， CNAME : cname.dnspod.com.， MX : mail.dnspod.com.。
                     */
                    std::string GetValue() const;

                    /**
                     * 设置记录值，如 IP : 200.200.200.200， CNAME : cname.dnspod.com.， MX : mail.dnspod.com.。
                     * @param Value 记录值，如 IP : 200.200.200.200， CNAME : cname.dnspod.com.， MX : mail.dnspod.com.。
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取域名 ID 。参数 DomainId 优先级比参数 Domain 高，如果传递参数 DomainId 将忽略参数 Domain 。
                     * @return DomainId 域名 ID 。参数 DomainId 优先级比参数 Domain 高，如果传递参数 DomainId 将忽略参数 Domain 。
                     */
                    uint64_t GetDomainId() const;

                    /**
                     * 设置域名 ID 。参数 DomainId 优先级比参数 Domain 高，如果传递参数 DomainId 将忽略参数 Domain 。
                     * @param DomainId 域名 ID 。参数 DomainId 优先级比参数 Domain 高，如果传递参数 DomainId 将忽略参数 Domain 。
                     */
                    void SetDomainId(const uint64_t& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     */
                    bool DomainIdHasBeenSet() const;

                    /**
                     * 获取主机记录，如 www，如果不传，默认为 @。
                     * @return SubDomain 主机记录，如 www，如果不传，默认为 @。
                     */
                    std::string GetSubDomain() const;

                    /**
                     * 设置主机记录，如 www，如果不传，默认为 @。
                     * @param SubDomain 主机记录，如 www，如果不传，默认为 @。
                     */
                    void SetSubDomain(const std::string& _subDomain);

                    /**
                     * 判断参数 SubDomain 是否已赋值
                     * @return SubDomain 是否已赋值
                     */
                    bool SubDomainHasBeenSet() const;

                    /**
                     * 获取线路的 ID，通过 API 记录线路获得，英文字符串，比如：10=1。参数RecordLineId优先级高于RecordLine，如果同时传递二者，优先使用RecordLineId参数。
                     * @return RecordLineId 线路的 ID，通过 API 记录线路获得，英文字符串，比如：10=1。参数RecordLineId优先级高于RecordLine，如果同时传递二者，优先使用RecordLineId参数。
                     */
                    std::string GetRecordLineId() const;

                    /**
                     * 设置线路的 ID，通过 API 记录线路获得，英文字符串，比如：10=1。参数RecordLineId优先级高于RecordLine，如果同时传递二者，优先使用RecordLineId参数。
                     * @param RecordLineId 线路的 ID，通过 API 记录线路获得，英文字符串，比如：10=1。参数RecordLineId优先级高于RecordLine，如果同时传递二者，优先使用RecordLineId参数。
                     */
                    void SetRecordLineId(const std::string& _recordLineId);

                    /**
                     * 判断参数 RecordLineId 是否已赋值
                     * @return RecordLineId 是否已赋值
                     */
                    bool RecordLineIdHasBeenSet() const;

                    /**
                     * 获取MX 优先级，当记录类型是 MX 时有效，范围1-20，MX 记录时必选。
                     * @return MX MX 优先级，当记录类型是 MX 时有效，范围1-20，MX 记录时必选。
                     */
                    uint64_t GetMX() const;

                    /**
                     * 设置MX 优先级，当记录类型是 MX 时有效，范围1-20，MX 记录时必选。
                     * @param MX MX 优先级，当记录类型是 MX 时有效，范围1-20，MX 记录时必选。
                     */
                    void SetMX(const uint64_t& _mX);

                    /**
                     * 判断参数 MX 是否已赋值
                     * @return MX 是否已赋值
                     */
                    bool MXHasBeenSet() const;

                    /**
                     * 获取TTL，范围1-604800，不同等级域名最小值不同。
                     * @return TTL TTL，范围1-604800，不同等级域名最小值不同。
                     */
                    uint64_t GetTTL() const;

                    /**
                     * 设置TTL，范围1-604800，不同等级域名最小值不同。
                     * @param TTL TTL，范围1-604800，不同等级域名最小值不同。
                     */
                    void SetTTL(const uint64_t& _tTL);

                    /**
                     * 判断参数 TTL 是否已赋值
                     * @return TTL 是否已赋值
                     */
                    bool TTLHasBeenSet() const;

                    /**
                     * 获取权重信息，0到100的整数。仅企业 VIP 域名可用，0 表示关闭，不传该参数，表示不设置权重信息。
                     * @return Weight 权重信息，0到100的整数。仅企业 VIP 域名可用，0 表示关闭，不传该参数，表示不设置权重信息。
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置权重信息，0到100的整数。仅企业 VIP 域名可用，0 表示关闭，不传该参数，表示不设置权重信息。
                     * @param Weight 权重信息，0到100的整数。仅企业 VIP 域名可用，0 表示关闭，不传该参数，表示不设置权重信息。
                     */
                    void SetWeight(const uint64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取记录初始状态，取值范围为 ENABLE 和 DISABLE 。默认为 ENABLE ，如果传入 DISABLE，解析不会生效，也不会验证负载均衡的限制。
                     * @return Status 记录初始状态，取值范围为 ENABLE 和 DISABLE 。默认为 ENABLE ，如果传入 DISABLE，解析不会生效，也不会验证负载均衡的限制。
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置记录初始状态，取值范围为 ENABLE 和 DISABLE 。默认为 ENABLE ，如果传入 DISABLE，解析不会生效，也不会验证负载均衡的限制。
                     * @param Status 记录初始状态，取值范围为 ENABLE 和 DISABLE 。默认为 ENABLE ，如果传入 DISABLE，解析不会生效，也不会验证负载均衡的限制。
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 记录类型，通过 API 记录类型获得，大写英文，比如：A 。
                     */
                    std::string m_recordType;
                    bool m_recordTypeHasBeenSet;

                    /**
                     * 记录线路，通过 API 记录线路获得，中文，比如：默认。
                     */
                    std::string m_recordLine;
                    bool m_recordLineHasBeenSet;

                    /**
                     * 记录值，如 IP : 200.200.200.200， CNAME : cname.dnspod.com.， MX : mail.dnspod.com.。
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 域名 ID 。参数 DomainId 优先级比参数 Domain 高，如果传递参数 DomainId 将忽略参数 Domain 。
                     */
                    uint64_t m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * 主机记录，如 www，如果不传，默认为 @。
                     */
                    std::string m_subDomain;
                    bool m_subDomainHasBeenSet;

                    /**
                     * 线路的 ID，通过 API 记录线路获得，英文字符串，比如：10=1。参数RecordLineId优先级高于RecordLine，如果同时传递二者，优先使用RecordLineId参数。
                     */
                    std::string m_recordLineId;
                    bool m_recordLineIdHasBeenSet;

                    /**
                     * MX 优先级，当记录类型是 MX 时有效，范围1-20，MX 记录时必选。
                     */
                    uint64_t m_mX;
                    bool m_mXHasBeenSet;

                    /**
                     * TTL，范围1-604800，不同等级域名最小值不同。
                     */
                    uint64_t m_tTL;
                    bool m_tTLHasBeenSet;

                    /**
                     * 权重信息，0到100的整数。仅企业 VIP 域名可用，0 表示关闭，不传该参数，表示不设置权重信息。
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * 记录初始状态，取值范围为 ENABLE 和 DISABLE 。默认为 ENABLE ，如果传入 DISABLE，解析不会生效，也不会验证负载均衡的限制。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_CREATERECORDREQUEST_H_
