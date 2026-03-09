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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DNSSERVERS_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DNSSERVERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * SSL VPN Server DnsServers
                */
                class DnsServers : public AbstractModel
                {
                public:
                    DnsServers();
                    ~DnsServers() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主DNS配置
                     * @return PrimaryDns 主DNS配置
                     * 
                     */
                    std::string GetPrimaryDns() const;

                    /**
                     * 设置主DNS配置
                     * @param _primaryDns 主DNS配置
                     * 
                     */
                    void SetPrimaryDns(const std::string& _primaryDns);

                    /**
                     * 判断参数 PrimaryDns 是否已赋值
                     * @return PrimaryDns 是否已赋值
                     * 
                     */
                    bool PrimaryDnsHasBeenSet() const;

                    /**
                     * 获取备DNS配置
                     * @return SecondaryDns 备DNS配置
                     * 
                     */
                    std::string GetSecondaryDns() const;

                    /**
                     * 设置备DNS配置
                     * @param _secondaryDns 备DNS配置
                     * 
                     */
                    void SetSecondaryDns(const std::string& _secondaryDns);

                    /**
                     * 判断参数 SecondaryDns 是否已赋值
                     * @return SecondaryDns 是否已赋值
                     * 
                     */
                    bool SecondaryDnsHasBeenSet() const;

                private:

                    /**
                     * 主DNS配置
                     */
                    std::string m_primaryDns;
                    bool m_primaryDnsHasBeenSet;

                    /**
                     * 备DNS配置
                     */
                    std::string m_secondaryDns;
                    bool m_secondaryDnsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DNSSERVERS_H_
