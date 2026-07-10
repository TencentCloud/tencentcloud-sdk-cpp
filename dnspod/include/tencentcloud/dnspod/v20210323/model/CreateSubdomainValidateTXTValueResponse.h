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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_CREATESUBDOMAINVALIDATETXTVALUERESPONSE_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_CREATESUBDOMAINVALIDATETXTVALUERESPONSE_H_

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
                * CreateSubdomainValidateTXTValue返回参数结构体
                */
                class CreateSubdomainValidateTXTValueResponse : public AbstractModel
                {
                public:
                    CreateSubdomainValidateTXTValueResponse();
                    ~CreateSubdomainValidateTXTValueResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>需要添加 TXT 记录的主域名。</p>
                     * @return Domain <p>需要添加 TXT 记录的主域名。</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取<p>需要添加 TXT 记录的主机记录。</p>
                     * @return Subdomain <p>需要添加 TXT 记录的主机记录。</p>
                     * @deprecated
                     */
                    std::string GetSubdomain() const;

                    /**
                     * 判断参数 Subdomain 是否已赋值
                     * @return Subdomain 是否已赋值
                     * @deprecated
                     */
                    bool SubdomainHasBeenSet() const;

                    /**
                     * 获取<p>需要添加记录类型。</p>
                     * @return RecordType <p>需要添加记录类型。</p>
                     * 
                     */
                    std::string GetRecordType() const;

                    /**
                     * 判断参数 RecordType 是否已赋值
                     * @return RecordType 是否已赋值
                     * 
                     */
                    bool RecordTypeHasBeenSet() const;

                    /**
                     * 获取<p>需要添加 TXT 记录的记录值。</p>
                     * @return Value <p>需要添加 TXT 记录的记录值。</p>
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取<p>需要添加 TXT 记录的上级域名(可选，主域名和上级域名任选一个添加即可)。</p>
                     * @return ParentDomain <p>需要添加 TXT 记录的上级域名(可选，主域名和上级域名任选一个添加即可)。</p>
                     * 
                     */
                    std::string GetParentDomain() const;

                    /**
                     * 判断参数 ParentDomain 是否已赋值
                     * @return ParentDomain 是否已赋值
                     * 
                     */
                    bool ParentDomainHasBeenSet() const;

                    /**
                     * 获取<p>需要添加 TXT 记录的主机记录。</p><p>新增规范参数，建议优先使用SubDomain参数</p>
                     * @return SubDomain <p>需要添加 TXT 记录的主机记录。</p><p>新增规范参数，建议优先使用SubDomain参数</p>
                     * 
                     */
                    std::string GetSubDomain() const;

                    /**
                     * 判断参数 SubDomain 是否已赋值
                     * @return SubDomain 是否已赋值
                     * 
                     */
                    bool SubDomainHasBeenSet() const;

                private:

                    /**
                     * <p>需要添加 TXT 记录的主域名。</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>需要添加 TXT 记录的主机记录。</p>
                     */
                    std::string m_subdomain;
                    bool m_subdomainHasBeenSet;

                    /**
                     * <p>需要添加记录类型。</p>
                     */
                    std::string m_recordType;
                    bool m_recordTypeHasBeenSet;

                    /**
                     * <p>需要添加 TXT 记录的记录值。</p>
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * <p>需要添加 TXT 记录的上级域名(可选，主域名和上级域名任选一个添加即可)。</p>
                     */
                    std::string m_parentDomain;
                    bool m_parentDomainHasBeenSet;

                    /**
                     * <p>需要添加 TXT 记录的主机记录。</p><p>新增规范参数，建议优先使用SubDomain参数</p>
                     */
                    std::string m_subDomain;
                    bool m_subDomainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_CREATESUBDOMAINVALIDATETXTVALUERESPONSE_H_
