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
                     * 获取<p>域名</p>
                     * @return Domain <p>域名</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>域名</p>
                     * @param _domain <p>域名</p>
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
                     * 获取<p>记录ID。 可以通过接口DescribeRecordList查到所有的解析记录列表以及对应的RecordId</p>
                     * @return RecordId <p>记录ID。 可以通过接口DescribeRecordList查到所有的解析记录列表以及对应的RecordId</p>
                     * 
                     */
                    uint64_t GetRecordId() const;

                    /**
                     * 设置<p>记录ID。 可以通过接口DescribeRecordList查到所有的解析记录列表以及对应的RecordId</p>
                     * @param _recordId <p>记录ID。 可以通过接口DescribeRecordList查到所有的解析记录列表以及对应的RecordId</p>
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
                     * 获取<p>记录线路，中文，比如：默认。</p>
                     * @return RecordLine <p>记录线路，中文，比如：默认。</p>
                     * 
                     */
                    std::string GetRecordLine() const;

                    /**
                     * 设置<p>记录线路，中文，比如：默认。</p>
                     * @param _recordLine <p>记录线路，中文，比如：默认。</p>
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
                     * 获取<p>域名 ID 。参数 DomainId 优先级比参数 Domain 高，如果传递参数 DomainId 将忽略参数 Domain 。</p>
                     * @return DomainId <p>域名 ID 。参数 DomainId 优先级比参数 Domain 高，如果传递参数 DomainId 将忽略参数 Domain 。</p>
                     * 
                     */
                    uint64_t GetDomainId() const;

                    /**
                     * 设置<p>域名 ID 。参数 DomainId 优先级比参数 Domain 高，如果传递参数 DomainId 将忽略参数 Domain 。</p>
                     * @param _domainId <p>域名 ID 。参数 DomainId 优先级比参数 Domain 高，如果传递参数 DomainId 将忽略参数 Domain 。</p>
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
                     * 获取<p>主机记录，如 www，如果不传，默认为 @。</p>
                     * @return SubDomain <p>主机记录，如 www，如果不传，默认为 @。</p>
                     * 
                     */
                    std::string GetSubDomain() const;

                    /**
                     * 设置<p>主机记录，如 www，如果不传，默认为 @。</p>
                     * @param _subDomain <p>主机记录，如 www，如果不传，默认为 @。</p>
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
                     * 获取<p>线路的 ID，英文字符串，比如：10=1。参数RecordLineId优先级高于RecordLine，如果同时传递二者，优先使用RecordLineId参数。</p>
                     * @return RecordLineId <p>线路的 ID，英文字符串，比如：10=1。参数RecordLineId优先级高于RecordLine，如果同时传递二者，优先使用RecordLineId参数。</p>
                     * 
                     */
                    std::string GetRecordLineId() const;

                    /**
                     * 设置<p>线路的 ID，英文字符串，比如：10=1。参数RecordLineId优先级高于RecordLine，如果同时传递二者，优先使用RecordLineId参数。</p>
                     * @param _recordLineId <p>线路的 ID，英文字符串，比如：10=1。参数RecordLineId优先级高于RecordLine，如果同时传递二者，优先使用RecordLineId参数。</p>
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
                     * 获取<p>IP 地址，支持 IPv4、IPv6，例如 119.29.29.29 或者 2402:4e00::</p>
                     * @return Value <p>IP 地址，支持 IPv4、IPv6，例如 119.29.29.29 或者 2402:4e00::</p>
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置<p>IP 地址，支持 IPv4、IPv6，例如 119.29.29.29 或者 2402:4e00::</p>
                     * @param _value <p>IP 地址，支持 IPv4、IPv6，例如 119.29.29.29 或者 2402:4e00::</p>
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
                     * 获取<p>TTL值，如果不传，默认为域名的TTL值。</p>
                     * @return Ttl <p>TTL值，如果不传，默认为域名的TTL值。</p>
                     * @deprecated
                     */
                    uint64_t GetTtl() const;

                    /**
                     * 设置<p>TTL值，如果不传，默认为域名的TTL值。</p>
                     * @param _ttl <p>TTL值，如果不传，默认为域名的TTL值。</p>
                     * @deprecated
                     */
                    void SetTtl(const uint64_t& _ttl);

                    /**
                     * 判断参数 Ttl 是否已赋值
                     * @return Ttl 是否已赋值
                     * @deprecated
                     */
                    bool TtlHasBeenSet() const;

                    /**
                     * 获取<p>TTL值，如果不传，默认为域名的TTL值。</p><p>新增规范参数，同时传递TTL和Ttl参数时，后端优先使用TTL参数</p>
                     * @return TTL <p>TTL值，如果不传，默认为域名的TTL值。</p><p>新增规范参数，同时传递TTL和Ttl参数时，后端优先使用TTL参数</p>
                     * 
                     */
                    uint64_t GetTTL() const;

                    /**
                     * 设置<p>TTL值，如果不传，默认为域名的TTL值。</p><p>新增规范参数，同时传递TTL和Ttl参数时，后端优先使用TTL参数</p>
                     * @param _tTL <p>TTL值，如果不传，默认为域名的TTL值。</p><p>新增规范参数，同时传递TTL和Ttl参数时，后端优先使用TTL参数</p>
                     * 
                     */
                    void SetTTL(const uint64_t& _tTL);

                    /**
                     * 判断参数 TTL 是否已赋值
                     * @return TTL 是否已赋值
                     * 
                     */
                    bool TTLHasBeenSet() const;

                private:

                    /**
                     * <p>域名</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>记录ID。 可以通过接口DescribeRecordList查到所有的解析记录列表以及对应的RecordId</p>
                     */
                    uint64_t m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * <p>记录线路，中文，比如：默认。</p>
                     */
                    std::string m_recordLine;
                    bool m_recordLineHasBeenSet;

                    /**
                     * <p>域名 ID 。参数 DomainId 优先级比参数 Domain 高，如果传递参数 DomainId 将忽略参数 Domain 。</p>
                     */
                    uint64_t m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * <p>主机记录，如 www，如果不传，默认为 @。</p>
                     */
                    std::string m_subDomain;
                    bool m_subDomainHasBeenSet;

                    /**
                     * <p>线路的 ID，英文字符串，比如：10=1。参数RecordLineId优先级高于RecordLine，如果同时传递二者，优先使用RecordLineId参数。</p>
                     */
                    std::string m_recordLineId;
                    bool m_recordLineIdHasBeenSet;

                    /**
                     * <p>IP 地址，支持 IPv4、IPv6，例如 119.29.29.29 或者 2402:4e00::</p>
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * <p>TTL值，如果不传，默认为域名的TTL值。</p>
                     */
                    uint64_t m_ttl;
                    bool m_ttlHasBeenSet;

                    /**
                     * <p>TTL值，如果不传，默认为域名的TTL值。</p><p>新增规范参数，同时传递TTL和Ttl参数时，后端优先使用TTL参数</p>
                     */
                    uint64_t m_tTL;
                    bool m_tTLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_MODIFYDYNAMICDNSREQUEST_H_
