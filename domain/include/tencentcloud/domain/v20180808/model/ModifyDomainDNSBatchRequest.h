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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_MODIFYDOMAINDNSBATCHREQUEST_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_MODIFYDOMAINDNSBATCHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * ModifyDomainDNSBatch请求参数结构体
                */
                class ModifyDomainDNSBatchRequest : public AbstractModel
                {
                public:
                    ModifyDomainDNSBatchRequest();
                    ~ModifyDomainDNSBatchRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取批量操作的域名。
一次提交不超过4000个
                     * @return Domains 批量操作的域名。
一次提交不超过4000个
                     * 
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置批量操作的域名。
一次提交不超过4000个
                     * @param _domains 批量操作的域名。
一次提交不超过4000个
                     * 
                     */
                    void SetDomains(const std::vector<std::string>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     * 
                     */
                    bool DomainsHasBeenSet() const;

                    /**
                     * 获取域名DNS 数组。
不少于2个，一般建议2-6个
                     * @return Dns 域名DNS 数组。
不少于2个，一般建议2-6个
                     * 
                     */
                    std::vector<std::string> GetDns() const;

                    /**
                     * 设置域名DNS 数组。
不少于2个，一般建议2-6个
                     * @param _dns 域名DNS 数组。
不少于2个，一般建议2-6个
                     * 
                     */
                    void SetDns(const std::vector<std::string>& _dns);

                    /**
                     * 判断参数 Dns 是否已赋值
                     * @return Dns 是否已赋值
                     * 
                     */
                    bool DnsHasBeenSet() const;

                private:

                    /**
                     * 批量操作的域名。
一次提交不超过4000个
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * 域名DNS 数组。
不少于2个，一般建议2-6个
                     */
                    std::vector<std::string> m_dns;
                    bool m_dnsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_MODIFYDOMAINDNSBATCHREQUEST_H_
