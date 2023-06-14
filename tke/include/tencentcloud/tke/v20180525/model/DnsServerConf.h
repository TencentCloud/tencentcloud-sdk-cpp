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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DNSSERVERCONF_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DNSSERVERCONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * Eks 自定义域名服务器 配置
                */
                class DnsServerConf : public AbstractModel
                {
                public:
                    DnsServerConf();
                    ~DnsServerConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取域名。空字符串表示所有域名。
                     * @return Domain 域名。空字符串表示所有域名。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名。空字符串表示所有域名。
                     * @param _domain 域名。空字符串表示所有域名。
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
                     * 获取dns 服务器地址列表。地址格式 ip:port
                     * @return DnsServers dns 服务器地址列表。地址格式 ip:port
                     * 
                     */
                    std::vector<std::string> GetDnsServers() const;

                    /**
                     * 设置dns 服务器地址列表。地址格式 ip:port
                     * @param _dnsServers dns 服务器地址列表。地址格式 ip:port
                     * 
                     */
                    void SetDnsServers(const std::vector<std::string>& _dnsServers);

                    /**
                     * 判断参数 DnsServers 是否已赋值
                     * @return DnsServers 是否已赋值
                     * 
                     */
                    bool DnsServersHasBeenSet() const;

                private:

                    /**
                     * 域名。空字符串表示所有域名。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * dns 服务器地址列表。地址格式 ip:port
                     */
                    std::vector<std::string> m_dnsServers;
                    bool m_dnsServersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DNSSERVERCONF_H_
