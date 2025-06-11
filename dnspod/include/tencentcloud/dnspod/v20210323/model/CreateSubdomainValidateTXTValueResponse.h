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
                     * 获取需要添加 TXT 记录的主域名。
                     * @return Domain 需要添加 TXT 记录的主域名。
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
                     * 获取需要添加 TXT 记录的主机记录。
                     * @return Subdomain 需要添加 TXT 记录的主机记录。
                     * 
                     */
                    std::string GetSubdomain() const;

                    /**
                     * 判断参数 Subdomain 是否已赋值
                     * @return Subdomain 是否已赋值
                     * 
                     */
                    bool SubdomainHasBeenSet() const;

                    /**
                     * 获取需要添加记录类型。
                     * @return RecordType 需要添加记录类型。
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
                     * 获取需要添加 TXT 记录的记录值。
                     * @return Value 需要添加 TXT 记录的记录值。
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
                     * 获取需要添加 TXT 记录的上级域名(可选，主域名和上级域名任选一个添加即可)。
                     * @return ParentDomain 需要添加 TXT 记录的上级域名(可选，主域名和上级域名任选一个添加即可)。
                     * 
                     */
                    std::string GetParentDomain() const;

                    /**
                     * 判断参数 ParentDomain 是否已赋值
                     * @return ParentDomain 是否已赋值
                     * 
                     */
                    bool ParentDomainHasBeenSet() const;

                private:

                    /**
                     * 需要添加 TXT 记录的主域名。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 需要添加 TXT 记录的主机记录。
                     */
                    std::string m_subdomain;
                    bool m_subdomainHasBeenSet;

                    /**
                     * 需要添加记录类型。
                     */
                    std::string m_recordType;
                    bool m_recordTypeHasBeenSet;

                    /**
                     * 需要添加 TXT 记录的记录值。
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 需要添加 TXT 记录的上级域名(可选，主域名和上级域名任选一个添加即可)。
                     */
                    std::string m_parentDomain;
                    bool m_parentDomainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_CREATESUBDOMAINVALIDATETXTVALUERESPONSE_H_
