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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_MODIFYCUSTOMDNSHOSTREQUEST_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_MODIFYCUSTOMDNSHOSTREQUEST_H_

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
                * ModifyCustomDnsHost请求参数结构体
                */
                class ModifyCustomDnsHostRequest : public AbstractModel
                {
                public:
                    ModifyCustomDnsHostRequest();
                    ~ModifyCustomDnsHostRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取域名实例ID
可通过[DescribeDomainNameList](https://cloud.tencent.com/document/api/242/48941)接口获取
                     * @return DomainId 域名实例ID
可通过[DescribeDomainNameList](https://cloud.tencent.com/document/api/242/48941)接口获取
                     * 
                     */
                    std::string GetDomainId() const;

                    /**
                     * 设置域名实例ID
可通过[DescribeDomainNameList](https://cloud.tencent.com/document/api/242/48941)接口获取
                     * @param _domainId 域名实例ID
可通过[DescribeDomainNameList](https://cloud.tencent.com/document/api/242/48941)接口获取
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
                     * 获取Dns名称 例如：<>.test.com;其中<>就是Dns名称，可以是任意域名允许的格式
                     * @return DnsName Dns名称 例如：<>.test.com;其中<>就是Dns名称，可以是任意域名允许的格式
                     * 
                     */
                    std::string GetDnsName() const;

                    /**
                     * 设置Dns名称 例如：<>.test.com;其中<>就是Dns名称，可以是任意域名允许的格式
                     * @param _dnsName Dns名称 例如：<>.test.com;其中<>就是Dns名称，可以是任意域名允许的格式
                     * 
                     */
                    void SetDnsName(const std::string& _dnsName);

                    /**
                     * 判断参数 DnsName 是否已赋值
                     * @return DnsName 是否已赋值
                     * 
                     */
                    bool DnsNameHasBeenSet() const;

                    /**
                     * 获取IP地址列表 可选择：正常IP地址范围
                     * @return IpSet IP地址列表 可选择：正常IP地址范围
                     * 
                     */
                    std::vector<std::string> GetIpSet() const;

                    /**
                     * 设置IP地址列表 可选择：正常IP地址范围
                     * @param _ipSet IP地址列表 可选择：正常IP地址范围
                     * 
                     */
                    void SetIpSet(const std::vector<std::string>& _ipSet);

                    /**
                     * 判断参数 IpSet 是否已赋值
                     * @return IpSet 是否已赋值
                     * 
                     */
                    bool IpSetHasBeenSet() const;

                private:

                    /**
                     * 域名实例ID
可通过[DescribeDomainNameList](https://cloud.tencent.com/document/api/242/48941)接口获取
                     */
                    std::string m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * Dns名称 例如：<>.test.com;其中<>就是Dns名称，可以是任意域名允许的格式
                     */
                    std::string m_dnsName;
                    bool m_dnsNameHasBeenSet;

                    /**
                     * IP地址列表 可选择：正常IP地址范围
                     */
                    std::vector<std::string> m_ipSet;
                    bool m_ipSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_MODIFYCUSTOMDNSHOSTREQUEST_H_
