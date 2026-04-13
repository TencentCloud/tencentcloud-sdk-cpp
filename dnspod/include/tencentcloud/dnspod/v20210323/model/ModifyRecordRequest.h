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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_MODIFYRECORDREQUEST_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_MODIFYRECORDREQUEST_H_

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
                * ModifyRecord请求参数结构体
                */
                class ModifyRecordRequest : public AbstractModel
                {
                public:
                    ModifyRecordRequest();
                    ~ModifyRecordRequest() = default;
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
                     * 获取<p>记录类型，可通过接口DescribeRecordType获得，大写英文，比如：A 。</p>
                     * @return RecordType <p>记录类型，可通过接口DescribeRecordType获得，大写英文，比如：A 。</p>
                     * 
                     */
                    std::string GetRecordType() const;

                    /**
                     * 设置<p>记录类型，可通过接口DescribeRecordType获得，大写英文，比如：A 。</p>
                     * @param _recordType <p>记录类型，可通过接口DescribeRecordType获得，大写英文，比如：A 。</p>
                     * 
                     */
                    void SetRecordType(const std::string& _recordType);

                    /**
                     * 判断参数 RecordType 是否已赋值
                     * @return RecordType 是否已赋值
                     * 
                     */
                    bool RecordTypeHasBeenSet() const;

                    /**
                     * 获取<p>记录线路，可以通过接口DescribeRecordLineList查看当前域名允许的线路信息。比如：默认。</p>
                     * @return RecordLine <p>记录线路，可以通过接口DescribeRecordLineList查看当前域名允许的线路信息。比如：默认。</p>
                     * 
                     */
                    std::string GetRecordLine() const;

                    /**
                     * 设置<p>记录线路，可以通过接口DescribeRecordLineList查看当前域名允许的线路信息。比如：默认。</p>
                     * @param _recordLine <p>记录线路，可以通过接口DescribeRecordLineList查看当前域名允许的线路信息。比如：默认。</p>
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
                     * 获取<p>记录值，如 IP : 200.200.200.200， CNAME : cname.dnspod.com.， MX : mail.dnspod.com.。</p>
                     * @return Value <p>记录值，如 IP : 200.200.200.200， CNAME : cname.dnspod.com.， MX : mail.dnspod.com.。</p>
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置<p>记录值，如 IP : 200.200.200.200， CNAME : cname.dnspod.com.， MX : mail.dnspod.com.。</p>
                     * @param _value <p>记录值，如 IP : 200.200.200.200， CNAME : cname.dnspod.com.， MX : mail.dnspod.com.。</p>
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
                     * 获取<p>记录 ID 。可以通过接口DescribeRecordList查到所有的解析记录列表以及对应的RecordId</p>
                     * @return RecordId <p>记录 ID 。可以通过接口DescribeRecordList查到所有的解析记录列表以及对应的RecordId</p>
                     * 
                     */
                    uint64_t GetRecordId() const;

                    /**
                     * 设置<p>记录 ID 。可以通过接口DescribeRecordList查到所有的解析记录列表以及对应的RecordId</p>
                     * @param _recordId <p>记录 ID 。可以通过接口DescribeRecordList查到所有的解析记录列表以及对应的RecordId</p>
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
                     * 获取<p>域名 ID 。参数 DomainId 优先级比参数 Domain 高，如果传递参数 DomainId 将忽略参数 Domain 。可以通过接口DescribeDomainList查到所有的Domain以及DomainId</p>
                     * @return DomainId <p>域名 ID 。参数 DomainId 优先级比参数 Domain 高，如果传递参数 DomainId 将忽略参数 Domain 。可以通过接口DescribeDomainList查到所有的Domain以及DomainId</p>
                     * 
                     */
                    uint64_t GetDomainId() const;

                    /**
                     * 设置<p>域名 ID 。参数 DomainId 优先级比参数 Domain 高，如果传递参数 DomainId 将忽略参数 Domain 。可以通过接口DescribeDomainList查到所有的Domain以及DomainId</p>
                     * @param _domainId <p>域名 ID 。参数 DomainId 优先级比参数 Domain 高，如果传递参数 DomainId 将忽略参数 Domain 。可以通过接口DescribeDomainList查到所有的Domain以及DomainId</p>
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
                     * 获取<p>线路的 ID，可以通过接口DescribeRecordLineList查看当前域名允许的线路信息，比如：10=1。参数RecordLineId优先级高于RecordLine，如果同时传递二者，优先使用RecordLineId参数。</p>
                     * @return RecordLineId <p>线路的 ID，可以通过接口DescribeRecordLineList查看当前域名允许的线路信息，比如：10=1。参数RecordLineId优先级高于RecordLine，如果同时传递二者，优先使用RecordLineId参数。</p>
                     * 
                     */
                    std::string GetRecordLineId() const;

                    /**
                     * 设置<p>线路的 ID，可以通过接口DescribeRecordLineList查看当前域名允许的线路信息，比如：10=1。参数RecordLineId优先级高于RecordLine，如果同时传递二者，优先使用RecordLineId参数。</p>
                     * @param _recordLineId <p>线路的 ID，可以通过接口DescribeRecordLineList查看当前域名允许的线路信息，比如：10=1。参数RecordLineId优先级高于RecordLine，如果同时传递二者，优先使用RecordLineId参数。</p>
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
                     * 获取<p>MX 优先级，当记录类型是 MX、HTTPS、SVCB 时必填，范围0-65535。</p><p>取值范围：[0, 65535]</p>
                     * @return MX <p>MX 优先级，当记录类型是 MX、HTTPS、SVCB 时必填，范围0-65535。</p><p>取值范围：[0, 65535]</p>
                     * 
                     */
                    uint64_t GetMX() const;

                    /**
                     * 设置<p>MX 优先级，当记录类型是 MX、HTTPS、SVCB 时必填，范围0-65535。</p><p>取值范围：[0, 65535]</p>
                     * @param _mX <p>MX 优先级，当记录类型是 MX、HTTPS、SVCB 时必填，范围0-65535。</p><p>取值范围：[0, 65535]</p>
                     * 
                     */
                    void SetMX(const uint64_t& _mX);

                    /**
                     * 判断参数 MX 是否已赋值
                     * @return MX 是否已赋值
                     * 
                     */
                    bool MXHasBeenSet() const;

                    /**
                     * 获取<p>TTL，范围1-604800，不同等级域名最小值不同。</p>
                     * @return TTL <p>TTL，范围1-604800，不同等级域名最小值不同。</p>
                     * 
                     */
                    uint64_t GetTTL() const;

                    /**
                     * 设置<p>TTL，范围1-604800，不同等级域名最小值不同。</p>
                     * @param _tTL <p>TTL，范围1-604800，不同等级域名最小值不同。</p>
                     * 
                     */
                    void SetTTL(const uint64_t& _tTL);

                    /**
                     * 判断参数 TTL 是否已赋值
                     * @return TTL 是否已赋值
                     * 
                     */
                    bool TTLHasBeenSet() const;

                    /**
                     * 获取<p>权重信息，0到100的整数。0 表示关闭，不传该参数，表示不设置权重信息。</p>
                     * @return Weight <p>权重信息，0到100的整数。0 表示关闭，不传该参数，表示不设置权重信息。</p>
                     * 
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置<p>权重信息，0到100的整数。0 表示关闭，不传该参数，表示不设置权重信息。</p>
                     * @param _weight <p>权重信息，0到100的整数。0 表示关闭，不传该参数，表示不设置权重信息。</p>
                     * 
                     */
                    void SetWeight(const uint64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取<p>记录初始状态，取值范围为 ENABLE 和 DISABLE 。默认为 ENABLE ，如果传入 DISABLE，解析不会生效，也不会验证负载均衡的限制。</p>
                     * @return Status <p>记录初始状态，取值范围为 ENABLE 和 DISABLE 。默认为 ENABLE ，如果传入 DISABLE，解析不会生效，也不会验证负载均衡的限制。</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>记录初始状态，取值范围为 ENABLE 和 DISABLE 。默认为 ENABLE ，如果传入 DISABLE，解析不会生效，也不会验证负载均衡的限制。</p>
                     * @param _status <p>记录初始状态，取值范围为 ENABLE 和 DISABLE 。默认为 ENABLE ，如果传入 DISABLE，解析不会生效，也不会验证负载均衡的限制。</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>记录的备注信息。传空删除备注。</p>
                     * @return Remark <p>记录的备注信息。传空删除备注。</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>记录的备注信息。传空删除备注。</p>
                     * @param _remark <p>记录的备注信息。传空删除备注。</p>
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取<p>开启DNSSEC时，强制将其它记录修改为CNAME/URL记录</p>
                     * @return DnssecConflictMode <p>开启DNSSEC时，强制将其它记录修改为CNAME/URL记录</p>
                     * 
                     */
                    std::string GetDnssecConflictMode() const;

                    /**
                     * 设置<p>开启DNSSEC时，强制将其它记录修改为CNAME/URL记录</p>
                     * @param _dnssecConflictMode <p>开启DNSSEC时，强制将其它记录修改为CNAME/URL记录</p>
                     * 
                     */
                    void SetDnssecConflictMode(const std::string& _dnssecConflictMode);

                    /**
                     * 判断参数 DnssecConflictMode 是否已赋值
                     * @return DnssecConflictMode 是否已赋值
                     * 
                     */
                    bool DnssecConflictModeHasBeenSet() const;

                private:

                    /**
                     * <p>域名</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>记录类型，可通过接口DescribeRecordType获得，大写英文，比如：A 。</p>
                     */
                    std::string m_recordType;
                    bool m_recordTypeHasBeenSet;

                    /**
                     * <p>记录线路，可以通过接口DescribeRecordLineList查看当前域名允许的线路信息。比如：默认。</p>
                     */
                    std::string m_recordLine;
                    bool m_recordLineHasBeenSet;

                    /**
                     * <p>记录值，如 IP : 200.200.200.200， CNAME : cname.dnspod.com.， MX : mail.dnspod.com.。</p>
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * <p>记录 ID 。可以通过接口DescribeRecordList查到所有的解析记录列表以及对应的RecordId</p>
                     */
                    uint64_t m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * <p>域名 ID 。参数 DomainId 优先级比参数 Domain 高，如果传递参数 DomainId 将忽略参数 Domain 。可以通过接口DescribeDomainList查到所有的Domain以及DomainId</p>
                     */
                    uint64_t m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * <p>主机记录，如 www，如果不传，默认为 @。</p>
                     */
                    std::string m_subDomain;
                    bool m_subDomainHasBeenSet;

                    /**
                     * <p>线路的 ID，可以通过接口DescribeRecordLineList查看当前域名允许的线路信息，比如：10=1。参数RecordLineId优先级高于RecordLine，如果同时传递二者，优先使用RecordLineId参数。</p>
                     */
                    std::string m_recordLineId;
                    bool m_recordLineIdHasBeenSet;

                    /**
                     * <p>MX 优先级，当记录类型是 MX、HTTPS、SVCB 时必填，范围0-65535。</p><p>取值范围：[0, 65535]</p>
                     */
                    uint64_t m_mX;
                    bool m_mXHasBeenSet;

                    /**
                     * <p>TTL，范围1-604800，不同等级域名最小值不同。</p>
                     */
                    uint64_t m_tTL;
                    bool m_tTLHasBeenSet;

                    /**
                     * <p>权重信息，0到100的整数。0 表示关闭，不传该参数，表示不设置权重信息。</p>
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * <p>记录初始状态，取值范围为 ENABLE 和 DISABLE 。默认为 ENABLE ，如果传入 DISABLE，解析不会生效，也不会验证负载均衡的限制。</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>记录的备注信息。传空删除备注。</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>开启DNSSEC时，强制将其它记录修改为CNAME/URL记录</p>
                     */
                    std::string m_dnssecConflictMode;
                    bool m_dnssecConflictModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_MODIFYRECORDREQUEST_H_
