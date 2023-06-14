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

#ifndef TENCENTCLOUD_BMEIP_V20180625_MODEL_EIPACLRULE_H_
#define TENCENTCLOUD_BMEIP_V20180625_MODEL_EIPACLRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bmeip
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * eipacl规则
                */
                class EipAclRule : public AbstractModel
                {
                public:
                    EipAclRule();
                    ~EipAclRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取源 IP
                     * @return Ip 源 IP
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置源 IP
                     * @param _ip 源 IP
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取目标端口
                     * @return Port 目标端口
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置目标端口
                     * @param _port 目标端口
                     * 
                     */
                    void SetPort(const std::string& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取协议(TCP/UDP/ICMP/ANY)
                     * @return Protocol 协议(TCP/UDP/ICMP/ANY)
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议(TCP/UDP/ICMP/ANY)
                     * @param _protocol 协议(TCP/UDP/ICMP/ANY)
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取策略（accept/drop）
                     * @return Action 策略（accept/drop）
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置策略（accept/drop）
                     * @param _action 策略（accept/drop）
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Description 备注
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置备注
                     * @param _description 备注
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
                     * 源 IP
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 目标端口
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 协议(TCP/UDP/ICMP/ANY)
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 策略（accept/drop）
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMEIP_V20180625_MODEL_EIPACLRULE_H_
