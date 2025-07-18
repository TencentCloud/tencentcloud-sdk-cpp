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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_CUSTOMDNSHOST_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_CUSTOMDNSHOST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 自定义DNS Host
                */
                class CustomDnsHost : public AbstractModel
                {
                public:
                    CustomDnsHost();
                    ~CustomDnsHost() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取DNS名称
                     * @return DnsName DNS名称
                     * 
                     */
                    std::string GetDnsName() const;

                    /**
                     * 设置DNS名称
                     * @param _dnsName DNS名称
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
                     * 获取IP地址列表
                     * @return IpSet IP地址列表
                     * 
                     */
                    std::vector<std::string> GetIpSet() const;

                    /**
                     * 设置IP地址列表
                     * @param _ipSet IP地址列表
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
                     * DNS名称
                     */
                    std::string m_dnsName;
                    bool m_dnsNameHasBeenSet;

                    /**
                     * IP地址列表
                     */
                    std::vector<std::string> m_ipSet;
                    bool m_ipSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_CUSTOMDNSHOST_H_
