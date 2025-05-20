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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_MODIFYDYNAMICDNSREQUEST_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_MODIFYDYNAMICDNSREQUEST_H_

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
                * ModifyDynamicDNS请求参数结构体
                */
                class ModifyDynamicDNSRequest : public AbstractModel
                {
                public:
                    ModifyDynamicDNSRequest();
                    ~ModifyDynamicDNSRequest() = default;
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
                     * 获取记录ID。 可以通过接口DescribeRecordList查到所有的解析记录列表以及对应的RecordId
                     * @return RecordId 记录ID。 可以通过接口DescribeRecordList查到所有的解析记录列表以及对应的RecordId
                     * 
                     */
                    uint64_t GetRecordId() const;

                    /**
                     * 设置记录ID。 可以通过接口DescribeRecordList查到所有的解析记录列表以及对应的RecordId
                     * @param _recordId 记录ID。 可以通过接口DescribeRecordList查到所有的解析记录列表以及对应的RecordId
                     * 
                     */
                    void SetRecordId(const uint64_t& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     * 
                     */
                    bool RecordIdHasBeenSet() const;

                    /**
                     * 获取记录线路，中文，比如：默认。
                     * @return RecordLine 记录线路，中文，比如：默认。
                     * 
                     */
                    std::string GetRecordLine() const;

                    /**
                     * 设置记录线路，中文，比如：默认。
                     * @param _recordLine 记录线路，中文，比如：默认。
                     * 
                     */
                    void SetRecordLine(const std::string& _recordLine);

                    /**
                     * 判断参数 RecordLine 是否已赋值
                     * @return RecordLine 是否已赋值
                     * 
                     */
                    bool RecordLineHasBeenSet() const;

                    /**
                     * 获取域名 ID 。参数 DomainId 优先级比参数 Domain 高，如果传递参数 DomainId 将忽略参数 Domain 。
                     * @return DomainId 域名 ID 。参数 DomainId 优先级比参数 Domain 高，如果传递参数 DomainId 将忽略参数 Domain 。
                     * 
                     */
                    uint64_t GetDomainId() const;

                    /**
                     * 设置域名 ID 。参数 DomainId 优先级比参数 Domain 高，如果传递参数 DomainId 将忽略参数 Domain 。
                     * @param _domainId 域名 ID 。参数 DomainId 优先级比参数 Domain 高，如果传递参数 DomainId 将忽略参数 Domain 。
                     * 
                     */
                    void SetDomainId(const uint64_t& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     * 
                     */
                    bool DomainIdHasBeenSet() const;

                    /**
                     * 获取主机记录，如 www，如果不传，默认为 @。
                     * @return SubDomain 主机记录，如 www，如果不传，默认为 @。
                     * 
                     */
                    std::string GetSubDomain() const;

                    /**
                     * 设置主机记录，如 www，如果不传，默认为 @。
                     * @param _subDomain 主机记录，如 www，如果不传，默认为 @。
                     * 
                     */
                    void SetSubDomain(const std::string& _subDomain);

                    /**
                     * 判断参数 SubDomain 是否已赋值
                     * @return SubDomain 是否已赋值
                     * 
                     */
                    bool SubDomainHasBeenSet() const;

                    /**
                     * 获取线路的 ID，英文字符串，比如：10=1。参数RecordLineId优先级高于RecordLine，如果同时传递二者，优先使用RecordLineId参数。
                     * @return RecordLineId 线路的 ID，英文字符串，比如：10=1。参数RecordLineId优先级高于RecordLine，如果同时传递二者，优先使用RecordLineId参数。
                     * 
                     */
                    std::string GetRecordLineId() const;

                    /**
                     * 设置线路的 ID，英文字符串，比如：10=1。参数RecordLineId优先级高于RecordLine，如果同时传递二者，优先使用RecordLineId参数。
                     * @param _recordLineId 线路的 ID，英文字符串，比如：10=1。参数RecordLineId优先级高于RecordLine，如果同时传递二者，优先使用RecordLineId参数。
                     * 
                     */
                    void SetRecordLineId(const std::string& _recordLineId);

                    /**
                     * 判断参数 RecordLineId 是否已赋值
                     * @return RecordLineId 是否已赋值
                     * 
                     */
                    bool RecordLineIdHasBeenSet() const;

                    /**
                     * 获取IP 地址，支持 IPv4、IPv6，例如 119.29.29.29 或者 2402:4e00::
                     * @return Value IP 地址，支持 IPv4、IPv6，例如 119.29.29.29 或者 2402:4e00::
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置IP 地址，支持 IPv4、IPv6，例如 119.29.29.29 或者 2402:4e00::
                     * @param _value IP 地址，支持 IPv4、IPv6，例如 119.29.29.29 或者 2402:4e00::
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取TTL值，如果不传，默认为域名的TTL值。
                     * @return Ttl TTL值，如果不传，默认为域名的TTL值。
                     * 
                     */
                    uint64_t GetTtl() const;

                    /**
                     * 设置TTL值，如果不传，默认为域名的TTL值。
                     * @param _ttl TTL值，如果不传，默认为域名的TTL值。
                     * 
                     */
                    void SetTtl(const uint64_t& _ttl);

                    /**
                     * 判断参数 Ttl 是否已赋值
                     * @return Ttl 是否已赋值
                     * 
                     */
                    bool TtlHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 记录ID。 可以通过接口DescribeRecordList查到所有的解析记录列表以及对应的RecordId
                     */
                    uint64_t m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * 记录线路，中文，比如：默认。
                     */
                    std::string m_recordLine;
                    bool m_recordLineHasBeenSet;

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
                     * 线路的 ID，英文字符串，比如：10=1。参数RecordLineId优先级高于RecordLine，如果同时传递二者，优先使用RecordLineId参数。
                     */
                    std::string m_recordLineId;
                    bool m_recordLineIdHasBeenSet;

                    /**
                     * IP 地址，支持 IPv4、IPv6，例如 119.29.29.29 或者 2402:4e00::
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * TTL值，如果不传，默认为域名的TTL值。
                     */
                    uint64_t m_ttl;
                    bool m_ttlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_MODIFYDYNAMICDNSREQUEST_H_
