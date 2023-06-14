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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_SECURITYGROUPBOUND_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_SECURITYGROUPBOUND_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * 安全出入口规则
                */
                class SecurityGroupBound : public AbstractModel
                {
                public:
                    SecurityGroupBound();
                    ~SecurityGroupBound() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取来源 IP 或 IP 段，例如192.168.0.0/16
                     * @return CidrIp 来源 IP 或 IP 段，例如192.168.0.0/16
                     * 
                     */
                    std::string GetCidrIp() const;

                    /**
                     * 设置来源 IP 或 IP 段，例如192.168.0.0/16
                     * @param _cidrIp 来源 IP 或 IP 段，例如192.168.0.0/16
                     * 
                     */
                    void SetCidrIp(const std::string& _cidrIp);

                    /**
                     * 判断参数 CidrIp 是否已赋值
                     * @return CidrIp 是否已赋值
                     * 
                     */
                    bool CidrIpHasBeenSet() const;

                    /**
                     * 获取策略，ACCEPT 或者 DROP
                     * @return Action 策略，ACCEPT 或者 DROP
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置策略，ACCEPT 或者 DROP
                     * @param _action 策略，ACCEPT 或者 DROP
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
                     * 获取端口
                     * @return PortRange 端口
                     * 
                     */
                    std::string GetPortRange() const;

                    /**
                     * 设置端口
                     * @param _portRange 端口
                     * 
                     */
                    void SetPortRange(const std::string& _portRange);

                    /**
                     * 判断参数 PortRange 是否已赋值
                     * @return PortRange 是否已赋值
                     * 
                     */
                    bool PortRangeHasBeenSet() const;

                    /**
                     * 获取网络协议，支持 UDP、TCP 等
                     * @return IpProtocol 网络协议，支持 UDP、TCP 等
                     * 
                     */
                    std::string GetIpProtocol() const;

                    /**
                     * 设置网络协议，支持 UDP、TCP 等
                     * @param _ipProtocol 网络协议，支持 UDP、TCP 等
                     * 
                     */
                    void SetIpProtocol(const std::string& _ipProtocol);

                    /**
                     * 判断参数 IpProtocol 是否已赋值
                     * @return IpProtocol 是否已赋值
                     * 
                     */
                    bool IpProtocolHasBeenSet() const;

                private:

                    /**
                     * 来源 IP 或 IP 段，例如192.168.0.0/16
                     */
                    std::string m_cidrIp;
                    bool m_cidrIpHasBeenSet;

                    /**
                     * 策略，ACCEPT 或者 DROP
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 端口
                     */
                    std::string m_portRange;
                    bool m_portRangeHasBeenSet;

                    /**
                     * 网络协议，支持 UDP、TCP 等
                     */
                    std::string m_ipProtocol;
                    bool m_ipProtocolHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_SECURITYGROUPBOUND_H_
