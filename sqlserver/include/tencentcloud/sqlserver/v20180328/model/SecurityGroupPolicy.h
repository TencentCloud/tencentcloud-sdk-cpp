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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_SECURITYGROUPPOLICY_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_SECURITYGROUPPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * 安全组策略
                */
                class SecurityGroupPolicy : public AbstractModel
                {
                public:
                    SecurityGroupPolicy();
                    ~SecurityGroupPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取目的 IP 或 IP 段，例如172.16.0.0/12
                     * @return CidrIp 目的 IP 或 IP 段，例如172.16.0.0/12
                     * 
                     */
                    std::string GetCidrIp() const;

                    /**
                     * 设置目的 IP 或 IP 段，例如172.16.0.0/12
                     * @param _cidrIp 目的 IP 或 IP 段，例如172.16.0.0/12
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
                     * 获取端口或者端口范围
                     * @return PortRange 端口或者端口范围
                     * 
                     */
                    std::string GetPortRange() const;

                    /**
                     * 设置端口或者端口范围
                     * @param _portRange 端口或者端口范围
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
                     * 获取网络协议，支持 UDP、TCP等
                     * @return IpProtocol 网络协议，支持 UDP、TCP等
                     * 
                     */
                    std::string GetIpProtocol() const;

                    /**
                     * 设置网络协议，支持 UDP、TCP等
                     * @param _ipProtocol 网络协议，支持 UDP、TCP等
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
                     * 获取规则限定的方向，OUTPUT-出战规则  INPUT-进站规则
                     * @return Dir 规则限定的方向，OUTPUT-出战规则  INPUT-进站规则
                     * 
                     */
                    std::string GetDir() const;

                    /**
                     * 设置规则限定的方向，OUTPUT-出战规则  INPUT-进站规则
                     * @param _dir 规则限定的方向，OUTPUT-出战规则  INPUT-进站规则
                     * 
                     */
                    void SetDir(const std::string& _dir);

                    /**
                     * 判断参数 Dir 是否已赋值
                     * @return Dir 是否已赋值
                     * 
                     */
                    bool DirHasBeenSet() const;

                private:

                    /**
                     * 策略，ACCEPT 或者 DROP
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 目的 IP 或 IP 段，例如172.16.0.0/12
                     */
                    std::string m_cidrIp;
                    bool m_cidrIpHasBeenSet;

                    /**
                     * 端口或者端口范围
                     */
                    std::string m_portRange;
                    bool m_portRangeHasBeenSet;

                    /**
                     * 网络协议，支持 UDP、TCP等
                     */
                    std::string m_ipProtocol;
                    bool m_ipProtocolHasBeenSet;

                    /**
                     * 规则限定的方向，OUTPUT-出战规则  INPUT-进站规则
                     */
                    std::string m_dir;
                    bool m_dirHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_SECURITYGROUPPOLICY_H_
