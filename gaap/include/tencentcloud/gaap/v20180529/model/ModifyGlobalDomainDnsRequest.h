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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_MODIFYGLOBALDOMAINDNSREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_MODIFYGLOBALDOMAINDNSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * ModifyGlobalDomainDns请求参数结构体
                */
                class ModifyGlobalDomainDnsRequest : public AbstractModel
                {
                public:
                    ModifyGlobalDomainDnsRequest();
                    ~ModifyGlobalDomainDnsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取解析记录ID
                     * @return DnsRecordId 解析记录ID
                     * 
                     */
                    uint64_t GetDnsRecordId() const;

                    /**
                     * 设置解析记录ID
                     * @param _dnsRecordId 解析记录ID
                     * 
                     */
                    void SetDnsRecordId(const uint64_t& _dnsRecordId);

                    /**
                     * 判断参数 DnsRecordId 是否已赋值
                     * @return DnsRecordId 是否已赋值
                     * 
                     */
                    bool DnsRecordIdHasBeenSet() const;

                    /**
                     * 获取域名ID
                     * @return DomainId 域名ID
                     * 
                     */
                    std::string GetDomainId() const;

                    /**
                     * 设置域名ID
                     * @param _domainId 域名ID
                     * 
                     */
                    void SetDomainId(const std::string& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     * 
                     */
                    bool DomainIdHasBeenSet() const;

                    /**
                     * 获取国家ID列表
                     * @return NationCountryInnerCodes 国家ID列表
                     * 
                     */
                    std::vector<std::string> GetNationCountryInnerCodes() const;

                    /**
                     * 设置国家ID列表
                     * @param _nationCountryInnerCodes 国家ID列表
                     * 
                     */
                    void SetNationCountryInnerCodes(const std::vector<std::string>& _nationCountryInnerCodes);

                    /**
                     * 判断参数 NationCountryInnerCodes 是否已赋值
                     * @return NationCountryInnerCodes 是否已赋值
                     * 
                     */
                    bool NationCountryInnerCodesHasBeenSet() const;

                    /**
                     * 获取通道ID列表
                     * @return ProxyIdList 通道ID列表
                     * 
                     */
                    std::vector<std::string> GetProxyIdList() const;

                    /**
                     * 设置通道ID列表
                     * @param _proxyIdList 通道ID列表
                     * 
                     */
                    void SetProxyIdList(const std::vector<std::string>& _proxyIdList);

                    /**
                     * 判断参数 ProxyIdList 是否已赋值
                     * @return ProxyIdList 是否已赋值
                     * 
                     */
                    bool ProxyIdListHasBeenSet() const;

                private:

                    /**
                     * 解析记录ID
                     */
                    uint64_t m_dnsRecordId;
                    bool m_dnsRecordIdHasBeenSet;

                    /**
                     * 域名ID
                     */
                    std::string m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * 国家ID列表
                     */
                    std::vector<std::string> m_nationCountryInnerCodes;
                    bool m_nationCountryInnerCodesHasBeenSet;

                    /**
                     * 通道ID列表
                     */
                    std::vector<std::string> m_proxyIdList;
                    bool m_proxyIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_MODIFYGLOBALDOMAINDNSREQUEST_H_
