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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_NETWORKACLENTRY_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_NETWORKACLENTRY_H_

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
                * 网络ACL规则。
                */
                class NetworkAclEntry : public AbstractModel
                {
                public:
                    NetworkAclEntry();
                    ~NetworkAclEntry() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取修改时间。
                     * @return ModifyTime 修改时间。
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置修改时间。
                     * @param ModifyTime 修改时间。
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取协议, 取值: TCP,UDP, ICMP, ALL。
                     * @return Protocol 协议, 取值: TCP,UDP, ICMP, ALL。
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议, 取值: TCP,UDP, ICMP, ALL。
                     * @param Protocol 协议, 取值: TCP,UDP, ICMP, ALL。
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取端口(all, 单个port,  range)。当Protocol为ALL或ICMP时，不能指定Port。
                     * @return Port 端口(all, 单个port,  range)。当Protocol为ALL或ICMP时，不能指定Port。
                     */
                    std::string GetPort() const;

                    /**
                     * 设置端口(all, 单个port,  range)。当Protocol为ALL或ICMP时，不能指定Port。
                     * @param Port 端口(all, 单个port,  range)。当Protocol为ALL或ICMP时，不能指定Port。
                     */
                    void SetPort(const std::string& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取网段或IP(互斥)。
                     * @return CidrBlock 网段或IP(互斥)。
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置网段或IP(互斥)。
                     * @param CidrBlock 网段或IP(互斥)。
                     */
                    void SetCidrBlock(const std::string& _cidrBlock);

                    /**
                     * 判断参数 CidrBlock 是否已赋值
                     * @return CidrBlock 是否已赋值
                     */
                    bool CidrBlockHasBeenSet() const;

                    /**
                     * 获取网段或IPv6(互斥)。
                     * @return Ipv6CidrBlock 网段或IPv6(互斥)。
                     */
                    std::string GetIpv6CidrBlock() const;

                    /**
                     * 设置网段或IPv6(互斥)。
                     * @param Ipv6CidrBlock 网段或IPv6(互斥)。
                     */
                    void SetIpv6CidrBlock(const std::string& _ipv6CidrBlock);

                    /**
                     * 判断参数 Ipv6CidrBlock 是否已赋值
                     * @return Ipv6CidrBlock 是否已赋值
                     */
                    bool Ipv6CidrBlockHasBeenSet() const;

                    /**
                     * 获取ACCEPT 或 DROP。
                     * @return Action ACCEPT 或 DROP。
                     */
                    std::string GetAction() const;

                    /**
                     * 设置ACCEPT 或 DROP。
                     * @param Action ACCEPT 或 DROP。
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取规则描述，最大长度100。
                     * @return Description 规则描述，最大长度100。
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置规则描述，最大长度100。
                     * @param Description 规则描述，最大长度100。
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 修改时间。
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 协议, 取值: TCP,UDP, ICMP, ALL。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 端口(all, 单个port,  range)。当Protocol为ALL或ICMP时，不能指定Port。
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 网段或IP(互斥)。
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * 网段或IPv6(互斥)。
                     */
                    std::string m_ipv6CidrBlock;
                    bool m_ipv6CidrBlockHasBeenSet;

                    /**
                     * ACCEPT 或 DROP。
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 规则描述，最大长度100。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_NETWORKACLENTRY_H_
