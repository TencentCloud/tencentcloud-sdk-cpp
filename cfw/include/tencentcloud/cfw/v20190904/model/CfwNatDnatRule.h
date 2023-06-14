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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_CFWNATDNATRULE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_CFWNATDNATRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * NAT防火墙Dnat规则
                */
                class CfwNatDnatRule : public AbstractModel
                {
                public:
                    CfwNatDnatRule();
                    ~CfwNatDnatRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取网络协议，可选值：TCP、UDP。
                     * @return IpProtocol 网络协议，可选值：TCP、UDP。
                     * 
                     */
                    std::string GetIpProtocol() const;

                    /**
                     * 设置网络协议，可选值：TCP、UDP。
                     * @param _ipProtocol 网络协议，可选值：TCP、UDP。
                     * 
                     */
                    void SetIpProtocol(const std::string& _ipProtocol);

                    /**
                     * 判断参数 IpProtocol 是否已赋值
                     * @return IpProtocol 是否已赋值
                     * 
                     */
                    bool IpProtocolHasBeenSet() const;

                    /**
                     * 获取弹性IP。
                     * @return PublicIpAddress 弹性IP。
                     * 
                     */
                    std::string GetPublicIpAddress() const;

                    /**
                     * 设置弹性IP。
                     * @param _publicIpAddress 弹性IP。
                     * 
                     */
                    void SetPublicIpAddress(const std::string& _publicIpAddress);

                    /**
                     * 判断参数 PublicIpAddress 是否已赋值
                     * @return PublicIpAddress 是否已赋值
                     * 
                     */
                    bool PublicIpAddressHasBeenSet() const;

                    /**
                     * 获取公网端口。
                     * @return PublicPort 公网端口。
                     * 
                     */
                    int64_t GetPublicPort() const;

                    /**
                     * 设置公网端口。
                     * @param _publicPort 公网端口。
                     * 
                     */
                    void SetPublicPort(const int64_t& _publicPort);

                    /**
                     * 判断参数 PublicPort 是否已赋值
                     * @return PublicPort 是否已赋值
                     * 
                     */
                    bool PublicPortHasBeenSet() const;

                    /**
                     * 获取内网地址。
                     * @return PrivateIpAddress 内网地址。
                     * 
                     */
                    std::string GetPrivateIpAddress() const;

                    /**
                     * 设置内网地址。
                     * @param _privateIpAddress 内网地址。
                     * 
                     */
                    void SetPrivateIpAddress(const std::string& _privateIpAddress);

                    /**
                     * 判断参数 PrivateIpAddress 是否已赋值
                     * @return PrivateIpAddress 是否已赋值
                     * 
                     */
                    bool PrivateIpAddressHasBeenSet() const;

                    /**
                     * 获取内网端口。
                     * @return PrivatePort 内网端口。
                     * 
                     */
                    int64_t GetPrivatePort() const;

                    /**
                     * 设置内网端口。
                     * @param _privatePort 内网端口。
                     * 
                     */
                    void SetPrivatePort(const int64_t& _privatePort);

                    /**
                     * 判断参数 PrivatePort 是否已赋值
                     * @return PrivatePort 是否已赋值
                     * 
                     */
                    bool PrivatePortHasBeenSet() const;

                    /**
                     * 获取NAT防火墙转发规则描述。
                     * @return Description NAT防火墙转发规则描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置NAT防火墙转发规则描述。
                     * @param _description NAT防火墙转发规则描述。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 网络协议，可选值：TCP、UDP。
                     */
                    std::string m_ipProtocol;
                    bool m_ipProtocolHasBeenSet;

                    /**
                     * 弹性IP。
                     */
                    std::string m_publicIpAddress;
                    bool m_publicIpAddressHasBeenSet;

                    /**
                     * 公网端口。
                     */
                    int64_t m_publicPort;
                    bool m_publicPortHasBeenSet;

                    /**
                     * 内网地址。
                     */
                    std::string m_privateIpAddress;
                    bool m_privateIpAddressHasBeenSet;

                    /**
                     * 内网端口。
                     */
                    int64_t m_privatePort;
                    bool m_privatePortHasBeenSet;

                    /**
                     * NAT防火墙转发规则描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_CFWNATDNATRULE_H_
