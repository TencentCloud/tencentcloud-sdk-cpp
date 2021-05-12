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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_SECURITYGROUPBOUND_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_SECURITYGROUPBOUND_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * 安全组规则
                */
                class SecurityGroupBound : public AbstractModel
                {
                public:
                    SecurityGroupBound();
                    ~SecurityGroupBound() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取执行规则。ACCEPT或DROP
                     * @return Action 执行规则。ACCEPT或DROP
                     */
                    std::string GetAction() const;

                    /**
                     * 设置执行规则。ACCEPT或DROP
                     * @param Action 执行规则。ACCEPT或DROP
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取ip段。
                     * @return CidrIp ip段。
                     */
                    std::string GetCidrIp() const;

                    /**
                     * 设置ip段。
                     * @param CidrIp ip段。
                     */
                    void SetCidrIp(const std::string& _cidrIp);

                    /**
                     * 判断参数 CidrIp 是否已赋值
                     * @return CidrIp 是否已赋值
                     */
                    bool CidrIpHasBeenSet() const;

                    /**
                     * 获取端口范围
                     * @return PortRange 端口范围
                     */
                    std::string GetPortRange() const;

                    /**
                     * 设置端口范围
                     * @param PortRange 端口范围
                     */
                    void SetPortRange(const std::string& _portRange);

                    /**
                     * 判断参数 PortRange 是否已赋值
                     * @return PortRange 是否已赋值
                     */
                    bool PortRangeHasBeenSet() const;

                    /**
                     * 获取传输层协议。tcp，udp或ALL
                     * @return IpProtocol 传输层协议。tcp，udp或ALL
                     */
                    std::string GetIpProtocol() const;

                    /**
                     * 设置传输层协议。tcp，udp或ALL
                     * @param IpProtocol 传输层协议。tcp，udp或ALL
                     */
                    void SetIpProtocol(const std::string& _ipProtocol);

                    /**
                     * 判断参数 IpProtocol 是否已赋值
                     * @return IpProtocol 是否已赋值
                     */
                    bool IpProtocolHasBeenSet() const;

                private:

                    /**
                     * 执行规则。ACCEPT或DROP
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * ip段。
                     */
                    std::string m_cidrIp;
                    bool m_cidrIpHasBeenSet;

                    /**
                     * 端口范围
                     */
                    std::string m_portRange;
                    bool m_portRangeHasBeenSet;

                    /**
                     * 传输层协议。tcp，udp或ALL
                     */
                    std::string m_ipProtocol;
                    bool m_ipProtocolHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_SECURITYGROUPBOUND_H_
